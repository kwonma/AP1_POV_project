// VARIABLE
// put period variable here
int period = 1000;  // milliseconds
// put static 2D array of
int arr[7][7] = { {}, {}, {}, {}, {}, {}, {}};

// assign digital pins for LEDs;
int row0 = 4;
int row1 = 5;
int row2 = 6;
int row3 = 7;
int row4 = 8;
int row5 = 9;
int row6 = 10;

void setup() {
  // sets the baud rate for serial input and output
  // we need this in case we want to debug on the serial monitor
  Serial.begin(9600);

  // take period and divide it by 7 letters * 7 lights per letter
  // divide it by 2 because message should be displayed fully in 1/2 period
  unsigned long increment =  period / (49.0 * 2.0); // delay increment

  Serial.print("This is our time between pixels: ");
  Serial.println(increment);  // debugging purposes

  //assign pins to be output
  pinMode(row0, INPUT);
  pinMode(row1, INPUT);
  pinMode(row2, INPUT);
  pinMode(row3, INPUT);
  pinMode(row4, INPUT);
  pinMode(row5, INPUT);
  pinMode(row6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // print the message forwards (first swipe):
  // go through each letter forwards
  for (int i = 0; i < 7; i++) {
    // go through the 2d array to get each row (7) of pixels
    // one value in the array represents the whole jth row
    for (int j = 0; j < 7; j++) {
      int val = arr[i][j];
      digitalWrite(row0, );
      
    }
    delay(increment);
  }

  // print the message backwards (second swipe):
  // go through each letter backwards
  for (int i = 6; i >= 0; i--) {
    // go through the 2d array to get each row (7) of pixels
    // one value in the array represents the whole jth row
    for (int j = 0; j < 7; j++) {

    }
    delay(increment);
  }
}
