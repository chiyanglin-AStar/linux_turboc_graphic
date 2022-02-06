/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式52】
題目：學習使用按位或 | 。
程式分析：0|0=0; 0|1=1; 1|0=1; 1|1=1
程式原始碼：
*/
#include<stdio.h>
void main(){
    int a,b;
    a=077;
    b=a|3;
    printf("\40: The a & b(decimal) is %d \n",b);
    b|=7;
    printf("\40: The a & b(decimal) is %d \n",b);
}