# HYIVS Arduino Practical Class
初始指令：
```C++
void setup()
```
只執行一次，Arduino的初始設定</p>
```C++
void loop()
```
會重複執行，主程式的位置</p>
```C++
int xxx = 0;
```
宣告變數(整數)
```C++
pinMode(pin,INPUT/OUTPUT);
```
設定腳位輸入(INPUT)、輸出(OUTPUT)</p>
INPUT的初始狀態 = 1</p>
OUTPUT的初始狀態 = 0</p>
```C++
digitalWrite(pin,HIGH/LOW);
```
將腳位設定成數位，高電位(HIGH)、低電位(LOW)
```C++
analogWrite(pin,PWM);
```
將腳位設定成類比，PWM輸出頻率
```C++
delay(100);
```
設定延遲時間
# 2020/09/01
Project 1：LED閃爍(單顆)</p>
程式碼：</p>
```C++
int LED = 0;
void setup() {
pinMode(3,LED)
}
void loop() {
  digitalWrite(3,LED)
  delay(250)
LED ^= 1;
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/9B7CCF67-C73C-4070-9213-7E7BCDEE8E0A.jpeg)</p>
# 2020/09/08
Project 2：LED閃爍(4顆、同步)</p>
程式碼：</p>
```C++
int LED = 0;
void setup() {
  for(int i=2;i<6;i++)pinMode(i,OUTPUT);
}
void loop() {
  for(int i=2;i<6;i++)digitalWrite(i,LED);
  delay(250);
  LED ^= 1;
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/C116E5B4-9DD4-4894-BB18-8365EFEC54CD.jpeg)</p>
# 2020/09/15
Project 3：LED跑馬燈(4顆、左到右)</p>
程式碼：</p>
```C++
int LED = 6;
void setup() {
  for (int i=2;i<6;i++)
  pinMode(i,OUTPUT);
}
void loop() {
  for (int i=5;i>1;i--)
    digitalWrite(i,HIGH);
  if (LED >= 2)
    digitalWrite(LED,LOW);
  else 
    LED = 6;
LED--;
delay (250);
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/54918922-D275-4353-BBCA-CA472D0CA838.jpeg)
Project 4：LED跑馬燈(8顆、左到右)</p>
程式碼：</p>
```C++
int LED = 10;
void setup() {
  for (int i=1;i<10;i++)
  pinMode(i,OUTPUT);
}
void loop() {
  for (int i=10;i>1;i--)
    digitalWrite(i,HIGH);
  if (LED >= 1)
    digitalWrite(LED,LOW);
  else 
    LED = 10;
LED--;
delay (250);
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/68C1E0C0-83BA-46F6-A809-A12D144BAFBA.jpeg)
Project 4+：LED跑馬燈(8顆、右到左)</p>
程式碼：</p>
```C++
int LED = 1;
void setup() {
  for (int i=10;i>1;i--)
  pinMode(i,OUTPUT);
}
void loop() {
  for (int i=1;i<10;i++)
    digitalWrite(i,HIGH);
  if (LED <= 10)
    digitalWrite(LED,LOW);
  else 
    LED = 1;
LED++;
delay (250);
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/68C1E0C0-83BA-46F6-A809-A12D144BAFBA.jpeg)
Project 5：LED呼吸燈(暗>亮)</p>
程式碼：</p>
```C++
int b = 255;
int f = -1;
void setup() {
  pinMode(5,OUTPUT);
}
void loop() {
  analogWrite(5,b);
  b = b + f;
  if (b <=0||b >= 255)
     f = -f;
  delay(5);
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/73A9E4A5-7DCD-4CC8-9784-1F87FCF3F158.jpeg)
# 2020/09/22
Project 6：按鈕控制LED亮，Reset鍵滅</p>
程式碼：</p>
```C++
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}

void loop() {
  if (digitalRead(2) == 0)
  {
    digitalWrite(3,LOW);
  }
}
```
電路圖：</p>
![iamge](https://github.com/JasonKao0725/Arduino/blob/master/3959D99D-E477-4C95-A357-F39565831353.jpeg)
Project 7：切換LED亮滅
程式碼：</p>
```C++
int j=1,jj=1;
void setup() {
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
}
void loop() {
  if(!digitalRead(2))
  {
    while(!digitalRead(2))
    delay(20);
    jj=0;
  }
  else
  {
    if(!jj)
    {
      jj=1;
      j^=1;
    }
  }
  digitalWrite(3,j);
}
```
電路圖：</p>
！[image](https://github.com/JasonKao0725/Arduino/blob/master/3959D99D-E477-4C95-A357-F39565831353.jpeg)
