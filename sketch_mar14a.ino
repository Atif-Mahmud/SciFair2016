int m11 = 22;
int m12 = 23;
int m13 = 24;
int m14 = 25;
int m15 = 26;
int m21 = 27;
int m22 = 28;
int m23 = 29;
int m24 = 30;
int m25 = 31;
int m31 = 32;
int m32 = 33;
int m33 = 34;
int m34 = 35;
int m35 = 36;
int m41 = 37;
int m42 = 38;
int m43 = 39;
int m44 = 40;
int m45 = 41;
int m51 = 42;
int m52 = 43;
int m53 = 44;
int m54 = 45;
int m55 = 46;
int motors[25] = {m11,m12,m13,m14,m15,m21,m22,m23,m24,m25,m31,m32,m33,m34,m35,m41,m42,m43,m44,m45,m51,m52,m53,m54,m55};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 24; i++) {
    pinMode(motors[i], OUTPUT);
  }
}

void p0() {
  digitalWrite(m21, HIGH);
  digitalWrite(m31, HIGH);
  digitalWrite(m41, HIGH);
  delay(100);
  digitalWrite(m21, LOW);
  digitalWrite(m31, LOW);
  digitalWrite(m41, LOW);
  
  digitalWrite(m22, HIGH);
  digitalWrite(m32, HIGH);
  digitalWrite(m42, HIGH);
  delay(100);
  digitalWrite(m22, LOW);
  digitalWrite(m32, LOW);
  digitalWrite(m42, LOW);
  
  digitalWrite(m23, HIGH);
  digitalWrite(m33, HIGH);
  digitalWrite(m43, HIGH);
  delay(100);
  digitalWrite(m23, LOW);
  digitalWrite(m33, LOW);
  digitalWrite(m43, LOW);
  
  digitalWrite(m24, HIGH);
  digitalWrite(m34, HIGH);
  digitalWrite(m44, HIGH);
  delay(100);
  digitalWrite(m24, LOW);
  digitalWrite(m34, LOW);
  digitalWrite(m44, LOW);
  
  digitalWrite(m25, HIGH);
  digitalWrite(m35, HIGH);
  digitalWrite(m45, HIGH);
  delay(100);
  digitalWrite(m25, LOW);
  digitalWrite(m35, LOW);
  digitalWrite(m45, LOW);
}

void p1() {
  digitalWrite(m11, HIGH);
  delay(100);
  digitalWrite(m11, LOW);
  
  digitalWrite(m12, HIGH);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, HIGH);
  delay(100);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
  
  digitalWrite(m23, HIGH);
  digitalWrite(m32, HIGH);
  digitalWrite(m33, HIGH);
  delay(100);
  digitalWrite(m23, LOW);
  digitalWrite(m32, LOW);
  digitalWrite(m33, LOW);
  
  digitalWrite(m34, HIGH);
  digitalWrite(m43, HIGH);
  digitalWrite(m44, HIGH);
  delay(100);
  digitalWrite(m34, LOW);
  digitalWrite(m43, LOW);
  digitalWrite(m44, LOW);
  
  digitalWrite(m45, HIGH);
  digitalWrite(m54, HIGH);
  digitalWrite(m55, HIGH);
  delay(100);
  digitalWrite(m45, LOW);
  digitalWrite(m54, LOW);
  digitalWrite(m55, LOW);
}

void p2() {
  digitalWrite(m12, HIGH);
  digitalWrite(m13, HIGH);
  digitalWrite(m14, HIGH);
  delay(100);
  digitalWrite(m12, LOW);
  digitalWrite(m13, LOW);
  digitalWrite(m14, LOW);
  
  digitalWrite(m22, HIGH);
  digitalWrite(m23, HIGH);
  digitalWrite(m24, HIGH);
  delay(100);
  digitalWrite(m22, LOW);
  digitalWrite(m23, LOW);
  digitalWrite(m24, LOW);
  
  digitalWrite(m32, HIGH);
  digitalWrite(m33, HIGH);
  digitalWrite(m34, HIGH);
  delay(100);
  digitalWrite(m32, LOW);
  digitalWrite(m33, LOW);
  digitalWrite(m34, LOW);
  
  digitalWrite(m42, HIGH);
  digitalWrite(m43, HIGH);
  digitalWrite(m44, HIGH);
  delay(100);
  digitalWrite(m42, LOW);
  digitalWrite(m43, LOW);
  digitalWrite(m44, LOW);
  
  digitalWrite(m52, HIGH);
  digitalWrite(m53, HIGH);
  digitalWrite(m54, HIGH);
  delay(100);
  digitalWrite(m52, LOW);
  digitalWrite(m53, LOW);
  digitalWrite(m54, LOW);
}

void p3() {
  digitalWrite(m15, HIGH);
  delay(100);
  digitalWrite(m15, LOW);
  
  digitalWrite(m14, HIGH);
  digitalWrite(m24, HIGH);
  digitalWrite(m25, HIGH);
  delay(100);
  digitalWrite(m14, LOW);
  digitalWrite(m24, LOW);
  digitalWrite(m25, LOW);
  
  digitalWrite(m23, HIGH);
  digitalWrite(m34, HIGH);
  digitalWrite(m33, HIGH);
  delay(100);
  digitalWrite(m23, LOW);
  digitalWrite(m34, LOW);
  digitalWrite(m33, LOW);
  
  digitalWrite(m32, HIGH);
  digitalWrite(m43, HIGH);
  digitalWrite(m42, HIGH);
  delay(100);
  digitalWrite(m32, LOW);
  digitalWrite(m43, LOW);
  digitalWrite(m42, LOW);
  
  digitalWrite(m41, HIGH);
  digitalWrite(m52, HIGH);
  digitalWrite(m51, HIGH);
  delay(100);
  digitalWrite(m41, LOW);
  digitalWrite(m52, LOW);
  digitalWrite(m51, LOW);
}

void p4() {
  digitalWrite(m25, HIGH);
  digitalWrite(m35, HIGH);
  digitalWrite(m45, HIGH);
  delay(100);
  digitalWrite(m25, LOW);
  digitalWrite(m35, LOW);
  digitalWrite(m45, LOW);
  
  digitalWrite(m24, HIGH);
  digitalWrite(m34, HIGH);
  digitalWrite(m44, HIGH);
  delay(100);
  digitalWrite(m24, LOW);
  digitalWrite(m34, LOW);
  digitalWrite(m44, LOW);
  
  digitalWrite(m23, HIGH);
  digitalWrite(m33, HIGH);
  digitalWrite(m43, HIGH);
  delay(100);
  digitalWrite(m23, LOW);
  digitalWrite(m33, LOW);
  digitalWrite(m43, LOW);
  
  digitalWrite(m22, HIGH);
  digitalWrite(m32, HIGH);
  digitalWrite(m42, HIGH);
  delay(100);
  digitalWrite(m22, LOW);
  digitalWrite(m32, LOW);
  digitalWrite(m42, LOW);
  
  digitalWrite(m21, HIGH);
  digitalWrite(m31, HIGH);
  digitalWrite(m41, HIGH);
  delay(100);
  digitalWrite(m21, LOW);
  digitalWrite(m31, LOW);
  digitalWrite(m41, LOW);
}

void p5() {
  digitalWrite(m55, HIGH);
  delay(100);
  digitalWrite(m55, LOW);
  
  digitalWrite(m44, HIGH);
  digitalWrite(m45, HIGH);
  digitalWrite(m54, HIGH);
  delay(100);
  digitalWrite(m44, LOW);
  digitalWrite(m45, LOW);
  digitalWrite(m54, LOW);
  
  digitalWrite(m33, HIGH);
  digitalWrite(m34, HIGH);
  digitalWrite(m43, HIGH);
  delay(100);
  digitalWrite(m33, LOW);
  digitalWrite(m34, LOW);
  digitalWrite(m43, LOW);
  
  digitalWrite(m22, HIGH);
  digitalWrite(m23, HIGH);
  digitalWrite(m32, HIGH);
  delay(100);
  digitalWrite(m22, LOW);
  digitalWrite(m23, LOW);
  digitalWrite(m32, LOW);
  
  digitalWrite(m11, HIGH);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, HIGH);
  delay(100);
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
}

void p6() {
  digitalWrite(m52, HIGH);
  digitalWrite(m53, HIGH);
  digitalWrite(m54, HIGH);
  delay(100);
  digitalWrite(m52, LOW);
  digitalWrite(m53, LOW);
  digitalWrite(m54, LOW);
  
  digitalWrite(m42, HIGH);
  digitalWrite(m43, HIGH);
  digitalWrite(m44, HIGH);
  delay(100);
  digitalWrite(m42, LOW);
  digitalWrite(m43, LOW);
  digitalWrite(m44, LOW);
  
  digitalWrite(m32, HIGH);
  digitalWrite(m33, HIGH);
  digitalWrite(m34, HIGH);
  delay(100);
  digitalWrite(m32, LOW);
  digitalWrite(m33, LOW);
  digitalWrite(m34, LOW);
  
  digitalWrite(m22, HIGH);
  digitalWrite(m23, HIGH);
  digitalWrite(m24, HIGH);
  delay(100);
  digitalWrite(m22, LOW);
  digitalWrite(m23, LOW);
  digitalWrite(m24, LOW);
  
  digitalWrite(m12, HIGH);
  digitalWrite(m13, HIGH);
  digitalWrite(m14, HIGH);
  delay(100);
  digitalWrite(m12, LOW);
  digitalWrite(m13, LOW);
  digitalWrite(m14, LOW);
}

void p7() {
  digitalWrite(m51, HIGH);
  delay(100);
  digitalWrite(m51, LOW);
  
  digitalWrite(m41, HIGH);
  digitalWrite(m42, HIGH);
  digitalWrite(m52, HIGH);
  delay(100);
  digitalWrite(m41, LOW);
  digitalWrite(m42, LOW);
  digitalWrite(m52, LOW);
  
  digitalWrite(m32, HIGH);
  digitalWrite(m43, HIGH);
  digitalWrite(m33, HIGH);
  delay(100);
  digitalWrite(m32, LOW);
  digitalWrite(m43, LOW);
  digitalWrite(m33, LOW);
  
  digitalWrite(m23, HIGH);
  digitalWrite(m34, HIGH);
  digitalWrite(m24, HIGH);
  delay(100);
  digitalWrite(m23, LOW);
  digitalWrite(m34, LOW);
  digitalWrite(m24, LOW);
  
  digitalWrite(m14, HIGH);
  digitalWrite(m25, HIGH);
  digitalWrite(m15, HIGH);
  delay(100);
  digitalWrite(m14, LOW);
  digitalWrite(m25, LOW);
  digitalWrite(m15, LOW);
}

void loop() {
  /*for(int x = 0; x <= 24; x++) {
    digitalWrite(motors[x], HIGH);
    delay(1000);
    digitalWrite(motors[x], LOW);
    delay(1000);
  }*/
  p4();
  delay(2000);
}
