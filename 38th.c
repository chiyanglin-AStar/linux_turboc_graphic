/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式38】
題目：求一個3*3矩陣對角線元素之和
程式分析：利用雙重for迴圈控制輸入二維陣列，再將a[i][i]累加後輸出。
程式原始碼：
*/
#include<stdio.h>
void main(){
    float a[3][3],sum=0;
    int i,j;
    printf("please input rectangle element:\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        scanf("%f",&a[i][j]);
    for(i=0;i<3;i++)
        sum=sum+a[i][i];
    printf("duijiaoxian he is %6.2f",sum);
}