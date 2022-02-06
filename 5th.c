/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式5】
題目：輸入三個整數x,y,z，請把這三個數由小到大輸出。

程式分析：我們想辦法把最小的數放到x上，先將x與y進行比較，如果x>y則將x與y的值進行交換,然後再用x與z進行比較，如果x>z則將x與z的值進行交換，這樣能使x最小。

程式原始碼：
*/
#include <stdio.h> 
void main(){
    int x,y,z,t;
    scanf("%d%d%d",&x,&y,&z);
    if (x>y){
        t=x;x=y;y=t;} /*交換x,y的值*/
    if(x>z){
        t=z;z=x;x=t;}/*交換x,z的值*/
    if(y>z){
        t=y;y=z;z=t;}/*交換z,y的值*/
    printf("small to big: %d %d %d\n",x,y,z);
}