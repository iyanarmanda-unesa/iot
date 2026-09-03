// C++ code
//

int RED_A    = 13;
int YELLOW_A = 12;
int GREEN_A  = 8;

int RED_B    = 7;
int YELLOW_B = 4;
int GREEN_B  = 2;

void lamp_blinking(int lamp) {
  for (int i=0; i<3; i++) {
    digitalWrite(lamp, HIGH);
    delay(500);
    digitalWrite(lamp, LOW);
    delay(500);
  }
}

void traffic(int lamp_green, int lamp_red, int lamp_yellow) {
  digitalWrite(lamp_green, HIGH);
  digitalWrite(lamp_red, HIGH);

  delay(7000);
  lamp_blinking(lamp_yellow);

  digitalWrite(lamp_green, LOW);  
  digitalWrite(lamp_red, LOW);  
}

void setup() {
	pinMode(RED_A, OUTPUT);
	pinMode(YELLOW_A, OUTPUT);
  pinMode(GREEN_A, OUTPUT);
	pinMode(RED_B, OUTPUT);
	pinMode(YELLOW_B, OUTPUT);
  pinMode(GREEN_B, OUTPUT);
}

void loop() {
  traffic(RED_A, GREEN_B, YELLOW_B);
  traffic(RED_B, GREEN_A, YELLOW_A);

//  traffic_stop(RED_B);
//  traffic_go(GREEN_A, YELLOW_A);

 //  	digitalWrite(RED, HIGH);
 //   delay(1000);
 //   digitalWrite(RED, LOW);

 //   for (int i=0; i<5; i++) {
 //     delay(1000);
 //     digitalWrite(YELLOW, HIGH);
 //     delay(1000);
 //     digitalWrite(YELLOW, LOW);
 //   }

//    digitalWrite(YELLOW, HIGH);
//    delay(2000);
//    digitalWrite(YELLOW, LOW);

 //   analogWrite(GREEN, 255);
 //   delay(8000);
 //   analogWrite(GREEN, 0);
}
