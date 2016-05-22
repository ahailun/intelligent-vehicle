// 设定SR04连接的Arduino引脚
const int TrigPin9 = 9;   //8,9前超声波
const int EchoPin8 = 8; 
const int TrigPin10 = 10; //10，11左超声波
const int EchoPin11 = 11; 
const int TrigPin2 = 13;   //2，3右超声波
const int EchoPin3 = 12; 
 
void setup() 
{   // 初始化串口通信及连接SR04的引脚
        Serial.begin(9600); 
        pinMode(TrigPin9, OUTPUT); 
        pinMode(EchoPin8, INPUT); 
        pinMode(TrigPin10, OUTPUT); 
        pinMode(EchoPin11, INPUT); 
        pinMode(TrigPin2, OUTPUT); 
        pinMode(EchoPin3, INPUT); 
        
    Serial.println("Ultrasonic sensor:");
} 
void loop() 
{ 
  qian_CHB();
  delay(1);
  zuo_CHB();
    delay(1);
  you_CHB();
    delay(1);
}

void qian_CHB()
{
    // 产生一个10us的高脉冲去触发TrigPin 
        digitalWrite(TrigPin9, LOW); 
        delayMicroseconds(2); 
        digitalWrite(TrigPin9, HIGH); 
        delayMicroseconds(10);
        digitalWrite(TrigPin9, LOW); 
    // 检测脉冲宽度，并计算出距离
        float distance = pulseIn(EchoPin8, HIGH) / 58.00;
        Serial.println(); 
        Serial.print("qian ");
        Serial.print(distance); 
        Serial.print("cm"); 
        Serial.println(); 
        delay(1000);   
}

void zuo_CHB()
{
    // 产生一个10us的高脉冲去触发TrigPin 
        digitalWrite(TrigPin10, LOW); 
        delayMicroseconds(2); 
        digitalWrite(TrigPin10, HIGH); 
        delayMicroseconds(10);
        digitalWrite(TrigPin10, LOW); 
    // 检测脉冲宽度，并计算出距离
        float distance = pulseIn(EchoPin11, HIGH) / 58.00;
        Serial.print("zuo  ");
        Serial.print(distance); 
        Serial.print("cm"); 
        Serial.println(); 
        delay(1000); 
}


void you_CHB()
{
    // 产生一个10us的高脉冲去触发TrigPin 
        digitalWrite(TrigPin2, LOW); 
        delayMicroseconds(2); 
        digitalWrite(TrigPin2, HIGH); 
        delayMicroseconds(10);
        digitalWrite(TrigPin2, LOW); 
    // 检测脉冲宽度，并计算出距离
        float distance = pulseIn(EchoPin3, HIGH) / 58.00;
        Serial.print("you  ");
        Serial.print(distance); 
        Serial.print("cm"); 
        Serial.println(); 
        delay(1000); 
}
