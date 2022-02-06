/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式84】
題目：一個偶數總能表示為兩個素數之和。
程式分析：
程式原始碼：

gcc 84th.c -lm

*/
#include <stdio.h>
#include <math.h>
void main(){ 
    int a,b,c,d;
    scanf("%d",&a);
    for(b=3;b<=a/2;b+=2){ 
        for(c=2;c<=sqrt(b);c++)
            if(b%c==0) break;
            if(c>sqrt(b))
                d=a-b;
            else
            break;
        for(c=2;c<=sqrt(d);c++)
            if(d%c==0) break;
            if(c>sqrt(d))
                printf("%d=%d+%d\n",a,b,d);
    }
}