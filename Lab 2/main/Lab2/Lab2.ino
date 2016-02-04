/*
 * Derek Duncan
 * CWID: 11387683
 * ECE 486
 * Lab 2
 * 2/03/2016
 */

void setup() 
{
  /*Initalize pins to be used to light LEDs*/
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  /****************************************/

  /*Set the baud rate, begin serial, and print intial prompt*/
  Serial.begin(9600);
  /**********************************************************/
}

void loop() 
{
  int inputHighLow = digitalRead(2);
}

void ledBlinking(int inputHighLow)
{
  while(inputHighLow != 0)
    {
      /*Turn onboard LED on and off-board led off for 2 seconds*/
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      delay(2000);
      /*********************************************************/
      
      /*Do the opposite of above for 1 second*/
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      delay(1000);
      /***************************************/
      
      /*Check to see if user has entered anything*/
      inputHighLow = digitalRead(2);
      /*******************************************/
    }

    /*Shut off LEDs*/
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    /***************/
    
    /*Notify User the LEDs are turned off*/
    Serial.println("LEDs are now off");
    /************************************/
}
