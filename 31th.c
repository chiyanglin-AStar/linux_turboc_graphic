/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式31】
題目：請輸入星期幾的第一個字母來判斷一下是星期幾，如果第一個字母一樣，則繼續判斷第二個字母。
程式分析：用情況語句比較好，如果第一個字母一樣，則判斷用情況語句或if語句判斷第二個字母。
程式原始碼：
*/
#include <stdio.h>
void main(){
    char letter;
    printf("please input the first letter of someday\n");
    while ((letter=getch())!='Y'){/*當所按字母為Y時才結束*/
        switch (letter){
            case 'S':printf("please input second letter\n");
                  if((letter=getch())=='a')
                      printf("saturday\n");
                  else if ((letter=getch())=='u')
                      printf("sunday\n");
                  else printf("data error\n");
                  break;
            case 'F':printf("friday\n");break;
            case 'M':printf("monday\n");break;
            case 'T':printf("please input second letter\n");
                  if((letter=getch())=='u')
                  printf("tuesday\n");
                  else if ((letter=getch())=='h')
                      printf("thursday\n");
                    else printf("data error\n");
                  break;
            case 'W':printf("wednesday\n");break;
            default: printf("data error\n");
        }
    }
}