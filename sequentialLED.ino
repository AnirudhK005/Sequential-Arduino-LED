//Sequential LED Flashes

const int ledPins[] = {3, 5, 6, 9, 10, 11};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int ledDelay = 150;
bool forward = true;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < numLeds; i++){
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void light(int pin){
  digitalWrite(pin, HIGH);
  delay(ledDelay);
  digitalWrite(pin, LOW);
}

void loop() {

  if(forward == true){
    for (int i = 0; i < numLeds; i++){

      light(ledPins[i]);

      if(i == (numLeds - 1)){
        forward = false;
      }
    }
  } else {
    for (int j = numLeds - 1; j >= 0; j--){

      light(ledPins[j]);

      if(j == 0){
        forward = true;
      }
    }
  }
}
