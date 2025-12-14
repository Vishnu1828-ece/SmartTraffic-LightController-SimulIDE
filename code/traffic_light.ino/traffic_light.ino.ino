// Smart Traffic Light Controller
// Road One & Road Two

int R1_R = 2;
int R1_Y = 3;
int R1_G = 4;

int R2_R = 5;
int R2_Y = 6;
int R2_G = 7;

void setup() {
  pinMode(R1_R, OUTPUT);
  pinMode(R1_Y, OUTPUT);
  pinMode(R1_G, OUTPUT);

  pinMode(R2_R, OUTPUT);
  pinMode(R2_Y, OUTPUT);
  pinMode(R2_G, OUTPUT);
}

void loop() {

  // ROAD ONE GREEN | ROAD TWO RED
  digitalWrite(R1_G, HIGH);
  digitalWrite(R1_Y, LOW);
  digitalWrite(R1_R, LOW);

  digitalWrite(R2_R, HIGH);
  digitalWrite(R2_Y, LOW);
  digitalWrite(R2_G, LOW);
  delay(5000);

  // ROAD ONE YELLOW
  digitalWrite(R1_G, LOW);
  digitalWrite(R1_Y, HIGH);
  delay(2000);

  digitalWrite(R1_Y, LOW);
  digitalWrite(R1_R, HIGH);

  // ROAD TWO GREEN
  digitalWrite(R2_R, LOW);
  digitalWrite(R2_G, HIGH);
  delay(5000);

  // ROAD TWO YELLOW
  digitalWrite(R2_G, LOW);
  digitalWrite(R2_Y, HIGH);
  delay(2000);

  digitalWrite(R2_Y, LOW);
  digitalWrite(R2_R, HIGH);
}
