/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式35】
題目：文字顏色設定
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include "conio.h"
void main(void){
    int color;
    for (color = 1; color < 16; color++) {
        textcolor(color);/*設定文字顏色*/
        cprintf("This is color %d\r\n", color);
    }
    textcolor(128 + 15);
    cprintf("This is blinking\r\n");
}