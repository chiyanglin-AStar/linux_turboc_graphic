/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式25】
題目：求1+2!+3!+...+20!的和
程式分析：此程式只是把累加變成了累乘。
程式原始碼：
*/
#include<stdio.h>
void main(){
    float n,s=0,t=1;
    for(n=1;n<=20;n++){
        t*=n;
        s+=t;
    }
    printf("1+2!+3!...+20!=%e\n",s);
}
