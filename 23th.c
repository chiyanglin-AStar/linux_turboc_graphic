/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式23】
題目：打印出如下圖案（菱形） *
程式分析：先把圖形分成兩部分來看待，前四行一個規律，後三行一個規律，利用雙重for迴圈，第一層控制行，第二層控制列。
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i,j,k;
    for(i=0;i<=3;i++){
        for(j=0;j<=2-i;j++)
            printf(" ");
        for(k=0;k<=2*i;k++)
          printf("*");
        printf("\n");
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=i;j++)
            printf(" ");
        for(k=0;k<=4-2*i;k++)
            printf("*");
        printf("\n");
    }
}
