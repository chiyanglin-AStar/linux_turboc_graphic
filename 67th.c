/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式67】
題目：輸入陣列，最大的與第一個元素交換，最小的與最後一個元素交換，輸出陣列。
程式分析：譚浩強的書中答案有問題。
程式原始碼：
*/
#include<stdio.h>
void input(int number[10]);
void max_min(int array[10]);
void output(int array[10]);

void main(){
    int number[10];
    input(number);
    max_min(number);
    output(number);
}

void input(number) int number[10];{
    int i;
    for(i=0;i<9;i++)
        scanf("%d,",&number[i]);
    scanf("%d",&number[9]);
}

void max_min(array) int array[10];{
    int *max,*min,k,l;
    int *p,*arr_end;
    arr_end=array+10;
    max=min=array;
    for(p=array+1;p<arr_end;p++)
        if(*p>*max) max=p;
        else if(*p<*min) min=p;
    k=*max;
    l=*min;
    *p=array[0];array[0]=l;l=*p;
    *p=array[9];array[9]=k;k=*p;
    return;
}

void output(array) int array[10];{
    int *p;
    for(p=array;p<array+9;p++)
        printf("%d,",*p);
    printf("%d\n",array[9]);
}