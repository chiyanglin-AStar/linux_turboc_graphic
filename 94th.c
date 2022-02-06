/* 
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式94】
題目：時間函式舉例4,一個猜數遊戲，判斷一個人反應快慢。（版主初學時編的）
程式分析：
程式原始碼：
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

void main(){
    char c;
    clock_t start,end;
    time_t a,b;
    double var;
    int i,guess;
    srand(time(NULL));
    printf("do you want to play it.('y' or 'n') \n");
    loop:
    while((c=getchar())=='y'){
    i=rand()%100;
    printf("\nplease input number you guess:\n");
    start=clock();
    a=time(NULL);
    scanf("%d",&guess);
    while(guess!=i) {
        if(guess>i){
            printf("please input a little smaller.\n");
            scanf("%d",&guess);
        }else{
            printf("please input a little bigger.\n");
            scanf("%d",&guess);}
        }
        end=clock();
        b=time(NULL);
        printf("\1: It took you %6.3f seconds\n",var=(double)(end-start)/18.2);
        printf("\1: it took you %6.3f seconds\n\n",difftime(b,a));
        if(var<15)
            printf("\1\1 You are very clever! \1\1\n\n");
        else if(var<25)
            printf("\1\1 you are normal! \1\1\n\n");
        else
            printf("\1\1 you are stupid! \1\1\n\n");
        printf("\1\1 Congradulations \1\1\n\n");
        printf("The number you guess is %d",i);
    }
    printf("\ndo you want to try it again?(\"yy\".or.\"n\")\n");
    if((c=getch())=='y')
    goto loop;
}