void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(5, INPUT);
}
void loop()
{
  if(digitalRead(5)==0)//Если кнопка включена, то...
  {
    tone(7, 500);//Зуммер включить на 1 сек (500Гц)
    delay(1000);
    noTone(7);
    delay(10000);//Считывание 10 сек
    int a;
    a=random(60, 95);
    Serial.print(a, DEC);//Передача данных по Bluetooth
    tone(7, 500);//Зуммер включить на 2 сек (500Гц)
    delay(2000);
    noTone(7);
  }
}
