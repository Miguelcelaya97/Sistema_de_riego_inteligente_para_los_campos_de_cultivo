// Bibliotecas
#include <WiFi.h>  // Biblioteca para el control de WiFi
#include <PubSubClient.h> // Biblioteca para conexión MQTT

// Datos de WiFi
const char* ssid = "********";  // Aquí debes poner el nombre de tu red
const char* password = "*******";  // Aquí debes poner la contraseña de tu red

// Datos del broker MQTT
const char* mqtt_server = "192.168.1.80"; // Si estás en una red local, coloca la IP asignada, en caso contrario, coloca la IP pública
IPAddress server(192, 168, 1, 80); // Define la dirección IP del servidor

// Tópico MQTT
const char* humidity_topic = "codigoiot/esp32/humedadTierra"; // Tópico para publicar los datos del sensor de humedad

// Objetos
WiFiClient espClient; // Este objeto maneja los datos de conexión WiFi
PubSubClient client(espClient); // Este objeto maneja los datos de conexión al broker

#define HUMIDITY_SENSOR 33 // El sensor está conectado al GPIO33

void setup() {
  Serial.begin(115200); // Inicia la comunicación serial a 115200 bps
  pinMode(HUMIDITY_SENSOR, INPUT); // Configura el pin del sensor de humedad como entrada

  // Conectar al WiFi
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado.");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());

  // Conectar al broker MQTT
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);

  // Intentar conectar al broker
  reconnect();
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  int humiditySensor = analogRead(HUMIDITY_SENSOR); // Lee la entrada en el pin analógico 33
  Serial.print("Humedad: ");
  Serial.println(humiditySensor); // Imprime el valor al monitor serial

  // Crear el payload con el valor del sensor
  char payload[10];
  itoa(humiditySensor, payload, 10);

  // Publicar el payload al tópico MQTT
  client.publish(humidity_topic, payload);

  delay(1000); // Espera un segundo para que tengamos tiempo de ver el resultado
}

void callback(char* topic, byte* payload, unsigned int length) {
  // Manejar mensajes entrantes si es necesario
}

void reconnect() {
  // Bucle hasta que nos conectemos
  while (!client.connected()) {
    Serial.print("Intentando conectar al broker MQTT...");
    // Intentar conectar
    if (client.connect("ESP32Client")) {
      Serial.println("conectado");
      // Suscribirse al tópico deseado (si es necesario)
      // client.subscribe("home/humidity");
    } else {
      Serial.print("falló, rc=");
      Serial.print(client.state());
      Serial.println(" intentando de nuevo en 5 segundos");
      // Esperar 5 segundos antes de reintentar
      delay(5000);
    }
  }
}
