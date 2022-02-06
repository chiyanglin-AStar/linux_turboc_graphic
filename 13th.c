/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式13】
題目：打印出所有的“水仙花數”，所謂“水仙花數”是指一個三位數，其各位數字立方和等於該數本身。例如：153是一個“水仙花數”，因為153=1的三次方＋5的三次方＋3的三次方。

程式分析：利用for迴圈控制100-999個數，每個數分解出個位，十位，百位。

程式原始碼：
*/
#include <stdio.h>
void main(){
    int i,j,k,n;
    printf("'water flower'number is:");
    for(n=100;n<1000;n++){
        i=n/100;/*分解出百位*/
        j=n/10%10;/*分解出十位*/
        k=n%10;/*分解出個位*/
        if(i*100+j*10+k==i*i*i+j*j*j+k*k*k){
            printf("%-5d",n);
        }
    }
    printf("\n");
}