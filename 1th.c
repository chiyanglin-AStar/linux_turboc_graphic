/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式1】
題目：有1、2、3、4個數字，能組成多少個互不相同且無重複數字的三位數？都是多少？
程式分析：可填在百位、十位、個位的數字都是1、2、3、4。組成所有的排列後再去掉不滿足條件的排列。
程式原始碼：
*/
#include <stdio.h> 
//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char *argv[]) {
 int i, j, k,n=0;
 for (i = 1; i < 5; i++)
    for (j = 1; j < 5; j++)
        for (k = 1; k < 5; k++) {
            if (i != k&&i != j&&j != k){
                n++;
                printf("%d%d%d\n", i, j, k);
            }   
        }
 printf("一共有%d個\n", n);
 //system("pause");
 return 0;
}



