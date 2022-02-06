/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式16】
題目：輸入兩個正整數m和n，求其最大公約數和最小公倍數。
程式分析：利用輾除法。
程式原始碼：
*/
#include <stdio.h>
void main(){
    int a,b,num1,num2,temp;
    printf("please input two numbers:\n");
    scanf("%d,%d",&num1,&num2);
    if(num1<num2){ 
        temp=num1;
        num1=num2; 
        num2=temp;
    }
    a=num1;b=num2;
    while(b!=0){/*利用輾除法，直到b為0為止*/
        
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("gongyueshu:%d\n",a);
    printf("gongbeishu:%d\n",num1*num2/a);
}