const int buttonPin = 2; // pino do botão
const int motorPin = 9; // pino do motor

void setup() {
  pinMode(buttonPin, INPUT); // define o pino do botão como entrada
  pinMode(motorPin, OUTPUT); // define o pino do motor como saída
}

void loop() {
  int buttonState = digitalRead(buttonPin); // lê o estado do botão
  if (buttonState == HIGH) { // se o botão estiver pressionado
    digitalWrite(motorPin, HIGH); // liga o motor
  } else {
    digitalWrite(motorPin, LOW); // desliga o motor
  }
}
