/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式19】
題目：一個數如果恰好等於它的因子之和，這個數就稱為“完數”。例如6=1＋2＋3.程式設計找出1000以內的所有完數。
程式分析：請參照程式<--上頁程式14.
程式原始碼：
*/
#include <stdio.h>
void main(){
    static int k[10];
    int i,j,n,s;
    for(j=2;j<1000;j++){
        n=-1;
        s=j;
        for(i=1;i<j;i++){
            if((j%i)==0){
                n++;
                s=s-i;
                k[n]=i;
            }
        }
        if(s==0){
            printf("%d is a wanshu",j);
            for(i=0;i<n;i++)   
                    printf("%d,",k[i]);
            printf("%d\n",k[n]);
        }
    }
}