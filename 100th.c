/*
ref: https://www.gushiciku.cn/pl/gQ5t/zh-tw
【程式100】
題目：有五個學生，每個學生有3門課的成績，從鍵盤輸入以上資料（包括學生號，姓名，三門課成績），計算出平均成績，況原有的資料和計算出的平均分數存放在磁碟檔案"stud"中。
程式分析：
程式原始碼：
*/
#include <stdio.h>
struct student{ 
    char num[6];
    char name[8];
    int score[3];
    float avr;
} stu[5];

void main(){
    int i,j,sum;
    FILE *fp;
    /*input*/
    for(i=0;i<5;i++){ 
        printf("\n please input No. %d score:\n",i);
        printf("stuNo:");
        scanf("%s",stu[i].num);
        printf("name:");
        scanf("%s",stu[i].name);
        sum=0;
        for(j=0;j<3;j++){ 
            printf("score %d.",j+1);
            scanf("%d",&stu[i].score[j]);
            sum+=stu[i].score[j];
        }
        stu[i].avr=sum/3.0;
    }
    fp=fopen("stud","w");
    for(i=0;i<5;i++)
        if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
            printf("file write error\n");
        fclose(fp);
}