/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式20】
題目：一球從100米高度自由落下，每次落地後反跳回原高度的一半；再落下，求它在第10次落地時，共經過多少米？第10次反彈多高？
程式分析：見下面註釋
程式原始碼：
*/
#include <stdio.h>
void main(){
    float sn=100.0,hn=sn/2;
    int n;
    for(n=2;n<=10;n++){
        sn=sn+2*hn;/*第n次落地時共經過的米數*/
        hn=hn/2; /*第n次反跳高度*/
    }
    printf("the total of road is %f\n",sn);
    printf("the tenth is %f meter\n",hn);
}
