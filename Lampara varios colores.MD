```
## PWM(Pulse Width Modulation.)

Problema: Tengo un arduino que suministra 5V  

Se resuelve con pulsos.

A mayor intensidad de corriente(Amperios), el LED brilla más.

A menor intensidad de corriente(Amperios), el LED brilla menos.

Si subimos a bjamos el voltaje,haremos lo mismo con la intensidad suponiendo que la resistencia del circuito es la misma.

Entonces si conecto un LED con su resistencia de 220 Ohmnios

A un voltaje de 5V o de 3'3V

Con 5V el LED brillara más y con 3'3V brillara menos


```
```
## Pulsos

Es una señal eléctrica.

### Que és un pulso?

Un pulso eléctronico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar cambios hasta entorno A 12H3

A partir de 24 o 30H3 no somos capaçes visualmente.

Los pulsos modulados en ancho crean la ilución de voltajes intermedios entre 0 y 5V para ello usan Pulsos muy cortos

Que usaremos A traves de Funcion analogWrite(Pin,0-255

Esta funcion en pines con PWm

Los pines con PWN estan marcadoscon el Simbolo ~  (La tilde de la eñe)

La funcion nos pide dos cosas 

Por un lado el numero de Pin 

Por otro lado un numero entre 0 y 255

O-0% De voltaje

255- 100% de voltaje(5V)

