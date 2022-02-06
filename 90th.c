/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式90】
題目：專升本一題，讀結果。
程式分析：
程式原始碼：
*/
#include <stdio.h>
#define M 5
void main(){
    int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;j=M-1;
    while(i<j) {
        t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        i++;j--;
    }
    for(i=0;i<M;i++)  
        printf("%d",*(a+i));
}