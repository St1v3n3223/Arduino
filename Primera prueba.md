## Programa.

![Error](https://github.com/St1v3n3223/Arduino/blob/main/Captura%20de%20pantalla%20de%202021-10-06%2012-09-56.png)

## Morse 1.md

![](https://raw.githubusercontent.com/St1v3n3223/Arduino/main/Captura%20de%20pantalla%20de%202021-10-13%2012-52-33%20-%201.png)

### En este momento estamos programando las luzes

![](https://raw.githubusercontent.com/St1v3n3223/Arduino/main/Captura%20de%20pantalla%20de%202021-10-13%2012-57-53.png)

### En esta parte se programan los lads


![](https://raw.githubusercontent.com/St1v3n3223/Arduino/main/Captura%20de%20pantalla%20de%202021-10-13%2013-08-26.png)

### Poner nuestro nombre en codigo morse

### Me llamo Stiven pero he puesto Sti porque me gusta mas.
# Arduino
ARDUINO

[enlace](https://github.com/d-prieto?tab=repositories)

-Primera prueba.md
Programa de ejemplo BLINK.INO
error en arduino:
Ha ocurrido un error mientras se enviaba el sketch
avrdude: ser_open(): can't open device "/dev/ttyACM0": Permission denied
los errores arduino IDE :
COMPILAR: 
Traducir a codigo maquina 
-83 5e FF o A 38

enviar:
ABRIR PUERTO 
-enviar el compilado 
-Revisarla 
CERRAR PUERTO 




## Revisar
Componentes
  
Electricos

-morse-   hicimos modificaciones en el codigo  para cambiar el trengo hilo.para eso hicimos cables en dos lineas de lay(-)





![](https://github.com/St1v3n3223/Arduino/blob/main/MORSE_3_-_STIVEN.ino)

## Errores

El bug es un problema en un programa de un ordenador o software que desencadena un resultado no esperado.

Un glitch es un tipo de bug pero gráfico.

Errores : Está en Runtime Error, Compiling Error

Excepción: Ejemplos Java, Python, Ada.

## Como programar

- Primero tenemos el Arduino IDE instalado.

- Tenemos un usuario con permisos.

- Conectamos el Arduino por USB.

- Cargamos el programa Blink.ino, Archivo --> Ejemplos --> 1. Basics --> Blink

- Pulsamos el botón subir (->) 
 
 Errores posibles --> Si no hay puerto --> Herramientas --> Puerto
 
 Error --> Port busy --> Esperar 1 min aprox sin desenchufar el Arduino
 
 *Conseguimos programar el Blink.ino*
 
 1. Buscarlo en Internet
 
 2. Subirlo Nosotros

 3. Enlazar en primeras pruebas.md

Después de blink.ino iniciamos pruebas en código morse

Morse 1 --> Hicimos modificaciones en el código para cambiar el tiempo de brillo. Para eso hicimos cambios en de lineas de delay (_);

# Que hace Blink.ino

void loop () {

Cuatro sentencias ( o líneas)

}

- digitalWrite(LED_BUILTIN, HIGH);

- delay (1000)

- digitalWrite(LED_BUILTIN, LOW);

- delay (1000)

delay (_) --> nos pide un número, ese número será los milisegundos de espera

1000 --> 1 segundo

60000 --> 1 minuto

500 --> medio segundo

50 = 0,05 s --> el ojo humano no lo ve

- Hicimos un pulso largo y un pulso corto

Pulso largo de 200 500 y pulso corto de 100 300


