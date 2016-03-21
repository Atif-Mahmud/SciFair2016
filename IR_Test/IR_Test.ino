#include <IRremote.h>

int IRpin = 11;  // pin for the IR sensor
int lastButton = 0;
boolean continuing = false;
String button = "";
IRrecv irrecv(IRpin);
decode_results results;
int someNum = 0;
int buttonId = 0;
int buttonVal = 0;
int nums [6];

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
  irrecv.enableIRIn(); // Start the receiver
  for (int i = 0; i <= 24; i++) {
    pinMode(motors[i], OUTPUT);
  }
}

void whatButton(int x){
  switch(x){
    case 16753245:
      button = "CH-";
      buttonId = 53245;
      buttonVal = 147775;
      break;
    case 16736925:
      button="CH";
      buttonId = 36925;
      buttonVal = 110075;
      break;
    case 16769565:
      button="CH+";
      buttonId = 69565;
      buttonVal = 207675;
      break;
    case 16720605:
      button="|<<";
      buttonId = 20605;
      buttonVal = 50175;
      break;
    case 16712445:
      button="|>>";
      buttonId = 12445;
      buttonVal = 30235;
      break;
    case 16761405:
      button=">||";
      buttonId = 61405;
      buttonVal = 167735;
      break;
    case 16769055:
      button="-";
      buttonId = 69005;
      buttonVal = 206615;
      break;
    case 16754775:
      button="+";
      buttonId = 54775;
      buttonVal = 152767;
      break;
    case 16748655:
      button="EQ";
      buttonId = 48655;
      buttonVal = 137031;
      break;
    case 16738455:
      button="0";
      buttonId = 38455;
      buttonVal = 113067;
      break;
    case 16750695:
      button="100+";
      buttonId = 50695;
      buttonVal = 143007;
      break;
    case 16756815:
      button="200+";
      buttonId = 56815;
      buttonVal = 156757;
      break;
    case 16724175:
      button="1";
      buttonId = 24175;
      buttonVal = 57157;
      break;
    case 16718055:
      button="2";
      buttonId = 18055;
      buttonVal = 43207;
      break;
    case 16743045:
      button="3";
      buttonId = 43045;
      buttonVal = 124045;
      break;
    case 16716015:
      button="4";
      buttonId = 16015;
      buttonVal = 37217;
      break;
    case 16726215:
      button="5";
      buttonId = 26215;
      buttonVal = 63147;
      break;
    case 16734885:
      button="6";
      buttonId = 34885;
      buttonVal = 104105;
      break;
    case 16728765:
      button="7";
      buttonId = 28765;
      buttonVal = 70135;
      break;
    case 16730805:
      button="8";
      buttonId = 30805;
      buttonVal = 74125;
      break;
    case 16732845:
      button="9";
      buttonId = 32845;
      buttonVal = 100115;
      break;
    default:
      button="";
      buttonId = 0;
      buttonVal = 0;
      break;
  }
}

void separate(int x) {
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;
  int n6;
  n6 = int(x) % 10;
  n5 = int(floor(x / 10)) % 10;
  n4 = int(floor(x / 100)) % 10;
  n3 = int(floor(x / 1000)) % 10;
  n2 = int(floor(x / 10000)) % 10;
  n1 = int(floor(x / 100000)) % 10;
  int nums[6] = {n1,n2,n3,n4,n5,n6};
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

void patternPicker(int x) {
  separate(x);
  for (int i = 0; i < 6; i++) {
    if (nums[i] = 0) {
      p0();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 1) {
      p1();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 2) {
      p2();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 3) {
      p3();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 4) {
      p4();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 5) {
      p5();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 6) {
      p6();
      Serial.println(nums[i]);
      delay(200);
    } else if (nums[i] = 7) {
      p7();
      Serial.println(nums[i]);
      delay(200);
    }
  }
}

void loop() {
  if (irrecv.decode(&results)) {
    irrecv.resume();
  }

  whatButton(results.value);
  /*if (continuing == true) {
    whatButton(lastButton);
  }
  else {
    lastButton = results.value;
  }
  delay(100); */
  if ((someNum % 1000) == 0){
    if (buttonVal != 0){
      Serial.println(button);
      Serial.println(buttonId);
      Serial.println(buttonVal);
      Serial.println("");
      patternPicker(buttonVal);
    }
  }
  someNum = someNum + 1;
}

