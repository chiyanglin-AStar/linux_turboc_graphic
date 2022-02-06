/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式73】
題目：反向輸出一個連結串列。
程式分析：
程式原始碼：
*/
/*reverse output a list*/
#include "stdlib.h"
#include "stdio.h"
struct list{ 
    int data;
    struct list *next;
};
typedef struct list node;
typedef node *link;
void main(){ 
    link ptr,head,tail; 
    int num,i;
    tail=(link)malloc(sizeof(node));
    tail->next=NULL;
    ptr=tail;
    printf("\nplease input 5 data==>\n");
    for(i=0;i<=4;i++){
        scanf("%d",&num);
        ptr->data=num;
        head=(link)malloc(sizeof(node));
        head->next=ptr;
        ptr=head;
    }
    ptr=ptr->next;
    while(ptr!=NULL){ 
        printf("The value is ==>%d\n",ptr->data);
        ptr=ptr->next;
    }
}