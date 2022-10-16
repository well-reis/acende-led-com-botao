//ACENDER LED COM BOTÃO - (USANDO O RESISTOR INTERNO DO ARDUINO (PULL_UP))

int pinbotao = 8; //Pino de ligação do botão 
int ledPin =  7; //Pino de ligação do led
int estado_botao = 0;         // variável que indicará se o botao se encontra pressionado ou solto

void setup() {
  // inicializa o led como saída
  pinMode(ledPin, OUTPUT);
  // inicializa o botao como entrada que usara o resistor interno do arduino
  pinMode(pinbotao, INPUT_PULLUP);
}

void loop() {
  // lê o que o botão está recebendo
  estado_botao = digitalRead(pinbotao);

  // condição que testa se o botão esta pressionado ou solto
  if (estado_botao == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
