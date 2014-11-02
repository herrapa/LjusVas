//Extremely simple program to work with a vase with RGB LEDS in it

// the pins that the LED is attached to
#define red 10
#define green 11
#define blue 13

#define redColor 255
#define greenColor 145
#define blueColor 10

void setup()  { 
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
  //loop through all colors for an effect
  //loopColorWithDelay(red, 10);
  //loopColorWithDelay(green, 10);
  //loopColorWithDelay(blue, 10);
  
  //set the final color
  analogWrite(red, redColor);
  analogWrite(green, greenColor);
  analogWrite(blue, blueColor);
} 

void loopColorWithDelay(int color, int delayTime) {
    analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  for (int i = 0; i <= 255; i++)
  {
    analogWrite(color, i);
    delay(delayTime);
  }
  for (int i = 255; i >= 0; i--)
  {
    analogWrite(color, i);
    delay(delayTime);
  }
}

void loop()  
{                           
}

