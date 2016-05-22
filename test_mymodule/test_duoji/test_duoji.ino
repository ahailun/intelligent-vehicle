#include <Servo.h> 

Servo myservo; 

void setup()
{
myservo.attach(10);
myservo.write(90);  //对准正前方
}

void loop()
{
  for(int i=10;i<175;i = i+80)
    {
      myservo.write(i);
      delay(1000);
    }
}
