/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式92】
題目：時間函式舉例2
程式分析：
程式原始碼：
*/
/*calculate time*/
#include <time.h>
#include <stdio.h>
void main(){ 
    time_t start,end;
    int i;
    start=time(NULL);
    for(i=0;i<3000;i++){ 
        printf("\1\1\1\1\1\1\1\1\1\1\n");
    }
    end=time(NULL);
    printf("\1: The different is %6.3f\n",difftime(end,start));
}