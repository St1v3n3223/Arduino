#include <Servo.h>

Servo myServo;

const int piezo = A0;

const int switchPin = 2;

const int yellowLed = 3

const int greenLed = 4

const int redLed= 5;

int knockVal;

int switchVal;

const int quietKnock = 10;

const int loudknock = 100;

boolean locked = false;

int numberOfknocks = 0;

void setup(){

  myServo. attach(9);

  pinMode(yellowLed, OUTPUT);

  pinMode(redLed, OUTPUT);

  pinMode(greenLed, OUTPUT);

  pinMode(switchPin, INPUT);

  Serial.begin(9600);

  digitalWrite(greenLed) HIGH);

  myServo.write(0);

  Serial.println(" La caja está abierta")

}

void loop(){

  if(locked == false ){

    switchVal = digitalRead(switchPin);

    if(switchVal ==   HIGH){

      locked = true;

      digitalWrite(greenLed, LOW)

      digitalWrite(redLed, HIGH)

      myServo.write(90);

      Serial.println("La caja está cerrada");

      delay (1000);
    }
  }
}

if(locked == true){

  knockVal = analogRead(peizo);

  if(numberOfknocks < 3 && knockVal > 0){

    if(checkForknock(knockVal) == true]{

      numberOfknocks++;
     
    
  
}

Serial.print(3-numberOfknocks);
Serial.println("Moras golpes para ir")
  }

  if(numberOfknocks >= 3){
    locked = false;
    myServo.write(0);
    delay(20);
    digitalWrite(greenLed, HIGH):
    digitalWrite(redLed, LOW);
    Serial.println("La caja está abierta");
  }
 }
}

boolean checkFornock(int value){
  if(value > quietknock && value < loudknock){
    digitalWrite(yellowLed, HIGH);
    delay(50);
    digitalWrite(yellowLed, LOW);
    Serial.print("Valor de golpe válido")
     Serial.println(value);
  }
