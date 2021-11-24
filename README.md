## Me llamo Stiven Wood y este repositorio trata sobre mis trabajos de arduino.


## Estos són mis enlaçes.

![Circuitos](https://github.com/St1v3n3223/Arduino/blob/main/Circuitos)


![Primera prueba](https://github.com/St1v3n3223/Arduino/blob/main/Primera%20prueba.md)


![Arquitectura de ordenadores](https://github.com/St1v3n3223/1er-Trimestre/blob/main/Arquitectura%20de%20ordenadores.Md)



![Proyecto](https://github.com/St1v3n3223/Arduino/blob/main/Proyecto.md)


![Medidor de amor](https://github.com/St1v3n3223/Arduino/blob/main/Medidor%20de%20amor.md)

[Lampara varioscolores](https://github.com/St1v3n3223/Arduino/blob/main/Lampara%20varios%20colores.MD)

[Interfaz de nave](https://github.com/St1v3n3223/Arduino/blob/main/interfaz%20nave%20espacial.md)

[Thererin optico](https://github.com/St1v3n3223/Arduino/blob/main/Thererin%20optico.MD)

[Repositorio chichiliaa](https://github.com/chechiliaa/arduino/blob/main/snippet_kill_switch.cpp)

//Colocar en la sección de variables globales.
int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;

int buttonPin = 2;
// Incluir dentro del setup.
pinMode(buttonPin, INPUT);
//Sustituir loop.

void loop() {
  checkButton();
  if (play) {
  // incluir aquí el código a ejecutar   
  }
}

//función checkbutton 
void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH && !isTheButtonBeingPressed){
    play = !play;
    isTheButtonBeingPressed = true;
  }
  
  if (switchState == LOW)
  {
  isTheButtonBeingPressed = false;
  }

}
