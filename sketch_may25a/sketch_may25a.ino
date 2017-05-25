
#define IS_SX A5
#define IS_DX A4

//#include <Sharp_IR.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int in = analogRead(IS_SX); 
  float volt = map(in, 0, 1023, 0, 5);
  int distanceCm = 27.728 * pow(map(in, 0, 1023, 0, 5000)/1000.0, -1.2045);
  Serial.println(distanceCm);

  in = analogRead(IS_DX); 
  volt = map(in, 0, 1023, 0, 5);
  distanceCm = 27.728 * pow(map(in, 0, 1023, 0, 5000)/1000.0, -1.2045);
  Serial.println(distanceCm);


  delay(100); // slow down serial port 
}
