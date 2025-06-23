


#define LEDverde 10
#define LEDamarelo 9
#define LEDvermelho 8


void setup()
{
  pinMode (LEDvermelho, OUTPUT);
  pinMode (LEDamarelo, OUTPUT);
  pinMode (LEDverde, OUTPUT);
}

void loop()
{
  //ativação do LED verde
  digitalWrite (LEDvermelho, LOW);
  digitalWrite(LEDverde, HIGH);
  delay(5000);
  digitalWrite(LEDverde, LOW);
  delay(500);
  
  //ativação do LED amarelo (oscilante)
  {
    digitalWrite(LEDamarelo, HIGH);
    delay(2000);
    digitalWrite(LEDamarelo, LOW);
    delay(500);
  }
  
  //ativação do LED vermelho
  digitalWrite(LEDvermelho, HIGH);
  delay(5000);
  digitalWrite(LEDvermelho, LOW);
  delay(500);
}
