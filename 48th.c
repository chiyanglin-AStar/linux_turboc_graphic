/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式48】
題目：巨集#define命令練習(3)
程式分析：
程式原始碼：
*/
#define LAG >
#define SMA <
#define EQ ==
#include "stdio.h"
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