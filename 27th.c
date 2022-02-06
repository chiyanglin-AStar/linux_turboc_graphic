/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式27】
題目：利用遞迴函式呼叫方式，將所輸入的5個字元，以相反順序打印出來。
程式分析：
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i=5;
    void palin(int n);
    printf("\40:");
    palin(i);
    printf("\n");
}

void palin(n) int n;{
    char next;
    if(n<=1){
      next=getchar();
      printf("\n\0:");
      putchar(next);
    }else{
      next=getchar();
      palin(n-1);
      putchar(next);
    }
}
