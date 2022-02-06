/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式12】
題目：判斷101-200之間有多少個素數，並輸出所有素數。

程式分析：判斷素數的方法：用一個數分別去除2到sqrt(這個數)，如果能被整除，則表明此數不是素數，反之是素數。

程式原始碼：
*/
#include <stdio.h>
#include <math.h>
void main(){
    int m,i,k,h=0,leap=1;
    printf("\n");
    for(m=101;m<=200;m++){
            k=sqrt(m+1);
            for(i=2;i<=k;i++)
                if(m%i==0)
                    {leap=0;break;}
            if(leap) {
                printf("%-4d",m);h++;
                if(h%10==0)
                    printf("\n");
            }
            leap=1;
    }
    printf("\nThe total is %d",h);
}
