int red = D5;
int ylw = D7;
int grn = D8;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(ylw, OUTPUT);
  pinMode(grn, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, LOW);
  delay(5000);

  digitalWrite(red, HIGH);
  digitalWrite(ylw, HIGH);
  digitalWrite(grn, LOW);
  delay(1000);

  digitalWrite(red, LOW);
  digitalWrite(ylw, LOW);
  digitalWrite(grn, HIGH);
  delay(5000);
  
  digitalWrite(red, LOW);
  digitalWrite(ylw, HIGH);
  digitalWrite(grn, LOW);
  delay(1000);
}
