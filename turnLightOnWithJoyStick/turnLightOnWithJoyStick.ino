// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

void setup() {
  pinMode(SW_pin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
  
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  int val = analogRead(X_pin);
  if(val>=0 && val<=509){lightOn();}
  if(val>=513 && val<=1028){lightOff();}
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  delay(500);
}

void lightOn(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void lightOff(){
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
}
