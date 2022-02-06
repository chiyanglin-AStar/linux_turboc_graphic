/* 
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式42】
題目：學習使用auto定義變數的用法
程式分析：
程式原始碼：
*/
#include<stdio.h>
void main(){
    int i,num;
    num=2;
    for (i=0;i<3;i++){ 
        printf("\40: The num equal %d \n",num);
        num++;
        {
            auto int num=1;
            printf("\40: The internal block num equal %d \n",num);
            num++;
        }
    }
}