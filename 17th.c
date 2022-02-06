/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式17】
題目：輸入一行字元，分別統計出其中英文字母、空格、數字和其它字元的個數。
程式分析：利用while語句,條件為輸入的字元不為'\n'.
程式原始碼：
*/
#include <stdio.h>
void main(){
    char c;
    int letters=0,space=0,digit=0,others=0;
    printf("please input some characters\n");
    while((c=getchar())!='\n'){
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            letters++;
        else if(c==' ')
            space++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            others++;
    }
    printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
    space,digit,others);
}
