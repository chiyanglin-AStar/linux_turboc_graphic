/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式96】
題目：計算字串中子串出現的次數
程式分析：
程式原始碼：
*/
#include <string.h>
#include <stdio.h>
#include "conio.h"
//#include <termios.h>
void main(){ 
    char str1[20],str2[20],*p1,*p2;
    int sum=0;
    printf("please input two strings\n");
    scanf("%s%s",str1,str2);
    p1=str1;p2=str2;
    while(*p1!='\0'){
        if(*p1==*p2){
            while(*p1==*p2&&*p2!='\0'){
                p1++;p2++;
            }
        }else
            p1++;
        if(*p2=='\0')
            sum++;
        p2=str2;
    }
    printf("%d",sum);
    getch();
} 