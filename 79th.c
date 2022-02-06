/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式79】
題目：字串排序。
程式分析：
程式原始碼：
*/
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
void main(){
    char *str1[20],*str2[20],*str3[20];
    char swap();
    printf("please input three strings\n");
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    if(strcmp(str1,str2)>0) swap(str1,str2);
    if(strcmp(str1,str3)>0) swap(str1,str3);
    if(strcmp(str2,str3)>0) swap(str2,str3);
    printf("after being sorted\n");
    printf("%s\n%s\n%s\n",str1,str2,str3);
}

char swap(p1,p2)
char *p1,*p2;{
    char *p[20];
    strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
}