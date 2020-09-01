# Arduino Project 09012020
初始指令：
void setup() <--> 只執行一次,Arduino的初始設定
vid loop() <-->會重複執行,主程式的位置
第一個指令：
pinMode (pin,INPUT/OUTPUT)
此語法為設定腳位輸出(OUTPUT)或輸入(INPUT)
INPUT的初始狀態 = 1
OUTPUT的初始狀態 = 0
＃Project1：讓LED閃爍
程式碼1：
void setup() {
  pinMode (3,OUTPUT)
}
void loop() {
  digitalWrite (3,LOW)
  delay (250)
  digitalWrite (3,HIGH)
}
程式碼2：
int LED = 3 ,JJ = 0;
void setup() {
pinMode (LED,JJ)
}
void loop() {
  digitalWrite (LED,JJ)
  delay (250)
JJ ^= 1;
}
電子電路圖：
![image](https://github.com/JasonKao0725/Arduino/blob/master/EB4DD0E6-0723-48F1-8A73-749E22212470.jpeg)
實體電路圖：
![image](https://github.com/JasonKao0725/Arduino/blob/master/9B7CCF67-C73C-4070-9213-7E7BCDEE8E0A.jpeg)
