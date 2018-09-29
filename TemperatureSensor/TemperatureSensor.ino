/*Based on https://openwebinars.net/blog/tutorial-arduino-entradas-analogicas-y-digitales/
* Important:
* - Arduino Analog input has value 1023 when input is 5V.
* - LM35 gives 10 mv / C
*  Therefore: T = Varduino  /  0.010 V / C
*  
 */

double lm35SensibilityInVoltsPerDegree = 0.01;
double arduinoSensibilityInVoltsPerValue = 5.0 / 1023;
int inputPin = 5;
double inputValue ;
double temperature;

void setup() {
   Serial.begin(9600); // open serial port to 9600 bps
}

void loop() {
  inputValue = analogRead(inputPin);
  Serial.println(inputValue);
  temperature = inputValue * arduinoSensibilityInVoltsPerValue / lm35SensibilityInVoltsPerDegree;  
  // put your main code here, to run repeatedly:
  Serial.print(temperature);
  Serial.print( " grados centigrados");
  Serial.println("");
     delay(1000);       
}
