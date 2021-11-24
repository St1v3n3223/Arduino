# Interfaz de nave espacial

## Resumen    

La LED de la izquierda permanecerá encendida hasta que pulse el botón. Cuando Arduino reciba la señal del botón pulsado, la luz de la izquierda se apaga y se encienden otras dos luces que comienzan a parpadear.

Conectar la placa de pruebas a las conexiones de 5V y masa de Arduino. Colocar los dos diodos LED sobre la placa de pruebas. Conectar el cátodo (patilla corta) de cada LED masa a través de una resistencia de 220 ohmios. Conectar el ánodo (patilla larga) del LED de la izquierda al pin 3 de Arduino. Conectar los ánodos de los otros dos LEDs a los pins 4 y 5 respectivamente.

Colocar el pulsador sobre la placa de pruebas. Conectar un extremo a la alimentación y el otro terminal del pulsador al 2 de Arduino. También necesita añadir una resistencia de 10K ohmios desde masa al pin del interruptor que va conectado a Arduino. Esta resistencia de puesta a cero conecta el pin a masa cuando el pulsador está abierto, así que Arduino lee LOW cuando no hay tensión en ese pin del pulsador.

Para crear una variable, es necesario declarar de que tipo se trata. Una variable de tipo int guardará un numero entero (también llamado integer); eso significa que almacena cualquier número sin decimales. Cuando se declara una variable, normalmente también se le asigna a la vez un valor inicial. Las declaraciones de la variables siempre deben de finalizar con un punto y coma (;). La función setup() solo se ejecuta una vez, cuando Arduino recibe la alimentación para funcionar. Esta función define un bloque, el cual se abre con una llave “{“ y se cierra con otra llave “}”, en donde se escriben las instrucciones que configuran los pins digitales de Arduino como entradas o como salidas, usando para ello una función llamada pindMode(). Los pins conectados a los LEDs serán OUTPUTs y el pin de un pulsador será una INPUT. La función loop() se ejecuta continuamente después de que la función setup() se haya completado. A través de las instrucciones que se incluyen dentro del bloque después de la función loop() es donde se comprobará el voltaje de las entradas y si las salidas están activadas o desactivadas. Para verificar el nivel de voltaje de una entrada digital, se utiliza la función digitalRead() la cual comprueba el voltaje en el pin elegido. Para saber que pin debe de verificar digitalRead() espera un argumento. Los argumentos son información que se le pasa a las funciones diciéndoles como deben de realizar su trabajo. Por ejemplo, digitalRead() necesita un argumento: que pin debe verificar. En el programa de Interface de la Nave Espacial, digitalRead() va a verificar el estado del pin 2 para después almacenar el valor dentro de la variable switchState. Si hay voltaje en el pin 2 cuando digitalRead() es llamada, entonces la variable switchState almacena un valor HIGH (o 1). Si no hay voltaje en el pin 2, switchState almacenará el valor LOW (o 0).

## Introducción teórica

- construir circuito
- programar circuito
- variaciones


➙ ordenador: 

 ### input:  

- ratón
- teclado
- micro
- webcam

### output:

- altavoces
- monitor

➙ teléfono:

- entradas: micrófono, cámaras, pantallas táctil, giroscópio, acelerómetro.

- salidas: pantalla, altavoces, linterna, motor vibración

ARDUINO - 18 pines

## Proceso de montaje

Programación - pág 34-35
Resistencias - página 41. 220 - azules

SwitchState = 0;
SwitchState es una variable es de tipo "INT" que signifíca que es un número entero.

![imagen](https://user-images.githubusercontent.com/90753482/137898334-132197f3-919d-458d-987a-c5313d63964a.png)



## Errores:

La mayor parte de los errores de programación fueron por escribir de manera erronea una o dos palabras en el arduino.
Los errores del circuito fueron por colocar cables de manera incorrecta.


## Variaciones

### Añadir botón por hardware
Vamos a añadir un botón al pin 3 de tal forma que solo cuando se pulse el led 3 se encienda. El resto del proyecto
( hardware y software ) es el mismo.

Antes    LED   220 

Pin 3-----LED/-----ww ---- GND

Después

PIN 3-----LED/-----  WW---- GND
