/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式63】
題目：畫橢圓ellipse
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include "graphics.h"
#include "conio.h"
main()
{
int x=360,y=160,driver=VGA,mode=VGAHI;
int num=20,i;
int top,bottom;
initgraph(&driver,&mode,"");
top=y-30;
bottom=y-30;
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,top,bottom);
top-=5;
bottom+=5;
}
getch();
}