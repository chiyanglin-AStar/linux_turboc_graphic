/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式83】
題目：求0—7所能組成的奇數個數。
程式分析：
程式原始碼：
*/
#include <stdio.h>
void main(){
    long sum=4,s=4;
    int j;
    for(j=2;j<=8;j++){ /*j is place of number*/
        printf("\n%ld",sum);
        if(j<=2)
            s*=7;
        else
            s*=8;
        sum+=s;
    }
    printf("\nsum=%ld",sum);
}