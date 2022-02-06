/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式41】
題目：學習static定義靜態變數的用法
程式分析：
程式原始碼：
*/
#include<stdio.h>
void varfunc(){
    int var=0;
    static int static_var=0;
    printf("\40:var equal %d \n",var);
    printf("\40:static var equal %d \n",static_var);
    printf("\n");
    var++;
    static_var++;
}

void main(){
    int i;
    for(i=0;i<3;i++)
        varfunc();
}