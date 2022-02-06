/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式75】
題目：放鬆一下，算一道簡單的題目。
程式分析：
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i,n;
    for(i=1;i<5;i++){
        n=0;
        if(i!=1)
            n=n+1;
        if(i==3)
            n=n+1;
        if(i==4)
            n=n+1;
        if(i!=4)
            n=n+1;
        if(n==3)
            printf("zhu hao shi de shi:%c",64+i);
    }
}
