/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式40】
題目：將一個數組逆序輸出。
程式分析：用第一個與最後一個交換。
程式原始碼：
*/
#include<stdio.h>
#define N 5
void main(){
    int a[N]={9,6,5,4,1},i,temp;
    printf("\n original array:\n");
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
    for(i=0;i<N/2;i++){
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp;
    }
    printf("\n sorted array:\n");
    for(i=0;i<N;i++)
        printf("%4d",a[i]);
}