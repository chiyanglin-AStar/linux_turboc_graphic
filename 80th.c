/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式80】
題目：海灘上有一堆桃子，五隻猴子來分。第一隻猴子把這堆桃子憑據分為五份，多了一個，這隻猴子把多的一個扔入海中，拿走了一份。第二隻猴子把剩下的桃子又平均分成五份，又多了一個，它同樣把多的一個扔入海中，拿走了一份，第三、第四、第五隻猴子都是這樣做的，問海灘上原來最少有多少個桃子？
程式分析：
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i,m,j,k,count;
    for(i=4;i<10000;i+=4){ 
        count=0;
        m=i;
        for(k=0;k<5;k++){
            j=i/4*5+1;
            i=j;
            if(j%4==0)
            count++;
            else
                break;
        }
        i=m;
        if(count==4){
            printf("%d\n",count);
            break;
        }
    }
}