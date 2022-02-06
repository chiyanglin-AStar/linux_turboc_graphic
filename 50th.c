/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式50】
題目：#include 的應用練習
程式分析：
程式原始碼： test.h 檔案如下：

#define LAG >
#define SMA <
#define EQ ==

*/


#include "test.h" /*一個新檔案50.c，包含test.h*/
#include<stdio.h>
void main(){ 
    int i=10;
    int j=20;
    if(i LAG j)
    printf("\40: %d larger than %d \n",i,j);
    else if(i EQ j)
    printf("\40: %d equal to %d \n",i,j);
    else if(i SMA j)
    printf("\40:%d smaller than %d \n",i,j);
    else
    printf("\40: No such value.\n");
}