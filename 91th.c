/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式91】
題目：時間函式舉例1
程式分析：
程式原始碼：

major in windows environment ,in linux , need to rewrite 
*/
#include <time.h>
#include <stdio.h>
void main(){ 
    time_t lt; /*define a longint time varible*/
    lt=time(NULL);/*system time and date*/
    printf(ctime(<)); /*english format output*/
    printf(asctime(localtime(<)));/*tranfer to tm*/
    printf(asctime(gmtime(<))); /*tranfer to Greenwich time*/
}