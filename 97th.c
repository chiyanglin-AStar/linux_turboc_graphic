/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式97】
題目：從鍵盤輸入一些字元，逐個把它們送到磁碟上去，直到輸入一個#為止。
程式分析：
程式原始碼：
*/

#include <stdio.h>
#include <stdlib.h>
void main(){ 
    FILE *fp;
    char ch,filename[10];
    scanf("%s",filename);
    if((fp=fopen(filename,"w"))==NULL){
        printf("cannot open file\n");
        exit(0);
    }
    ch=getchar();
    ch=getchar();
    while(ch!='#'){
        fputc(ch,fp);putchar(ch);
        ch=getchar();
    }
    fclose(fp);
}