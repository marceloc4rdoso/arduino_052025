int leituraSom;
int contador = 0;

void setup(){  
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
  leituraSom = analogRead(A0);
  if (leituraSom < 500){
    contador++;
    Serial.println("Ativou: ");
    Serial.println(leituraSom);
    delay(105);
  }
  if (contador == c 2){
    digitalWrite(13, !digitalRead(13));
    contador = 0;
    Serial.println(contador);
  }
  
}
