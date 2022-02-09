# Instrumento de teclado

Hecho por Hanzla y Stiven.

### FUNCIONAMIENTO

Tiene que hacer ruido cada vez que tocas un boton y parar cuando no lo tienes pulsado.

## Proceso de montaje

Hemos seguido los pasos que se indican en el libro para montar el circuito y el codigo.

## Imágenes

![Imagenes](https://github.com/St1v3n3223/Arduino/blob/main/WhatsApp%20Image%202022-02-02%20at%2013.32.16.jpeg?raw=true)

## Código

int notes[] = {262, 294, 330, 349};

void setup() {
  
  Serial.begin(9600);
}

void loop() {
 
  int keyVal = analogRead(A0);

  Serial.println(keyVal);

  
  if (keyVal > 1010) {
   
    tone(8, notes[0]);
  } else if (keyVal >= 990 && keyVal <= 1010) {
   
    tone(8, notes[1]);
  } else if (keyVal >= 505 && keyVal <= 515) {
    
    tone(8, notes[2]);
  } else if (keyVal >= 5 && keyVal <= 10) {
    
    tone(8, notes[3]);
  } else {
   
    noTone(8);
  }
}
