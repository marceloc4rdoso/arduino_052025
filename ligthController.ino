int leituraLuz;

void setup(){  
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}

void loop(){
  leituraLuz = analogRead(A0);
  int controleLed = map(leituraLuz, 0, 1023, 0, 255);
  analogWrite(5,controleLed);
  
}
