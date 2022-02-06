/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式22】
題目：兩個乒乓球隊進行比賽，各出三人。甲隊為a,b,c三人，乙隊為x,y,z三人。已抽籤決定比賽名單。有人向隊員打聽比賽的名單。a說他不和x比，c說他不和x,z比，請程式設計序找出三隊賽手的名單。
程式分析：判斷素數的方法：用一個數分別去除2到sqrt(這個數)，如果能被整除，則表明此數不是素數，反之是素數。
程式原始碼：
*/
#include <stdio.h>
void main(){
    char i,j,k;/*i是a的對手，j是b的對手，k是c的對手*/
    for(i='x';i<='z';i++)
        for(j='x';j<='z';j++){
        if(i!=j)
            for(k='x';k<='z';k++){ 
                if(i!=k&&j!=k){ 
                    if(i!='x'&&k!='x'&&k!='z')
                            printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
                }
            }
        }
}