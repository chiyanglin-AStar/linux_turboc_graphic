/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式88】
題目：讀取7個數（1—50）的整數值，每讀取一個值，程式打印出該值個數的＊。
程式分析：
程式原始碼：
*/
#include <stdio.h>
#include "conio.h"
void main(){
    int i,a,n=1;
    while(n<=7){ 
        do {
            scanf("%d",&a);
        }while(a<1||a>50);
        for(i=1;i<=a;i++)
            printf("*");
        printf("\n");
        n++;
    }
    getch();
}