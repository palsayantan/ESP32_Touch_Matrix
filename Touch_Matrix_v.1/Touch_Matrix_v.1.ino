int threshold = 40;   //touch sensitivity

bool touch1detected = false;
bool touch2detected = false;
bool touch3detected = false;
bool touch4detected = false;
bool touch5detected = false;
bool touch6detected = false;
bool touch7detected = false;
bool touch8detected = false;
bool touch9detected = false;

void gotTouch1() {
  touch1detected = true;
}
void gotTouch2() {
  touch2detected = true;
}
void gotTouch3() {
  touch3detected = true;
}
void gotTouch4() {
  touch4detected = true;
}
void gotTouch5() {
  touch5detected = true;
}
void gotTouch6() {
  touch6detected = true;
}
void gotTouch7() {
  touch7detected = true;
}
void gotTouch8() {
  touch8detected = true;
}
void gotTouch9() {
  touch9detected = true;
}


void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Touch Interrupts");
  touchAttachInterrupt(T3, gotTouch1, threshold);   //GPIO15
  touchAttachInterrupt(T2, gotTouch2, threshold);   //GPIO2
  touchAttachInterrupt(T0, gotTouch3, threshold);   //GPIO4
  touchAttachInterrupt(T9, gotTouch4, threshold);   //GPIO33
  touchAttachInterrupt(T6, gotTouch5, threshold);   //GPIO14
  touchAttachInterrupt(T5, gotTouch6, threshold);   //GPIO12
  touchAttachInterrupt(T4, gotTouch7, threshold);   //GPIO13
  touchAttachInterrupt(T7, gotTouch8, threshold);   //GPIO27
  touchAttachInterrupt(T8, gotTouch9, threshold);   //GPIO32
}

void loop() {
  if (touch1detected) {
    touch1detected = false;
    touch_active(0);
  }
  if (touch2detected) {
    touch2detected = false;
    touch_active(1);
  }
  if (touch3detected) {
    touch3detected = false;
    touch_active(2);
  }
  if (touch4detected) {
    touch4detected = false;
    touch_active(3);
  }
  if (touch5detected) {
    touch5detected = false;
    touch_active(4);
  }
  if (touch6detected) {
    touch6detected = false;
    touch_active(5);
  }
  if (touch7detected) {
    touch7detected = false;
    touch_active(6);
  }
  if (touch8detected) {
    touch8detected = false;
    touch_active(7);
  }
  if (touch9detected) {
    touch9detected = false;
    touch_active(8);
  }
}

void touch_active(int touchpad){
  Serial.println(touchpad);
  // put your code here, to run while touchpads detect anything;
}
