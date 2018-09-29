// Modification of PWM tutorial (https://openwebinars.net/blog/tutorial-arduino-salidas/)

/*
 * ¡¡Important!!
 * Pins supporting PWM are flagged with ~  (3, 5, 6, 9, 10 and 11)
 */
int redPin = 3;
int analogValue = 0;
int delayTime = 100;
int maximumValue = 10; //With 230 ohms resistance , from maximumValue to 255 no change is appreciable
int increment = 1;

void setup() {
 pinMode(redPin,OUTPUT);
}

void loop() {
   analogWrite(redPin,analogValue);

   analogValue = analogValue + increment;

   if(analogValue == maximumValue)
    {
      increment = -1;
    }
    if(analogValue == 0)
   {
    increment = 1; 
   }

   delay(delayTime);
}
