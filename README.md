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
pinMode(pin,INPUT/OUTPUT)
```
設定腳位輸入(INPUT)或輸出(OUTPUT)</p>
INPUT的初始狀態 = 1</p>
OUTPUT的初始狀態 = 0</p>
# 20200901
Project1：單顆LED閃爍</p>
程式碼：</p>
```C++
int ,JJ = 0;
void setup() {
pinMode(3,JJ)
}
void loop() {
  digitalWrite(3,JJ)
  delay(250)
JJ ^= 1;
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/9B7CCF67-C73C-4070-9213-7E7BCDEE8E0A.jpeg)</p>
# 20200902
Project2：四顆LED同時閃爍</p>
程式碼：</p>
```c++
int jj = 0;
void setup() {
  for(int i = 2 ; i<6 ; i++)pinMode(i,OUTPUT);
}
void loop() {
  for(int i = 2 ; i<6 ; i++)digitalWrite(i,jj);
  delay(250);
  jj ^= 1;
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/C116E5B4-9DD4-4894-BB18-8365EFEC54CD.jpeg)</p>
# 20200915
Project3：LED從左到右4顆跑馬燈</p>
程式碼：</p>
```c++
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
Project4：LED從左到右8顆跑馬燈</p>
程式碼：</p>
```c++
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
Project4+：LED從右到左8顆跑馬燈</p>
程式碼：</p>
```c++
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
Project5：呼吸燈</p>
程式碼：</p>
```c++
int b = 0;
int f = 1;
void setup() {
  pinMode(5,OUTPUT);
}

void loop() {
  analogWrite(5,b);
  b = b + f;
  if (b <=0)
     f = -f;
  if (b >= 255)
    f = -f;
  delay(5);
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/73A9E4A5-7DCD-4CC8-9784-1F87FCF3F158.jpeg)
