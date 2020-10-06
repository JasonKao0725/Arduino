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
## Project 1：LED閃爍(單顆)</p>
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
## Project 2：LED閃爍(4顆、同步)</p>
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
## Project 3：LED跑馬燈(4顆、左到右)</p>
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
## Project 4：LED跑馬燈(8顆、左到右)</p>
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
## Project 4+：LED跑馬燈(8顆、右到左)</p>
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
## Project 5：LED呼吸燈(暗>亮)</p>
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
## Project 6：按鈕控制LED亮，Reset鍵滅</p>
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
## Project 7：切換LED亮滅</p>
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
![image](https://github.com/JasonKao0725/Arduino/blob/master/3959D99D-E477-4C95-A357-F39565831353.jpeg)
## Project 8：切換控制LED模式</p>
程式碼：</p>
```C++
byte ledpin[8]={3,4,5,6,7,8,9,10};
int jj =1 ,a=-1;
void setup()
{
  for(int i=0;i<8;i++)pinMode(ledpin[i],OUTPUT);
  for(int i=0;i<8;i++)digitalWrite(ledpin[i],1);
  pinMode(2,INPUT);
  digitalWrite(2,1);
}
void loop() 
{
  if(!digitalRead(2))
  {
    while(!digitalRead(2))delay(20);
    if(!jj)
    {
      a++;
      jj=1;
    }
  }
    else
    {
      jj=0;
      switch(a)
      {
        case 0:
          for(int i=0;i<8;i++)
          {
            for(int j=0;j<8;j++)digitalWrite(ledpin[j],1);
            digitalWrite(ledpin[i],0);
            delay(100);
          }
        break;
        
        case 1:
          for(int i=7;i>-1;i--)
            {
              for(int j=0;j<8;j++)digitalWrite(ledpin[j],1);
              digitalWrite(ledpin[i],0);
              delay(100);
            }
        break;
        
        case 2:
         for(int i=0;i<8;i++)digitalWrite(ledpin[i],1);
        break;
        
        case 3:
          a=0;
        break;
      }
    }
}
```
電路圖：</p>
![iamge](https://github.com/JasonKao0725/Arduino/blob/master/97DB0FA6-437C-402A-BBA5-C375F69D315A.jpeg)
## Project 9：按鈕切換燈光以及切換LED模式</p>
按鈕1切換三種模式：RGB三色變化、單一色呼吸燈、6種顏色切換(使用按鈕2手動切換)</p>
程式碼：</p>
```C++
int b = 255;
int f = -1;
int jj = 1, a = -1;
int gg = 1 , B = -1;
void setup() {
  pinMode(2,INPUT);
  digitalWrite(2,1);
  pinMode(4,INPUT);
  digitalWrite(4,1);
for(int i=9;i<12;i++)
  pinMode(i,OUTPUT);
  
}

void loop() {
  
  if(!digitalRead(4))
  {
    while(!digitalRead(4))RGB(0,0,0);
    if(!gg)
    {
      B++;
      gg=1;
    }
  }
  else
  {
    gg=0;
    switch(B)
    {
      case 0:
      RGB(255,0,0);
      RGB(0,255,0);
      RGB(0,0,255);
      break;
      case 1:
      BRGB();
      break;
      case 2:
      ButtonRGB();
      break;
      case 3:
      B = 0;
      break;
    }
  }
}
void RGB(byte R ,byte G ,byte B) {
  analogWrite(9,R);
  analogWrite(10,G);
  analogWrite(11,B);
  delay(1000);
}
void BRGB() {
  analogWrite(9,b);
  b = b + f;
  if (b <=0||b >= 255)
     f = -f;
    delay(5);
}
void ButtonRGB() {
    if(!digitalRead(2))
  {
    while(!digitalRead(2))delay(20);
    if(!jj)
    {
      a++;
      jj=1;
    }
  }
  else
  {
    jj=0;
    switch(a)
    {
      case 0:
        RGB(255,0,0);
      break;
      case 1:
        RGB(0,255,0);
      break;
      case 2:
        RGB(0,0,255);
      break;
      case 3:
        RGB(255,255,0);
      break;
      case 4:
        RGB(0,255,255);
      break;
      case 5:
        RGB(255,0,255);
      break;
      case 6:
        a = 0;
      break;
    }
  }
}

```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/97DB0FA6-437C-402A-BBA5-C375F69D315A.jpeg)
