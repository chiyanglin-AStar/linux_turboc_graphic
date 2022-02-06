/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式81】
題目：809*??=800*??+9*??+1 其中??代表的兩位數,8*??的結果為兩位數，9*??的結果為3位數。求??代表的兩位數，及809*??後的結果。
程式分析：
程式原始碼：
*/
#include<stdio.h>
void output(long b,long i){ 
    printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i);
}
void main(){
    long int a,b,i;
    a=809;
    for(i=10;i<100;i++){
        b=i*a+1;
        if(b>=1000&&b<=10000&&8*i<100&&9*i>=100)
        output(b,i); 
    }
}