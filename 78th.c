/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式78】
題目：找到年齡最大的人，並輸出。請找出程式中有什麼問題。
程式分析：
程式原始碼：
*/
#include <stdio.h>
#define N 4

static struct man{ 
    char name[20];
    int age;
} person[N]={
    "li",18,"wang",19,"zhang",20,"sun",22
};
void main(){
    struct man *q,*p;
    int i,m=0;
    p=person;
    for (i=0;i<N;i++){
        if(m<p->age)
            q=p++;
        m=q->age;
    }
    printf("%s,%d",(*q).name,(*q).age);
}
