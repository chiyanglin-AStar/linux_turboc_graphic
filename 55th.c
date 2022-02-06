/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式55】
題目：學習使用按位取反~。

程式分析：~0=1; ~1=0;

程式原始碼：
*/
#include<stdio.h>
void main(){
    int a,b;
    a=234;
    b=~a;
    printf("\40: The a's 1 complement(decimal) is %d \n",b);
    a=~a;
    printf("\40: The a's 1 complement(hexidecimal) is %x \n",a);
} 