/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式39】
題目：有一個已經排好序的陣列。現輸入一個數，要求按原來的規律將它插入陣列中。
程式分析：首先判斷此數是否大於最後一個數，然後再考慮插入中間的數的情況，插入後此元素之後的數，依次後移一個位置。
程式原始碼：
*/
#include<stdio.h>
void main(){
    int a[11]={1,4,6,9,13,16,19,28,40,100};
    int temp1,temp2,number,end,i,j;
    printf("original array is:\n");
    for(i=0;i<10;i++)
        printf("%5d",a[i]);
    
    printf("\n");
    printf("insert a new number:");
    scanf("%d",&number);
    end=a[9];
    if(number>end)
        a[10]=number;
    else{
        for(i=0;i<10;i++){ 
            if(a[i]>number){
                temp1=a[i];
                a[i]=number;
                for(j=i+1;j<11;j++){
                    temp2=a[j];
                a[j]=temp1;
                temp1=temp2;
                }
                break;
            }
        }
    }
    for(i=0;i<11;i++)
    printf("%6d",a[i]);
}