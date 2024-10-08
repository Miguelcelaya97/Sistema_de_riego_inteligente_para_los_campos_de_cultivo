# Sistema de riego para campos de cultivo


## Introducción

El proyecto “Sistema de Riego Inteligente” tiene como objetivo proporcionar a los campesinos y agricultores una herramienta eficiente y programable para el riego de cultivos. Utilizando una Raspberry Pi, este sistema automatizado controla el suministro de agua, optimizando su uso y ahorrando tiempo y recursos.

### Solución Propuesta 
El proyecto “Sistema de Riego Inteligente” tiene como objetivo proporcionar a agricultores una herramienta automatizada capaz de regar los cultivos de forma eficiente. A través de una Raspberry Pi, este sistema programado controla el suministro de agua, optimizando su uso y ahorrando tiempo y recursos.

Con la intención de evitar pérdidas de cultivo o asfixia de raíces debido a los cambios climáticos a los que estamos sometidos de forma global por el deterioro de las propias actividades del humano, el desarrollo del dispositivo para el que está diseñado este proyecto servirá de ayuda al sector agrícola con las actividades de riego en el campo.

## Objetivos especificos 

1. Desarrollar un dispositivo capaz de regar diversos cultivos (como lechuga, zanahorias, cebollas, jitomates, etc.) y llevar un registro preciso del uso de agua, optimizando el riego y facilitando la labor en el campo.

2. Implementar un sistema de alertas basado en sensores de humedad del suelo. Cuando la tierra esté seca, el sistema activará una bomba de agua para mantener los cultivos húmedos y evitar la sequía.

3. Diseñar un mecanismo que regule el flujo de agua para evitar excesos y garantizar un riego adecuado según las necesidades de cada cultivo.


## Materiales

- Raspberry Pi
- ESP 32 DEVKIT V1
-  cable de USB a tipo CNODE MCU ESP-32S
-  cable de USB a tipo micro B
-  Protoboard
-  Cables jumper (M-M, H-H Y M-H)
- Sensor de humedad de tierra
- Bomba de agua de 5v


### Software

-  Arduino IDE
-  Node-Red


## Servicios
1.  **Acceso a una base de datos:** se registrará cada vez que cuando un cultivo le falte agua para que así se riegue mediante una bomba de agua y este húmedo.


## Resultados esperados
Este proyecto tiene como objetivo facilitar la labor de los campesinos y agricultores al ayudar con el riego del agua y ahorrar tiempo durante las sequías, evitando así pérdidas en los cultivos. Esto resulta especialmente útil en campos de cultivo donde no se dispone de suficiente personal para llevar a cabo el riego de manera eficiente.


## Conclusiones
Este proyecto podrá facilitar actividades del sector agrícola que proporcionan los alimentos de la dieta básica mexicana, donde por medio del dispositivo y los sensores instalados sea posible identificar de forma automática cuando el campo requiera riego de agua en las cantidades necesarias evitando así desperdiciar el recurso o en su caso contrario no administrar la suficiente teniendo como consecuencia perdida de cultivo. 

## Resultado 
A continuacion, se va presentar los dispositivos montados del proyecto del sistema de riego 

### Antes del incio de proceso de Riego
![](https://github.com/Miguelcelaya97/Sistema_de_riego_inteligente_para_los_campos_de_cultivo/blob/main/imagenes/antes/estadoinicialProyecto.png)
![](https://github.com/Miguelcelaya97/Sistema_de_riego_inteligente_para_los_campos_de_cultivo/blob/main/imagenes/antes/monitoreo.png)

### inicio del proceso de Regado
Led prendido comprueba el funcionamiento de la bomba de agua
![](https://github.com/Miguelcelaya97/Sistema_de_riego_inteligente_para_los_campos_de_cultivo/blob/main/imagenes/antes/estadoinicial.png)


![](https://github.com/Miguelcelaya97/Sistema_de_riego_inteligente_para_los_campos_de_cultivo/blob/main/imagenes/despues/suministroAgua.png)

![](https://github.com/Miguelcelaya97/Sistema_de_riego_inteligente_para_los_campos_de_cultivo/blob/main/imagenes/despues/monitoreo.png)

### Video funcional del Proyecto

https://github.com/user-attachments/assets/0bf8db65-881c-4825-880e-1f4281a1ddd0


Este proyecto fue realizado en el marco del curso IoT Essentials Developer impartido por [Codigo IoT ](https://www.codigoiot.com/) y organizado por la [Asociación Mexicana del Internet de las Cosas](https://www.asociacioniot.org/).

