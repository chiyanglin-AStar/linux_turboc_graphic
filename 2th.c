/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式2】
題目：企業發放的獎金根據利潤提成。

利潤(I)低於或等於10萬元時，獎金可提10%；

利潤高於10萬元，低於20萬元時，低於10萬元的部分按10%提成，高於10萬元的部分，可可提成7.5%；

20萬到40萬之間時，高於20萬元的部分，可提成5%；

40萬到60萬之間時高於40萬元的部分，可提成3%；

60萬到100萬之間時，高於60萬元的部分，可提成1.5%，

高於100萬元時，超過100萬元的部分按1%提成， 從鍵盤輸入當月利潤I，求應發放獎金總數？

程式分析：請利用數軸來分界，定位。注意定義時需把獎金定義成長整型。

程式原始碼：
*/
#include <stdio.h> 
void main(){
    long int i;
    int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    scanf("%ld",&i);
    bonus1=100000*0.1;bonus2=bonus1+100000*0.75;
    bonus4=bonus2+200000*0.5;
    bonus6=bonus4+200000*0.3;
    bonus10=bonus6+400000*0.15;

    if(i<=100000)
    bonus=i*0.1;
    else if(i<=200000)
        bonus=bonus1+(i-100000)*0.075;
        else if(i<=400000)
            bonus=bonus2+(i-200000)*0.05;
            else if(i<=600000)
                bonus=bonus4+(i-400000)*0.03;
            else if(i<=1000000)
                bonus=bonus6+(i-600000)*0.015;
                else
                bonus=bonus10+(i-1000000)*0.01;
    printf("bonus=%d",bonus);
} 