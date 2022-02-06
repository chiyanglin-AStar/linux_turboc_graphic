/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式54】
題目：取一個整數a從右端開始的4～7位。
程式分析：可以這樣考慮：
先使a右移4位。
設定一個低4位全為1,其餘全為0的數。可用~(~0<<4)
將上面二者進行&運算。
程式原始碼：
*/
#include<stdio.h>
void main(){
    unsigned a,b,c,d;
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
}