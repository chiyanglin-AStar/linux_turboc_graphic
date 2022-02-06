/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式30】
題目：一個5位數，判斷它是不是迴文數。即12321是迴文數，個位與萬位相同，十位與千位相同。
程式分析：同29例
程式原始碼：
*/
#include<stdio.h>
void main(){
    long ge,shi,qian,wan,x;
    scanf("%ld",&x);
    wan=x/10000;
    qian=x%10000/1000;
    shi=x%100/10;
    ge=x%10;
    if (ge==wan&&shi==qian)/*個位等於萬位並且十位等於千位*/
        printf("this number is a huiwen\n");
    else
        printf("this number is not a huiwen\n");
}