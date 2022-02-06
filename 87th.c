/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式87】
題目：回答結果（結構體變數傳遞）
程式分析：
程式原始碼：
*/
#include <stdio.h>
struct student{ 
    int x;
    char c;
};

struct student a;

int main(){
    a.x=3;
    a.c='a';
    //f(a);
    printf("%d,%c",a.x,a.c);
}
/*
f(struct student b){
    b.x=20;
    b.c='y';
}
*/