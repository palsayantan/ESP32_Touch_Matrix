
int threshold = 10;
bool touch[10] = {0,0,0,0,0,0,0,0,0,0};  //touch values array

void gotTouch0() {touch[0] = true;}
void gotTouch1() {touch[1] = true;}
void gotTouch2() {touch[2] = true;}
void gotTouch3() {touch[3] = true;}
void gotTouch4() {touch[4] = true;}
void gotTouch5() {touch[5] = true;}
void gotTouch6() {touch[6] = true;}
void gotTouch7() {touch[7] = true;}
void gotTouch8() {touch[8] = true;}
void gotTouch9() {touch[9] = true;}

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Touch Matrix");
  touchAttachInterrupt(T9, gotTouch0, threshold);
  touchAttachInterrupt(T6, gotTouch1, threshold);
  touchAttachInterrupt(T5, gotTouch2, threshold);
  touchAttachInterrupt(T4, gotTouch3, threshold);
  touchAttachInterrupt(T1, gotTouch4, threshold);
  touchAttachInterrupt(T8, gotTouch5, threshold);
  touchAttachInterrupt(T7, gotTouch6, threshold);
  touchAttachInterrupt(T3, gotTouch7, threshold);
  touchAttachInterrupt(T0, gotTouch8, threshold);
  touchAttachInterrupt(T2, gotTouch9, threshold);
}

void loop() {
  if (touch[0] && touch[5]) {touch[0] = false; touch[5] = false; touch_detected(1);}
  if (touch[0] && touch[6]) {touch[0] = false; touch[6] = false; touch_detected(2);}
  if (touch[0] && touch[7]) {touch[0] = false; touch[7] = false; touch_detected(3);}
  if (touch[0] && touch[8]) {touch[0] = false; touch[8] = false; touch_detected(4);}
  if (touch[0] && touch[9]) {touch[0] = false; touch[9] = false; touch_detected(5);}
  
  if (touch[1] && touch[5]) {touch[1] = false; touch[5] = false; touch_detected(6);}
  if (touch[1] && touch[6]) {touch[1] = false; touch[6] = false; touch_detected(7);}
  if (touch[1] && touch[7]) {touch[1] = false; touch[7] = false; touch_detected(8);}
  if (touch[1] && touch[8]) {touch[1] = false; touch[8] = false; touch_detected(9);}
  if (touch[1] && touch[9]) {touch[1] = false; touch[9] = false; touch_detected(0);}

  if (touch[2] && touch[5]) {touch[2] = false; touch[5] = false; touch_detected(1);}
  if (touch[2] && touch[6]) {touch[2] = false; touch[6] = false; touch_detected(2);}
  if (touch[2] && touch[7]) {touch[2] = false; touch[7] = false; touch_detected(3);}
  if (touch[2] && touch[8]) {touch[2] = false; touch[8] = false; touch_detected(4);}
  if (touch[2] && touch[9]) {touch[2] = false; touch[9] = false; touch_detected(5);}
  
  if (touch[3] && touch[5]) {touch[3] = false; touch[5] = false; touch_detected(6);}
  if (touch[3] && touch[6]) {touch[3] = false; touch[6] = false; touch_detected(7);}
  if (touch[3] && touch[7]) {touch[3] = false; touch[7] = false; touch_detected(8);}
  if (touch[3] && touch[8]) {touch[3] = false; touch[8] = false; touch_detected(9);}
  if (touch[3] && touch[9]) {touch[3] = false; touch[9] = false; touch_detected(0);}

  if (touch[4] && touch[5]) {touch[4] = false; touch[5] = false; touch_detected(21);}
  if (touch[4] && touch[6]) {touch[4] = false; touch[6] = false; touch_detected(22);}
  if (touch[4] && touch[7]) {touch[4] = false; touch[7] = false; touch_detected(23);}
  if (touch[4] && touch[8]) {touch[4] = false; touch[8] = false; touch_detected(24);}
  if (touch[4] && touch[9]) {touch[4] = false; touch[9] = false; touch_detected(25);}
}

void touch_detected(int touchpad){
  Serial.println(touchpad);
  // put your code here, to run while touchpads detect anything;
}
