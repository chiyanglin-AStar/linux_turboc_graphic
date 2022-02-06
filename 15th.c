/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式15】
題目：利用條件運算子的巢狀來完成此題：學習成績>=90分的同學用A表示，60-89分之間的用B表示，60分以下的用C表示。
程式分析：(a>b)?a:b這是條件運算子的基本例子。
程式原始碼：
*/
#include <stdio.h>
void main(){
    int score;
    char grade;
    printf("please input a score\n");
    scanf("%d",&score);
    grade=score>=90?'A':(score>=60?'B':'C');
    printf("%d belongs to %c",score,grade);
}