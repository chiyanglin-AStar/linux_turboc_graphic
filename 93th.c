/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式93】
題目：時間函式舉例3
程式分析：
程式原始碼：
*/
/*calculate time*/
#include <time.h>
#include <stdio.h>
void main(){ 
    clock_t start,end;
    int i;
    double var;
    start=clock();
    for(i=0;i<10000;i++){
        printf("\1\1\1\1\1\1\1\1\1\1\n");
    }
    end=clock();
    printf("\1: The different is %6.3f\n",(double)(end-start));
}