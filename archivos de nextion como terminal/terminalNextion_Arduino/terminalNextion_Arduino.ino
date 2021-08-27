void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  NextTerminal("Soy un texto que enviaría Juan");
  delay(500);
}


void NextTerminal(String texto) {
Serial.print("v1.txt="+texto);        //  no se ha probado , pero puede que este mal esta metodologia de concatenacion de strings
ff();
Serial.print("click b1,1");
ff();
Serial.print("click b1,0");
ff();
Serial.println();
}

void ff(){ 
  Serial.write(0xff); 
  Serial.write(0xff); 
  Serial.write(0xff);
  delay(50);
}
