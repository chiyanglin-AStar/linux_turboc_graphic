/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式45】
題目：學習使用register定義變數的方法。
程式分析：
程式原始碼：
*/
#include<stdio.h>
void main(){
    register int i;
    int tmp=0;
    for(i=1;i<=100;i++)
    tmp+=i;
    printf("The sum is %d\n",tmp);
}