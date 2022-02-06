/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式86】
題目：兩個字串連線程式
程式分析：
程式原始碼：
*/
#include <stdio.h>
#include <string.h>
void main(){
    char a[]="acegikm";
    char b[]="bdfhjlnpq";
    char c[80],*p;
    int i=0,j=0,k=0;
    while(a[i]!='\0'&&b[j]!='\0'){
        if (a[i]<b[j]){ 
            c[k]=a[i];i++;
        }else
            c[k]=b[j++];
        k++;
    }
    c[k]='\0';
    if(a[i]=='\0')
        p=b+j;
    else
        p=a+i;
    strcat(c,p);
    puts(c);
}