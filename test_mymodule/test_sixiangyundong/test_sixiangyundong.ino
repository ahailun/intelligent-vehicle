#include <Servo.h> 
 
//#define send

Servo myservo; 
int Echo = A1;  // Echo回声脚(P2.0)
int Trig =A0;  //  Trig 触发脚(P2.1)
int in2 = 2;
int in3 = 3;
int in4 = 4;
int in5 = 5;
 
int rightDistance = 0,leftDistance = 0,middleDistance = 0 ;

void setup() 
{ 
  myservo.attach(9);
  Serial.begin(9600);     // 初始化串口
  pinMode(Echo, INPUT);    // 定义超声波输入脚
  pinMode(Trig, OUTPUT);   // 定义超声波输出脚  
  pinMode(in5,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in2,OUTPUT);
} 
void forward(int d)
{
 digitalWrite(in5,HIGH);
 digitalWrite(in4,LOW);
 analogWrite(in5,155+d);
 analogWrite(in4,0);
 
 digitalWrite(in3,HIGH);
 digitalWrite(in2,LOW);
 analogWrite(in3,155+d);
 analogWrite(in2,0);
}
 
void back(int d)
{
 digitalWrite(in5,LOW);
 digitalWrite(in4,HIGH);
 
 digitalWrite(in3,LOW);
 digitalWrite(in2,HIGH);
}
 
void turnleft()
{
 digitalWrite(in5,LOW);
 digitalWrite(in4,LOW);
 digitalWrite(in3,HIGH);
 digitalWrite(in2,LOW);
 delay(800);
}

void xiao_turnleft()
{
 digitalWrite(in5,LOW);
 digitalWrite(in4,LOW);
 
 digitalWrite(in3,HIGH);
 digitalWrite(in2,LOW);
 analogWrite(in3,155);
 analogWrite(in2,0);
 delay(400);
}
 
void turnright()
{
 digitalWrite(in5,HIGH);
 digitalWrite(in4,LOW);
 digitalWrite(in3,LOW);
 digitalWrite(in2,LOW);
 delay(800);
} 
void xiao_turnright()
{
 digitalWrite(in5,HIGH);
 digitalWrite(in4,LOW);
 analogWrite(in5,155);
 analogWrite(in4,0);
 
 digitalWrite(in3,LOW);
 digitalWrite(in2,LOW);
 delay(400);
} 
void stop()
{
 digitalWrite(in5,LOW);
 digitalWrite(in4,LOW);
 digitalWrite(in3,LOW);
 digitalWrite(in2,LOW);
} 

void loop()
{
  //forward(100);
  //delay(2000);
   
  //forward(0);
  //delay(2000);
  
  //back();
  //delay(2000);
  
  turnleft();
  //xiao_turnleft();
  
  //turnright();
  //xiao_turnright();

}
