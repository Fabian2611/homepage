int red = D7;
int ylw = D6;
int grn = D5;
int wht = D2;
int btn = D4;
int bstate = 0;
int prevstate = 0;
int pressed = 0;
int t1 = 0;
int t2 = 0;
int delays[4];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(red, OUTPUT);
  pinMode(ylw, OUTPUT);
  pinMode(grn, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  pressed = 0;
  t1 = 0;
}

void loop() {
  while(pressed < 4){
    bstate = digitalRead(btn);
    
    if (bstate != prevstate){
      if(bstate == HIGH){
        delays[pressed] = millis() - t1;
        pressed++;
        t1 = millis();
      }
    }
    prevstate = bstate;
  }
  
  digitalWrite(red, HIGH);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, LOW);
  delay(delays[0]);

  digitalWrite(red, HIGH);
  digitalWrite(ylw, HIGH);
  digitalWrite(grn, LOW);
  delay(delays[1]);

  digitalWrite(red, LOW);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, HIGH);
  delay(delays[2]);
  
  digitalWrite(red, LOW);
  digitalWrite(ylw, HIGH);
  digitalWrite(grn, LOW);
  delay(delays[3]);  

}
