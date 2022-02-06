/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式47】
題目：巨集#define命令練習(2)
程式分析：
程式原始碼：
*/
#include<stdio.h>

#define exchange(a,b) {  /*巨集定義中允許包含兩道衣裳命令的情形，此時必須在最右邊加上"\"*/ \
             int t;\
             t=a;\
             a=b;\
             b=t;\
            }

void main(void){
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    exchange(x,y);
    printf("x=%d; y=%d\n",x,y);
}