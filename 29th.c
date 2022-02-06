/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式29】
題目：給一個不多於5位的正整數，要求：一、求它是幾位數，二、逆序打印出各位數字。
程式分析：學會分解出每一位數
程式原始碼：
*/
#include<stdio.h>
void main(){
    long a,b,c,d,e,x;
    scanf("%ld",&x);
    a=x/10000;/*分解出萬位*/
    b=x%10000/1000;/*分解出千位*/
    c=x%1000/100;/*分解出百位*/
    d=x%100/10;/*分解出十位*/
    e=x%10;/*分解出個位*/
    if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
    else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
    else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
    else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
    else if (e!=0) printf(" there are 1,%ld\n",e);
}