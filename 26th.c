/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式26】
題目：利用遞迴方法求5!。
程式分析：遞迴公式：fn=fn_1*4!
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i;
    int fact();
    for(i=0;i<5;i++)
      printf("\40:%d!=%d\n",i,fact(i));
}

int fact(j) int j;{
    int sum;
    if(j==0)
      sum=1;
    else
      sum=j*fact(j-1);
    return sum;
}
