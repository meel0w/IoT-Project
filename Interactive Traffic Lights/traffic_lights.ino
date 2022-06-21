const int pushButton = 2;
const int greenLedPedestrian = 3;
const int redLedPedestrian = 4;
const int greenLedRoad = 5;
const int yellowLedRoad = 6;
const int redLedRoad = 7;

void setup() 
{
  pinMode(greenLedRoad, OUTPUT);
  pinMode(yellowLedRoad, OUTPUT);
  pinMode(redLedRoad, OUTPUT);
  pinMode(greenLedPedestrian, OUTPUT);
  pinMode(redLedPedestrian, OUTPUT);
  pinMode(pushButton, INPUT_PULLUP);

  digitalWrite(greenLedRoad, HIGH); //starting light
  digitalWrite(redLedPedestrian, HIGH);
}

void loop() 
{
  if(digitalRead(pushButton) == LOW)
  {
    digitalWrite(greenLedRoad, LOW); //down
    digitalWrite(yellowLedRoad, HIGH); //up
    delay(2000);  //2 seconds
    digitalWrite(yellowLedRoad, LOW);
    digitalWrite(redLedRoad, HIGH);
    delay(1000);  //1 second
    digitalWrite(redLedPedestrian, LOW);
    digitalWrite(greenLedPedestrian, HIGH);
    delay(5000);  //5 seconds
    digitalWrite(greenLedPedestrian, LOW);
    digitalWrite(redLedPedestrian, HIGH);
    delay(1000);  //1 second
    digitalWrite(redLedRoad, LOW);
    digitalWrite(greenLedRoad, HIGH);
  }
}