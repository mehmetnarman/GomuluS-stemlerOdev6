void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int gaz1 = analogRead(A0);
  gaz1 = map(gaz1, 300, 750, 0, 100);
  int gaz2 = analogRead(A1);
  gaz2 = map(gaz2, 300, 750, 0, 100);
  int gaz3 = analogRead(A2);
  gaz3 = map(gaz3, 300, 750, 0, 100);
  
  int sicaklik1 = analogRead(A5);
  sicaklik1 =(sicaklik1*500)/1023;
  int sicaklik2 = analogRead(A4);
  sicaklik2 =(sicaklik2*500)/1023;
  int sicaklik3 = analogRead(A3);
  sicaklik3 =(sicaklik3*500)/1023;
  
  digitalWrite(3, gaz1 >= 30 ? HIGH : LOW);
  digitalWrite(3, gaz2 >= 30 ? HIGH : LOW);
  digitalWrite(3, gaz3 >= 30 ? HIGH : LOW);
  
  digitalWrite(4, sicaklik1 >= 25 ? HIGH : LOW);
  digitalWrite(4, sicaklik2 >= 25 ? HIGH : LOW);
  digitalWrite(4, sicaklik3 >= 25 ? HIGH : LOW);
}
