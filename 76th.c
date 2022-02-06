/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式76】
題目：編寫一個函式，輸入n為偶數時，呼叫函式求1/2+1/4+...+1/n,當輸入n為奇數時，呼叫函式1/1+1/3+...+1/n(利用指標函式)
程式分析：
程式原始碼：
*/

#include "stdio.h"
void main(){
    float peven(),podd(),dcall();
    float sum;
    int n;
    while (1){
        scanf("%d",&n);
        if(n>1)
            break;
    }
    if(n%2==0){
        printf("Even=");
        sum=dcall(peven,n);
    }else{
        printf("Odd=");
        sum=dcall(podd,n);
    }
    printf("%f",sum);
}

float peven(int n){
    float s;
    int i;
    s=1;
    for(i=2;i<=n;i+=2)
    s+=1/(float)i;
    return(s);
}

float podd(n)
int n;{
    float s;
    int i;
    s=0;
    for(i=1;i<=n;i+=2)
    s+=1/(float)i;
    return(s);
}

float dcall(fp,n)
float (*fp)();
int n;{
    float s;
    s=(*fp)(n);
    return(s);
}
