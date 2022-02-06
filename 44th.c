/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式44】
題目：學習使用external的用法。
程式分析：
程式原始碼：
*/
#include<stdio.h>
int a,b,c;
void add(){
    int a;
    a=3;
    c=a+b;
}

void main(){ 
    a=b=4;
    add();
    printf("The value of c is equal to %d\n",c);
}