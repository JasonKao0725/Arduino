# Arduino Project
# 09012020
初始指令：</p>
void setup() <--> 只執行一次,Arduino的初始設定</p>
vid loop() <-->會重複執行,主程式的位置</p>
第一個指令：</p>
pinMode (pin,INPUT/OUTPUT)</p>
此語法為設定腳位輸出(OUTPUT)或輸入(INPUT)</p>
INPUT的初始狀態 = 1</p>
OUTPUT的初始狀態 = 0</p>
＃Project1：讓LED閃爍</p>
程式碼1：</p>
void setup() {</p>
  pinMode (3,OUTPUT)</p>
}</p>
void loop() {</p>
  digitalWrite (3,LOW)</p>
  delay (250)</p>
  digitalWrite (3,HIGH)</p>
}</p>
程式碼2：</p>
int LED = 3 ,JJ = 0;</p>
void setup() {</p>
pinMode (LED,JJ)</p>
}</p>
void loop() {</p>
  digitalWrite (LED,JJ)</p>
  delay (250)</p>
JJ ^= 1;</p>
}</p>
電子電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/EB4DD0E6-0723-48F1-8A73-749E22212470.jpeg)</p>
實體電路圖：</p>
![image](https://github.com/JasonKao0725/Arduino/blob/master/9B7CCF67-C73C-4070-9213-7E7BCDEE8E0A.jpeg)</p>
