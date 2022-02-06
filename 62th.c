/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式62】
題目：學習putpixel畫點。
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include "graphics.h"
main()
{
int i,j,driver=VGA,mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=50;i<=230;i+=20)
  for(j=50;j<=230;j++)
  putpixel(i,j,1);
for(j=50;j<=230;j+=20)
  for(i=50;i<=230;i++)
  putpixel(i,j,1);
}