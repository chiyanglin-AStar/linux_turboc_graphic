/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式14】
題目：將一個正整數分解質因數。例如：輸入90,打印出90=233*5。

程式分析：對n進行分解質因數，應先找到一個最小的質數k，然後按下述步驟完成：
如果這個質數恰等於n，則說明分解質因數的過程已經結束，打印出即可。
如果n<>k，但n能被k整除，則應打印出k的值，並用n除以k的商,作為新的正整數你n, 　 重複執行第一步。
如果n不能被k整除，則用k+1作為k的值,重複執行第一步。

程式原始碼：
*/
/* zheng int is divided yinshu*/
#include <stdio.h>
void main(){
    int n,i;
    printf("\nplease input a number:\n");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++){
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                n=n/i;
            }
            else
                break;
        }
    }
    printf("%d",n);
}