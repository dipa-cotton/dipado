#include <Arduino.h>

const int PIN_W = 1; // D0 GPIO1
const int PIN_A = 2; // D1 GPIO2
const int PIN_S = 3; // D2 GPIO3
const int PIN_D = 4; // D3 GPIO4

const int PIN_I = 1; // D0 GPIO1
const int PIN_J = 2; // D1 GPIO2
const int PIN_K = 3; // D2 GPIO3
const int PIN_L = 4; // D3 GPIO4

const int PIN_JOY_V = 7; // JOY
const int PIN_JOY_H = 8; // JOY2
const int PIN_JOY_BTN = 9; // JOY3

const int PIN_JOY2_V = 7; // JOY1
const int PIN_JOY2_H = 8; // JOY4
const int PIN_JOY2_BTN = 9; // JOY5

void setup() {
Serial.begin(115200);
delay(1000);

pinMode(PIN_W, INPUT_PULLUP);
pinMode(PIN_A, INPUT_PULLUP);
pinMode(PIN_S, INPUT_PULLUP);
pinMode(PIN_D, INPUT_PULLUP);
pinMode(PIN_I, INPUT_PULLUP);
pinMode(PIN_J, INPUT_PULLUP);
pinMode(PIN_K, INPUT_PULLUP);
pinMode(PIN_L, INPUT_PULLUP);
pinMode(PIN_JOY2_V, INPUT);
pinMode(PIN_JOY2_H, INPUT);
pinMode(PIN_JOY2_BTN, INPUT_PULLUP);
pinMode(PIN_JOY_BTN, INPUT_PULLUP);
pinMode(PIN_JOY2_BTN, INPUT_PULLUP);
pinMode(PIN_JOY_V, INPUT);
pinMode(PIN_JOY_H, INPUT);
pinMode(PIN_JOY_BTN, INPUT_PULLUP);

Serial.println("this works");
}

void loop() {
bool stateW = digitalRead(PIN_W) == LOW;
bool stateA = digitalRead(PIN_A) == LOW;
bool stateS = digitalRead(PIN_S) == LOW;
bool stateD = digitalRead(PIN_D) == LOW;
bool stateI = digitalRead(PIN_I) == LOW;
bool stateJ = digitalRead(PIN_J) == LOW;
bool stateK = digitalRead(PIN_K) == LOW;
bool stateL = digitalRead(PIN_L) == LOW;

int joyV = analogRead(PIN_JOY_V);
int joyH = analogRead(PIN_JOY_H);
bool joyBtn = digitalRead(PIN_JOY_BTN) == LOW;

int joy2V = analogRead(PIN_JOY2_V);
int joy2H = analogRead(PIN_JOY2_H);
bool joy2Btn = digitalRead(PIN_JOY2_BTN) == LOW;

Serial.printf("Buttons -> W:%d A:%d S:%d D:%d I:%d J:%d K:%d L:%d | Joystick -> V:%d, H:%d, Btn:%d | Joystick2 -> V:%d, H:%d, Btn:%d\n", 
                stateW, stateA, stateS, stateD, stateI, stateJ, stateK, stateL, joyV, joyH, joyBtn, joy2V, joy2H, joy2Btn);


  delay(50);
}