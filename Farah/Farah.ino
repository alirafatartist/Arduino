// #define led = 13;
// byte data1[10];
// byte data2[10] = { 21, 23, 78, 45, 34, 434, 980, 56, 432, 64 };

const int leds[6] = { 5, 6, 7, 8, 9, 10 };
int delayTime = 500;

void setup() {
  // Serial.begin(9600);
  // pinMode(led, OUTPUT);
  // for (int i = 0; i < 10; i++) {
  //   data1[i] = i;
  //   Serial.print(data1[i]);
  //   Serial.print(" : ");
  //   Serial.println(data2[i]);
  //   Serial.println("--------");
  // }
  for (int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int j = 0; j < 6; j++) {
    for (int z = 0; z < 6; z++) {
      digitalWrite(leds[z], LOW);
    }
    digitalWrite(leds[j], HIGH);
    delay(delayTime);
  }
}
