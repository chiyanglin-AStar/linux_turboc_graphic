/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式18】
題目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一個數字。例如2+22+222+2222+22222(此時共有5個數相加)，幾個數相加有鍵盤控制。
程式分析：關鍵是計算出每一項的值。
程式原始碼：
*/
#include <stdio.h>
void main(){
    int a,n,count=1;
    long int sn=0,tn=0;
    printf("please input a and n\n");
    scanf("%d,%d",&a,&n);
    printf("a=%d,n=%d\n",a,n);
    while(count<=n){
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
        ++count;
    }
    printf("a+aa+...=%ld\n",sn);
}