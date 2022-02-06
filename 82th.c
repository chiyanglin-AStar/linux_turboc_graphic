/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式82】
題目：八進位制轉換為十進位制
程式分析：
程式原始碼：
major in windows environment ,in linux , need to rewrite 
*/
#include <stdio.h>
#include <stdlib.h>
void main(){ 
    char *p,s[6];int n;
    p=s;
    gets(p);
    n=0;
    while(*(p)!='\0'){
        n=n*8+*p-'0';
        p++;
    }
    printf("%d",n);
}