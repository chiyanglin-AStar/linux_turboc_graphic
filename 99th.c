/* 
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式99】
題目：有兩個磁碟檔案A和B,各存放一行字母，要求把這兩個檔案中的資訊合併（按字母順序排列），輸出到一個新檔案C中。
程式分析：
程式原始碼：
*/

#include <stdio.h> 
#include <stdlib.h>
void main(){ 
    FILE *fp;
    int i,j,n,ni;
    char c[160],t,ch;
    if((fp=fopen("A","r"))==NULL){
        printf("file A cannot be opened\n");
        exit(0);
    }
    printf("\n A contents are :\n");
    for(i=0;(ch=fgetc(fp))!=EOF;i++){
        c[i]=ch;
        putchar(c[i]);
    }
    fclose(fp);
    ni=i;
    if((fp=fopen("B","r"))==NULL){
        printf("file B cannot be opened\n");
        exit(0);
    }
    printf("\n B contents are :\n");
    for(i=0;(ch=fgetc(fp))!=EOF;i++){
        c[i]=ch;
        putchar(c[i]);
    }
    fclose(fp);
    n=i;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(c[i]>c[j]){
                t=c[i];c[i]=c[j];c[j]=t;
            }
    printf("\n C file is:\n");
    fp=fopen("C","w");
    for(i=0;i<n;i++){ 
        putc(c[i],fp);
        putchar(c[i]);
    }
    fclose(fp);
}