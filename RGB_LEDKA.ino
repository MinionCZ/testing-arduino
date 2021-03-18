#define ZELENA 11
#define MODRA 10
#define CERVENA 9
#define MAX_PWM 256
#define DELKA_RETEZCE 7
#define RYCHLOST_PRENOSU 9600
void setup() {
  // put your setup code here, to run once:
  pinMode(ZELENA, OUTPUT);
  pinMode(MODRA, OUTPUT);
  pinMode(CERVENA, OUTPUT);
  Serial.begin(RYCHLOST_PRENOSU);
}
void loop() {
  // put your main code here, to run repeatedly:
  nastavBarvu(5, 153, 182);
}

void nastavBarvu(uint8_t red, uint8_t green, uint8_t blue) {
  analogWrite(CERVENA, red);
  analogWrite(ZELENA, green);
  analogWrite(MODRA, blue);
}

bool prislaData() {
  if (Serial.available() == DELKA_RETEZCE) {
    return true;
  }


}

void nactiPole(char * pole) {

}
