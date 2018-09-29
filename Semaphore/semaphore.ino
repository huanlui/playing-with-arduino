/*************/
/*  Semaphore */
/*************/

// Based on Semáforo by Fernando Martinez Mendoza. https://openwebinars.net/blog/tutorial-arduino-ejemplo-semaforo/***/

int redPin=2;     
int yellowPin=4;  
int greenPin=7;   
int turnOnTime = 2000;  
int turnOffTime = 100;
int yellowBlinkingTime = 500;
int yellowNumberOfBlinks = 5;

void setup() {
  pinMode(greenPin,OUTPUT);  
  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT);   
}

void loop() {
 digitalWrite(greenPin,HIGH); 
 delay(turnOnTime);            
 digitalWrite(greenPin,LOW);  
 delay(turnOffTime);              

 for(int i = 0; i < 10; i++)
 {
   digitalWrite(yellowPin,HIGH); 
 delay(yellowBlinkingTime);                
 digitalWrite(yellowPin,LOW); 
 delay(turnOffTime);   
 }
            
 
 digitalWrite(redPin,HIGH); //encendemos el led verde
 delay(turnOnTime);              //esperamos 2 segundos
 digitalWrite(redPin,LOW);  //apagamos el led verde
 delay(turnOffTime);               //esperamos medio segundo
}
