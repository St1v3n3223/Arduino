## Resumen






### Introduccion






## Proceso de montaje
-Materiales nesesarios
-Foto del escrito
-Problemas y soluciones







## Codigo
-explicar
-enlace al codigo utilizado





## Resultado
-foto
-video
-funciona


## variaciones
## Añadir un boton
Vamos a añadir un boton al pin 3 de tal forma que solo cuando se pulse el lñed 3 se encendera.El resto del proyecto(hardwere y osftware)es el mismo.

Antes Led 220

Pin 3 ----LED/--220--GND


Despues

Pin 3 ----LED/--Boton--220--GND

 Vamos a añadir un botón al pin 3 de tal forma que solo cuando se pulse el LED 3 se encenderá. El resto del proyecto (hardware y software es el mismo).








Ahora os explicaré, tanto por texto como por fotos como aprendimos a hacerlo.

En nuestro caso, la LED de la izquierda permanecerá encendida  hasta que pulse el botón. Cuando Arduino reciba la señal del botón pulsado, la luz de la izquierda se apaga y se encienden otras dos luces que comienzan a parpadear.

Conectar la placa de pruebas a las conexiones de 5V y masa de Arduino. Colocar los dos diodos LED sobre la placa de 
pruebas. Conectar el cátodo (patilla corta) de cada LED masa a través de una resistencia
de 220 ohmios. Conectar el ánodo (patilla larga) del LED de la izquierda al pin 3 de Arduino. 
Conectar los ánodos de los otros dos LEDs a los pins 4 y 5 respectivamente.

Colocar el pulsador sobre la placa de pruebas. Conectar un extremo a la alimentación y el otro terminal del pulsador al 2 de Arduino. 
También necesita añadir una resistencia de 10K ohmios desde masa al pin del interruptor que va conectado a Arduino. Esta resistencia de puesta a cero conecta el 
pin a masa cuando el pulsador está abierto, así que Arduino lee LOW cuando no hay tensión en ese pin del pulsador.

Para crear una variable, es necesario declarar de que tipo se trata. Una variable de tipo int guardará un numero entero (también llamado integer); 
eso significa que almacena cualquier número sin decimales. Cuando se declara una variable, normalmente también se le asigna a la vez un valor 
inicial. Las declaraciones de la variables siempre deben de finalizar con un punto y coma (;).
La función setup() solo se ejecuta una vez, cuando Arduino recibe la 
alimentación para funcionar. Esta función define un bloque, el cual se abre 
con una llave “{“ y se cierra con otra llave “}”, en donde se escriben las 
instrucciones que configuran los pins digitales de Arduino como entradas o 
como salidas, usando para ello una función llamada pindMode(). Los pins 
conectados a los LEDs serán OUTPUTs y el pin de un pulsador será una 
INPUT.
La función loop() se ejecuta continuamente después de que la función 
setup() se haya completado. A través de las instrucciones que se incluyen 
dentro del bloque después de la función loop() es donde se comprobará el 
voltaje de las entradas y si las salidas están activadas o desactivadas. Para 
verificar el nivel de voltaje de una entrada digital, se utiliza la función 
digitalRead() la cual comprueba el voltaje en el pin elegido. Para saber que 
pin debe de verificar digitalRead() espera un argumento.
Los argumentos son información que se le pasa a las funciones diciéndoles 
como deben de realizar su trabajo. Por ejemplo, digitalRead() necesita un 
argumento: que pin debe verificar. En el programa de Interface de la Nave 
Espacial, digitalRead() va a verificar el estado del pin 2 para después 
almacenar el valor dentro de la variable switchState.
Si hay voltaje en el pin 2 cuando digitalRead() es llamada, entonces la 
variable switchState almacena un valor HIGH (o 1). Si no hay voltaje en el pin 
2, switchState almacenará el valor LOW (o 0).

