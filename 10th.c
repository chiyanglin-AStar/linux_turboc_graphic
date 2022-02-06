/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式10】
題目：有一分數序列：2/1，3/2，5/3，8/5，13/8，21/13...求出這個數列的前20項之和。
程式分析：請抓住分子與分母的變化規律。
程式原始碼：
*/
#include <stdio.h>
#include "conio.h"
void main(){
    int n,t,number=20;
    float a=2,b=1,s=0;
    for(n=1;n<=number;n++){
        s=s+a/b;
        t=a;a=a+b;b=t;/*這部分是程式的關鍵，請讀者猜猜t的作用*/
    }
    printf("sum is %9.6f\n",s);
    getch();
}