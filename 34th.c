/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式34】
題目：練習函式呼叫
程式分析：
程式原始碼：
*/
#include <stdio.h>
void hello_world(void){
    printf("Hello, world!\n");
}
void three_hellos(void){
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();/*呼叫此函式*/
}
void main(void){
    three_hellos();/*呼叫此函式*/
}