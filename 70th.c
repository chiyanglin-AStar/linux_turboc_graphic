/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式70】
題目：寫一個函式，求一個字串的長度，在main函式中輸入字串，並輸出其長度。
程式分析：
程式原始碼：
*/

#include<stdio.h>
#include<string.h>

int length_t(char *p) ;
void main(){
    int len;
    char str[20];
    printf("please input a string:\n");
    scanf("%s",str);
    len=length_t(str);
    printf("the string has %d characters.",len);
}

int length_t(p) char *p; {
    int n;
    n=0;
    while(*p!='\0'){
        n++;
        p++;
    }
    return n;
}