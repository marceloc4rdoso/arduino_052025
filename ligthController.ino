int leituraLuz;

void setup(){  
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}

void loop(){
  leituraLuz = analogRead(A0);
  int controleLed = map(leituraLuz, 0,1023,255,0);
  if(controleLed < 0){
    controleLed = 0;
  }
  else if(controleLed > 255){
    controleLed = 255;
  }
  Serial.println(controleLed);
  analogWrite(5,controleLed);
  
}
