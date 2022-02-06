/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式32】
題目：Press any key to change color, do you want to try it. Please hurry up!
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include"conio.h"
void main(void){
  int color;
  for (color = 0; color < 8; color++){ 
      textbackground(color);/*設定文字的背景顏色*/
      cprintf("This is color %d\r\n", color);
      cprintf("Press any key to continue\r\n");
      getch();/*輸入字元看不見*/
  }
}