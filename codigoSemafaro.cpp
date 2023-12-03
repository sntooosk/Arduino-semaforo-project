int ledVermelho = 11;
int ledAmarelo = 12;
int ledVerde = 13;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  // Sinal aberto (verde)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(6000);  // Espera por 5 segundos

  // Sinal de atenção (amarelo)
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(4000);  // Espera por 2 segundos

  // Sinal fechado (vermelho)
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(6000);  // Espera por 5 segundos
}
