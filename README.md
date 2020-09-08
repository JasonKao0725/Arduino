# Arduino Project
初始指令：</p>
```C++
void setup() //只執行一次,Arduino的初始設定
vid loop() //會重複執行,主程式的位置
```
腳位指令：</p>
```c++
pinMode (pin,INPUT/OUTPUT)
```
此語法為設定腳位輸入(INPUT)或輸出(OUTPUT)</p>
INPUT的初始狀態 = 1</p>
OUTPUT的初始狀態 = 0</p>
# 09012020
Project1：單顆LED閃爍</p>
程式碼：</p>
```c++
int ,JJ = 0;
void setup() {
pinMode (3,JJ)
}
void loop() {
  digitalWrite (3,JJ)
  delay (250)
JJ ^= 1;
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/9B7CCF67-C73C-4070-9213-7E7BCDEE8E0A.jpeg)</p>
# 09082020
Project2：四顆LED同時閃爍</p>
程式碼：</p>
```c++
int jj = 0;
void setup() {
  for(int i =2;i<6;i++)pinMode (i,OUTPUT);
}</p>
void loop() {
  for(int i =2;i<6;i++)digitalWrite (i,jj);
  delay (250);
  jj^=1;
}
```
電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/C116E5B4-9DD4-4894-BB18-8365EFEC54CD.jpeg)</p>
