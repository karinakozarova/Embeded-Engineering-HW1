int pins[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; //pins that we'll be using
// shape - bool array which diodes we want to light up(1 - lights up,0 - nope)
bool shape[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 1, 0, 0, 0},{0, 0, 0, 0, 0}};

void setup() {
  // make arduino know the pins will be used as OUTPUT - will be high or low
  for(int i = 0 ; i < 10;++i) pinMode(pins[i], OUTPUT);
}

void loop() {
  for(int row = 0 ; row < 5 ; row++){
    digitalWrite(pins[row], HIGH);//anode - 1 for all rows
    for(int column = 0 ; column < 5 ; column++){      
      if(shape[row][column] == true) digitalWrite(pins[5 + column], LOW); //has to light up => anode - 1, catode -0
      else digitalWrite(pins[5 + column], HIGH); // catode - 1 => no I
    }

    for(int columm = 0 ; column < 5 ; column ++) digitalWrite(pins[5 + j], HIGH); // return all colomns to 1
    digitalWrite(pins[i], LOW); // return state to 0
  }

}
