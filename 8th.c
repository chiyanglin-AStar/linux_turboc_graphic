/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式8】
題目：輸出9*9乘法表
*/
#include <stdio.h> 
int main(){
    int x, y, z;
    for (x = 0; x < 9; x++){
        for (y = 0; y < x; y++){
            z = x*y;
            printf("%d*%d=%d  ", y, x, z);
        }
    printf("\n");
    }
    
    // system("pause"); // note:  windows c library function
    
    // Change to 
    getchar();

    return 0;
}