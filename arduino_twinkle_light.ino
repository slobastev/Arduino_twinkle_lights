int pins[3] = {11,12,13};

int combs[4][3] = { 
  {0,1,1}, 
  {1,0,1},
  {1,1,0},
  {1,1,1}
};

void setup() {
  for(int i=0; i < 3; i++){
    pinMode(pins[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
   int comb = rand() % 4 ;
    for(int i=0; i < 3; i++){
      if (combs[comb][i] == 1 ){
        digitalWrite(pins[i], HIGH); 
      } else {
        digitalWrite(pins[i], LOW);
      }
    }
      delay((rand() % 50) * 100);
}



