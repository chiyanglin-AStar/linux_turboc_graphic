/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式4】
題目：輸入某年某月某日，判斷這一天是這一年的第幾天？

程式分析：以3月5日為例，應該先把前兩個月的加起來，然後再加上5天即本年的第幾天，特殊情況，閏年且輸入月份大於3時需考慮多加一天。

程式原始碼：
*/
#include <stdio.h> 
//int _tmain(int argc, _TCHAR* argv[]){
int main(int argc, char *argv[]) {
    int day, month, year, sum, leap;
    printf("please input year,month,day:\n");
    //scanf_s("%d %d %d", &year, &month, &day);
    scanf("%d %d %d", &year, &month, &day);
    switch (month){/*先計算某月以前月份的總天數*/    
        case 1:sum = 0; break;
        case 2:sum = 31; break;
        case 3:sum = 59; break;
        case 4:sum = 90; break;
        case 5:sum = 120; break;
        case 6:sum = 151; break;
        case 7:sum = 181; break;
        case 8:sum = 212; break;
        case 9:sum = 243; break;
        case 10:sum = 273; break;
        case 11:sum = 304; break;
        case 12:sum = 334; break;
        default:printf("data error"); break;
    }
    sum += day;  /*再加上某天的天數*/
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){/*判斷是不是閏年*/
        leap = 1;
    }else{
        leap = 0;
    }
    if (leap == 1 && month > 2){/*如果是閏年且月份大於2,總天數應該加一天*/
        sum++;
    }
    printf("It is the %d th day.", sum);
    //system("pause");
    return 0;
}