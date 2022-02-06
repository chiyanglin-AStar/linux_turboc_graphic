/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式46】
題目：巨集#define命令練習(1)
程式分析：
程式原始碼：
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
void main(){
    int num;
    int again=1;
    printf("\40: Program will stop if input value less than 50.\n");
    while(again){
        printf("\40:Please input number==>");
        scanf("%d",&num);
        printf("\40:The square for this number is %d \n",SQ(num));
        if(num>=50)
            again=TRUE;
        else
            again=FALSE;
    }
}