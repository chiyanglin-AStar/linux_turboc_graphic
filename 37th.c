/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式37】
題目：對10個數進行排序
程式分析：可以利用選擇法，即從後9個比較過程中，選擇一個最小的與第一個元素交換，下次類推，即用第二個元素與後8個進行比較，並進行交換。
程式原始碼：
*/
#include<stdio.h>
#define N 10
void main(){
    int i,j,min,tem,a[N];
    /*input data*/
    printf("please input ten num:\n");
    for(i=0;i<N;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    for(i=0;i<N;i++)
        printf("%5d",a[i]);
    printf("\n");
    /*sort ten num*/
    for(i=0;i<N-1;i++){
        min=i;
        for(j=i+1;j<N;j++)
            if(a[min]>a[j]) min=j;
        tem=a[i];
        a[i]=a[min];
        a[min]=tem;
    }
    /*output data*/
    printf("After sorted \n");
    for(i=0;i<N;i++)
        printf("%5d",a[i]);
}