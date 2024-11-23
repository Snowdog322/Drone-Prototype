const int upPin = 1;
const int downPin = 2;

const int forwardPin = 3;
const int backwardPin = 4;

const int leftPin = 5;
const int rightPin = 6;


const int engine4 = 13;
const int engine3 = 12;
const int engine2 = 11;
const int engine1 = 10;


int up_state = 0;
int down_state = 0;
int forward_state = 0;
int backward_state = 0;
int left_state = 0;
int right_state = 0;

void up(){
  digitalWrite(engine1, HIGH);
  digitalWrite(engine2, HIGH);
  digitalWrite(engine3, HIGH);
  digitalWrite(engine4, HIGH);
}

void down(){
  digitalWrite(engine1, LOW);
  digitalWrite(engine2, LOW);
  digitalWrite(engine3, LOW);
  digitalWrite(engine4, LOW);
}

void forward(){
  digitalWrite(engine1, LOW);
  digitalWrite(engine2, LOW);
  digitalWrite(engine3, HIGH);
  digitalWrite(engine4, HIGH);
}

void backward(){
  digitalWrite(engine1, HIGH);
  digitalWrite(engine2, HIGH);
  digitalWrite(engine3, LOW);
  digitalWrite(engine4, LOW);
}

void left(){
  digitalWrite(engine1, LOW);
  digitalWrite(engine2, HIGH);
  digitalWrite(engine3, LOW);
  digitalWrite(engine4, HIGH);
}

void right(){
  digitalWrite(engine1, HIGH);
  digitalWrite(engine2, LOW);
  digitalWrite(engine3, HIGH);
  digitalWrite(engine4, LOW);
}



void setup() {
  pinMode(engine1, OUTPUT);
  pinMode(engine2, OUTPUT);
  pinMode(upPin, INPUT);
}

void loop() {
  up_state = digitalRead(upPin);

  forward_state = digitalRead(engine3);
  backward_state = digitalRead(engine4);



  if (up_state == HIGH) {
    up();
  } 
  else if(forward_state == HIGH) {
    forward();
  }
  else{
    down();
  }
}
