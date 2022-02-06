/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式89】
題目：某個公司採用公用電話傳遞資料，資料是四位的整數，在傳遞過程中是加密的，加密規則如下：每位數字都加上5,然後用和除以10的餘數代替該數字，再將第一位和第四位交換，第二位和第三位交換。
程式分析：
程式原始碼：
*/
#include <stdio.h>
void main(){
    int a,i,aa[4],t;
    scanf("%d",&a);
    aa[0]=a%10;
    aa[1]=a%100/10;
    aa[2]=a%1000/100;
    aa[3]=a/1000;
    for(i=0;i<=3;i++){
        aa[i]+=5;
        aa[i]%=10;
    }
    for(i=0;i<=3/2;i++){
        t=aa[i];
        aa[i]=aa[3-i];
        aa[3-i]=t;
    }
    for(i=3;i>=0;i--)
        printf("%d",aa[i]);
}