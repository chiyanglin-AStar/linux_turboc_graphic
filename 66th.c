/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式66】
題目：輸入3個數a,b,c，按大小順序輸出。
程式分析：利用指標方法。
程式原始碼：
*/
/*pointer*/
#include<stdio.h>
void swap(int *p1,int *p2);
void main(){
    int n1,n2,n3;
    int *pointer1,*pointer2,*pointer3;
    printf("please input 3 number:n1,n2,n3:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    pointer1=&n1;
    pointer2=&n2;
    pointer3=&n3;
        
    if(n1>n2) swap(pointer1,pointer2);
    if(n1>n3) swap(pointer1,pointer3);
    if(n2>n3) swap(pointer2,pointer3);
    
    printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3);
}

void swap(p1,p2) int *p1,*p2;{
    int p;
    p=*p1;*p1=*p2;*p2=p;
}