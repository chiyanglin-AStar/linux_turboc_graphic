/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式98】
題目：從鍵盤輸入一個字串，將小寫字母全部轉換成大寫字母，然後輸出到一個磁碟檔案“test”中儲存。
輸入的字串以！結束。
程式分析：
程式原始碼：
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    FILE *fp;
    char str[100],filename[10];
    int i=0;
    if((fp=fopen("test","w"))==NULL){ 
        printf("cannot open the file\n");
        exit(0);
    }
    printf("please input a string:\n");
    gets(str);
    while(str[i]!='!'){ 
        if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32;
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
    fp=fopen("test","r");
    fgets(str,strlen(str)+1,fp);
    printf("%s\n",str);
    fclose(fp);
}