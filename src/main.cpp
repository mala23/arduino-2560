// define pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

init redValue;
init greenValue;
init blueValue;

void loop()
{
  #define delayTime 10

  redValue = 255; // choose a value between 1 and 255 to change the colour
  greenValue = 0;
  blueValue = 0;

  for int i = 0; i < 255; i =+ 1)
  {
    redValue -= 1;
    greenValue =+ 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }


  redValue = 0;
  greenValue = 255;
  blueValue = 0;

  for int i = 0; i < 255; i =+ 1)
  {
    greenValue -= 1;
    blueValue =+ 1;
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }


  redValue = 0;
  greenValue = 0;
  blueValue = 255;

  for int i = 0; i < 255; i =+ 1)
  {
    blueValue -= 1;
    redValue =+ 1;
    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
}
