/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式69】
題目：有n個人圍成一圈，順序排號。從第一個人開始報數（從1到3報數），凡報到3的人退出圈子，問最後留下的是原來第幾號的那位。
程式分析：
程式原始碼：
*/
#include<stdio.h>
#define nmax 50
void main(){
    int i,k,m,n,num[nmax],*p;
    printf("please input the total of numbers:");
    scanf("%d",&n);
    p=num;
    for(i=0;i<n;i++)
        *(p+i)=i+1;
    i=0;
    k=0;
    m=0;
    while(m<n-1){
        if(*(p+i)!=0) k++;
        if(k==3){ 
            *(p+i)=0;
            k=0;
            m++;
        }
        i++;
        if(i==n) i=0;
    }

    while(*p==0) p++;
    printf("%d is left\n",*p);
}