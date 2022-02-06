【程式1】
題目：有1、2、3、4個數字，能組成多少個互不相同且無重複數字的三位數？都是多少？

程式分析：可填在百位、十位、個位的數字都是1、2、3、4。組成所有的排列後再去掉不滿足條件的排列。

程式原始碼：

int _tmain(int argc, _TCHAR* argv[])
{
 int i, j, k,n=0;
 for (i = 1; i < 5; i++)
  for (j = 1; j < 5; j++)
   for (k = 1; k < 5; k++)
   {
    if (i != k&&i != j&&j != k){
     n++;
     printf("%d%d%d\n", i, j, k);
    }   
   }
 printf("一共有%d個\n", n);
 system("pause");
 return 0;
}
【程式2】
題目：企業發放的獎金根據利潤提成。

利潤(I)低於或等於10萬元時，獎金可提10%；

利潤高於10萬元，低於20萬元時，低於10萬元的部分按10%提成，高於10萬元的部分，可可提成7.5%；

20萬到40萬之間時，高於20萬元的部分，可提成5%；

40萬到60萬之間時高於40萬元的部分，可提成3%；

60萬到100萬之間時，高於60萬元的部分，可提成1.5%，

高於100萬元時，超過100萬元的部分按1%提成， 從鍵盤輸入當月利潤I，求應發放獎金總數？

程式分析：請利用數軸來分界，定位。注意定義時需把獎金定義成長整型。

程式原始碼：

main()
{
long int i;
int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
scanf("%ld",&i);
bonus1=100000*0.1;bonus2=bonus1+100000*0.75;
bonus4=bonus2+200000*0.5;
bonus6=bonus4+200000*0.3;
bonus10=bonus6+400000*0.15;
  if(i<=100000)
   bonus=i*0.1;
  else if(i<=200000)
      bonus=bonus1+(i-100000)*0.075;
     else if(i<=400000)
         bonus=bonus2+(i-200000)*0.05;
        else if(i<=600000)
            bonus=bonus4+(i-400000)*0.03;
           else if(i<=1000000)
               bonus=bonus6+(i-600000)*0.015;
              else
               bonus=bonus10+(i-1000000)*0.01;
printf("bonus=%d",bonus);
} 
【程式3】
題目：一個整數，它加上100後是一個完全平方數，再加上168又是一個完全平方數，請問該數是多少？

程式分析：在10萬以內判斷，先將該數加上100後再開方，再將該數加上268後再開方，如果開方後的結果滿足如下條件，即是結果。請看具體分析：

程式原始碼：

#include "math.h"
main()
{
long int i,x,y,z;
for (i=1;i<100000;i++)
  { x=sqrt(i+100);   /*x為加上100後開方後的結果*/
   y=sqrt(i+268);   /*y為再加上168後開方後的結果*/
    if(x*x==i+100&&y*y==i+268)/*如果一個數的平方根的平方等於該數，這說明此數是完全平方數*/
     printf("\n%ld\n",i);
  }
}
【程式4】
題目：輸入某年某月某日，判斷這一天是這一年的第幾天？

程式分析：以3月5日為例，應該先把前兩個月的加起來，然後再加上5天即本年的第幾天，特殊情況，閏年且輸入月份大於3時需考慮多加一天。

程式原始碼：

int _tmain(int argc, _TCHAR* argv[])
{
 int day, month, year, sum, leap;
 printf("please input year,month,day:\n");
 scanf_s("%d %d %d", &year, &month, &day);
 switch (month)/*先計算某月以前月份的總天數*/
 {
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
 if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))/*判斷是不是閏年*/
 {
  leap = 1;
 }else{
  leap = 0;
 }
 if (leap == 1 && month > 2)/*如果是閏年且月份大於2,總天數應該加一天*/
 {
  sum++;
 }
 printf("It is the %d th day.", sum);
 system("pause");
 return 0;
}
【程式5】
題目：輸入三個整數x,y,z，請把這三個數由小到大輸出。

程式分析：我們想辦法把最小的數放到x上，先將x與y進行比較，如果x>y則將x與y的值進行交換,然後再用x與z進行比較，如果x>z則將x與z的值進行交換，這樣能使x最小。

程式原始碼：

main()
{
int x,y,z,t;
scanf("%d%d%d",&x,&y,&z);
if (x>y)
{t=x;x=y;y=t;} /*交換x,y的值*/
if(x>z)
{t=z;z=x;x=t;}/*交換x,z的值*/
if(y>z)
{t=y;y=z;z=t;}/*交換z,y的值*/
printf("small to big: %d %d %d\n",x,y,z);
}
【程式6】
求100之內的素數

程式分析：

程式原始碼：

#include "stdio.h"
#include "math.h"
#define N 101
main()
{
  int i,j,line,a[N];
  for(i=2;i<N;i++) a[i]=i;
    for(i=2;i<sqrt(N);i++)
      for(j=i+1;j<N;j++)
      {
        if(a[i]!=0&&a[j]!=0)
          if(a[j]%a[i]==0)
            a[j]=0;
      }
  printf("\n");
  for(i=2,line=0;i<N;i++)
  {
    if(a[i]!=0)
    {
      printf("%5d",a[i]);
      line++;
    }
    if(line==10)
    {
      printf("\n");
      line=0;
    }
  }
  getch();
}
【程式7】
題目：對10個數進行排序

程式分析：可以利用選擇法，即從後9個比較過程中，選擇一個最小的與第一個元素交換，下次類推，即用第二個元素與後8個進行比較，並進行交換。

程式原始碼：

#include "stdio.h"
#include "conio.h"
#define N 10
main()
{
  int i,j,min,tem,a[N];
  /*input data*/
  printf("please input ten num:\n");
  for(i=0;i<N;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;i<N;i++)
    printf("%5d",a[i]);
  printf("\n");
  /*sort ten num*/
  for(i=0;i<N-1;i++)
  {
    min=i;
    for(j=i+1;j<N;j++)
      if(a[min]>a[j])
        min=j;
    tem=a[i];
    a[i]=a[min];
    a[min]=tem;
  }
  /*output data*/
  printf("After sorted \n");
  for(i=0;i<N;i++)
  printf("%5d",a[i]);
  getch();
}
【程式8】
題目：輸出9*9乘法表

int main()
{
 int x, y, z;
 for (x = 0; x < 9; x++)
 {
  for (y = 0; y < x; y++)
  {
   z = x*y;
   printf("%d*%d=%d  ", y, x, z);
  }
  printf("\n");
 }
 system("pause");
 return 0;
}
【程式9】
題目：有5個人坐在一起，問第五個人多少歲？他說比第4個人大2歲。問第4個人歲數，他說比第3個人大2歲。問第三個人，又說比第2人大兩歲。問第2個人，說比第一個人大兩歲。最後問第一個人，他說是10歲。請問第五個人多大？

程式分析：利用遞迴的方法，遞迴分為回推和遞推兩個階段。要想知道第五個人歲數，需知道第四人的歲數，依次類推，推到第一人（10歲），再往回推。

程式原始碼：

#include "stdio.h"
#include "conio.h"
age(n)
int n;
{
  int c;
  if(n==1) c=10;
  else c=age(n-1)+2;
  return(c);
}
main()
{
  printf("%d",age(5));
  getch();
}
【程式10】
題目：有一分數序列：2/1，3/2，5/3，8/5，13/8，21/13...求出這個數列的前20項之和。

程式分析：請抓住分子與分母的變化規律。

程式原始碼：

#include "stdio.h"
#include "conio.h"
main()
{
  int n,t,number=20;
  float a=2,b=1,s=0;
  for(n=1;n<=number;n++)
  {
    s=s+a/b;
    t=a;a=a+b;b=t;/*這部分是程式的關鍵，請讀者猜猜t的作用*/
  }
  printf("sum is %9.6f\n",s);
  getch();
}
【程式11】
題目：古典問題：有一對兔子，從出生後第3個月起每個月都生一對兔子，小兔子長到第三個月後每個月又生一對兔子，假如兔子都不死，問每個月的兔子總數為多少？

程式分析：　兔子的規律為數列1,1,2,3,5,8,13,21....

程式原始碼：

main()
{
long f1,f2;
int i;
f1=f2=1;
for(i=1;i<=20;i++)
  { printf("%12ld %12ld",f1,f2);
    if(i%2==0) printf("\n");/*控制輸出，每行四個*/
    f1=f1+f2; /*前兩個月加起來賦值給第三個月*/
    f2=f1+f2; /*前兩個月加起來賦值給第三個月*/
  }
}
【程式12】
題目：判斷101-200之間有多少個素數，並輸出所有素數。

程式分析：判斷素數的方法：用一個數分別去除2到sqrt(這個數)，如果能被整除，則表明此數不是素數，反之是素數。

程式原始碼：

#include "math.h"
main()
{
  int m,i,k,h=0,leap=1;
  printf("\n");
  for(m=101;m<=200;m++)
   { k=sqrt(m+1);
    for(i=2;i<=k;i++)
      if(m%i==0)
       {leap=0;break;}
    if(leap) {printf("%-4d",m);h++;
         if(h%10==0)
         printf("\n");
        }
    leap=1;
   }
  printf("\nThe total is %d",h);
}
【程式13】
題目：打印出所有的“水仙花數”，所謂“水仙花數”是指一個三位數，其各位數字立方和等於該數本身。例如：153是一個“水仙花數”，因為153=1的三次方＋5的三次方＋3的三次方。

程式分析：利用for迴圈控制100-999個數，每個數分解出個位，十位，百位。

程式原始碼：

main()
{
int i,j,k,n;
printf("'water flower'number is:");
  for(n=100;n<1000;n++)
  {
   i=n/100;/*分解出百位*/
   j=n/10%10;/*分解出十位*/
   k=n%10;/*分解出個位*/
   if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
    {
    printf("%-5d",n);
    }
  }
printf("\n");
}
【程式14】
題目：將一個正整數分解質因數。例如：輸入90,打印出90=233*5。

程式分析：對n進行分解質因數，應先找到一個最小的質數k，然後按下述步驟完成：

如果這個質數恰等於n，則說明分解質因數的過程已經結束，打印出即可。

如果n<>k，但n能被k整除，則應打印出k的值，並用n除以k的商,作為新的正整數你n, 　 重複執行第一步。

如果n不能被k整除，則用k+1作為k的值,重複執行第一步。

程式原始碼：

/* zheng int is divided yinshu*/
main()
{
int n,i;
printf("\nplease input a number:\n");
scanf("%d",&n);
printf("%d=",n);
for(i=2;i<=n;i++)
  {
   while(n!=i)
   {
    if(n%i==0)
    { printf("%d*",i);
     n=n/i;
    }
    else
     break;
   }
}
printf("%d",n);}
【程式15】
題目：利用條件運算子的巢狀來完成此題：學習成績>=90分的同學用A表示，60-89分之間的用B表示，60分以下的用C表示。

程式分析：(a>b)?a:b這是條件運算子的基本例子。

程式原始碼：

main()
{
  int score;
  char grade;
  printf("please input a score\n");
  scanf("%d",&score);
  grade=score>=90?'A':(score>=60?'B':'C');
  printf("%d belongs to %c",score,grade);
}
【程式16】
題目：輸入兩個正整數m和n，求其最大公約數和最小公倍數。

程式分析：利用輾除法。

程式原始碼：

main()
{
  int a,b,num1,num2,temp;
  printf("please input two numbers:\n");
  scanf("%d,%d",&num1,&num2);
  if(num1<num2)   
 { temp=num1;
   num1=num2; 
   num2=temp;
  }
a=num1;b=num2;
while(b!=0)/*利用輾除法，直到b為0為止*/
  {
   temp=a%b;
   a=b;
   b=temp;
  }
printf("gongyueshu:%d\n",a);
printf("gongbeishu:%d\n",num1*num2/a);
}
【程式17】
題目：輸入一行字元，分別統計出其中英文字母、空格、數字和其它字元的個數。

程式分析：利用while語句,條件為輸入的字元不為'\n'.

程式原始碼：

#include "stdio.h"
main()
{char c;
  int letters=0,space=0,digit=0,others=0;
  printf("please input some characters\n");
  while((c=getchar())!='\n')
  {
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
【程式18】
題目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一個數字。例如2+22+222+2222+22222(此時共有5個數相加)，幾個數相加有鍵盤控制。

程式分析：關鍵是計算出每一項的值。

程式原始碼：

main()
{
  int a,n,count=1;
  long int sn=0,tn=0;
  printf("please input a and n\n");
  scanf("%d,%d",&a,&n);
  printf("a=%d,n=%d\n",a,n);
  while(count<=n)
  {
   tn=tn+a;
   sn=sn+tn;
   a=a*10;
   ++count;
  }
printf("a+aa+...=%ld\n",sn);
}
【程式19】
題目：一個數如果恰好等於它的因子之和，這個數就稱為“完數”。例如6=1＋2＋3.程式設計找出1000以內的所有完數。

程式分析：請參照程式<--上頁程式14.

程式原始碼：

main()
{
static int k[10];
int i,j,n,s;
for(j=2;j<1000;j++)
  {
  n=-1;
  s=j;
   for(i=1;i<j;i++)
  {
    if((j%i)==0)
    { n++;
     s=s-i;
     k[n]=i;
    }
   }
  if(s==0)
  {
  printf("%d is a wanshu",j);
  for(i=0;i<n;i++)   
 printf("%d,",k[i]);
  printf("%d\n",k[n]);
  }
}
}
【程式20】
題目：一球從100米高度自由落下，每次落地後反跳回原高度的一半；再落下，求它在第10次落地時，共經過多少米？第10次反彈多高？

程式分析：見下面註釋

程式原始碼：

main()
{
float sn=100.0,hn=sn/2;
int n;
for(n=2;n<=10;n++)
  {
   sn=sn+2*hn;/*第n次落地時共經過的米數*/
   hn=hn/2; /*第n次反跳高度*/
  }
printf("the total of road is %f\n",sn);
printf("the tenth is %f meter\n",hn);
}
【程式21】
題目：猴子吃桃問題：猴子第一天摘下若干個桃子，當即吃了一半，還不癮，又多吃了一個，第二天早上又將剩下的桃子吃掉一半，又多吃了一個。以後每天早上都吃了前一天剩下的一半零一個。到第10天早上想再吃時，見只剩下一個桃子了。求第一天共摘了多少。

程式分析：採取逆向思維的方法，從後往前推斷。

程式原始碼：

main()
{
int day,x1,x2;
day=9;
x2=1;
while(day>0)
  {x1=(x2+1)*2;/*第一天的桃子數是第2天桃子數加1後的2倍*/
  x2=x1;
  day--;
  }
printf("the total is %d\n",x1);
}
【程式22】
題目：兩個乒乓球隊進行比賽，各出三人。甲隊為a,b,c三人，乙隊為x,y,z三人。已抽籤決定比賽名單。有人向隊員打聽比賽的名單。a說他不和x比，c說他不和x,z比，請程式設計序找出三隊賽手的名單。

程式分析：判斷素數的方法：用一個數分別去除2到sqrt(這個數)，如果能被整除，則表明此數不是素數，反之是素數。

程式原始碼：

main()
{
char i,j,k;/*i是a的對手，j是b的對手，k是c的對手*/
for(i='x';i<='z';i++)
  for(j='x';j<='z';j++)
  {
  if(i!=j)
   for(k='x';k<='z';k++)
   { if(i!=k&&j!=k)
    { if(i!='x'&&k!='x'&&k!='z')
    printf("order is a--%c\tb--%c\tc--%c\n",i,j,k);
    }
   }
  }
}
【程式23】
題目：打印出如下圖案（菱形） *

 
程式分析：先把圖形分成兩部分來看待，前四行一個規律，後三行一個規律，利用雙重for迴圈，第一層控制行，第二層控制列。

程式原始碼：

main()
{
int i,j,k;
for(i=0;i<=3;i++)
  {
  for(j=0;j<=2-i;j++)
   printf(" ");
  for(k=0;k<=2*i;k++)
   printf("*");
  printf("\n");
  }
for(i=0;i<=2;i++)
  {
  for(j=0;j<=i;j++)
   printf(" ");
  for(k=0;k<=4-2*i;k++)
   printf("*");
  printf("\n");
  }
}
【程式24】
題目：有一分數序列：2/1，3/2，5/3，8/5，13/8，21/13...求出這個數列的前20項之和。

程式分析：請抓住分子與分母的變化規律。

程式原始碼：

main()
{
int n,t,number=20;
float a=2,b=1,s=0;
for(n=1;n<=number;n++)
  {
  s=s+a/b;
  t=a;a=a+b;b=t;/*這部分是程式的關鍵，請讀者猜猜t的作用*/
  }
printf("sum is %9.6f\n",s);
}
【程式25】
題目：求1+2!+3!+...+20!的和

程式分析：此程式只是把累加變成了累乘。

程式原始碼：

main()
{
float n,s=0,t=1;
for(n=1;n<=20;n++)
  {
  t*=n;
  s+=t;
  }
printf("1+2!+3!...+20!=%e\n",s);
}
【程式26】
題目：利用遞迴方法求5!。

程式分析：遞迴公式：fn=fn_1*4!

程式原始碼：

#include "stdio.h"
main()
{
int i;
int fact();
for(i=0;i<5;i++)
  printf("\40:%d!=%d\n",i,fact(i));
}
int fact(j)
int j;
{
int sum;
if(j==0)
  sum=1;
else
  sum=j*fact(j-1);
return sum;
}
【程式27】
題目：利用遞迴函式呼叫方式，將所輸入的5個字元，以相反順序打印出來。

程式分析：

程式原始碼：

#include "stdio.h"
main()
{
int i=5;
void palin(int n);
printf("\40:");
palin(i);
printf("\n");
}
void palin(n)
int n;
{
char next;
if(n<=1)
  {
  next=getchar();
  printf("\n\0:");
  putchar(next);
  }
else
  {
  next=getchar();
  palin(n-1);
  putchar(next);
  }
}
【程式28】
題目：有5個人坐在一起，問第五個人多少歲？他說比第4個人大2歲。問第4個人歲數，他說比第3個人大2歲。問第三個人，又說比第2人大兩歲。問第2個人，說比第一個人大兩歲。最後問第一個人，他說是10歲。請問第五個人多大？

程式分析：利用遞迴的方法，遞迴分為回推和遞推兩個階段。要想知道第五個人歲數，需知道第四人的歲數，依次類推，推到第一人（10歲），再往回推。

程式原始碼：

age(n)
int n;
{
int c;
if(n==1) c=10;
else c=age(n-1)+2;
return(c);
}
main()
{ printf("%d",age(5));
}
【程式29】
題目：給一個不多於5位的正整數，要求：一、求它是幾位數，二、逆序打印出各位數字。

程式分析：學會分解出每一位數

程式原始碼：

main( )
{
long a,b,c,d,e,x;
scanf("%ld",&x);
a=x/10000;/*分解出萬位*/
b=x%10000/1000;/*分解出千位*/
c=x%1000/100;/*分解出百位*/
d=x%100/10;/*分解出十位*/
e=x%10;/*分解出個位*/
if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
   else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
     else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
       else if (e!=0) printf(" there are 1,%ld\n",e);
}
【程式30】
題目：一個5位數，判斷它是不是迴文數。即12321是迴文數，個位與萬位相同，十位與千位相同。

程式分析：同29例

程式原始碼：

main( )
{
long ge,shi,qian,wan,x;
scanf("%ld",&x);
wan=x/10000;
qian=x%10000/1000;
shi=x%100/10;
ge=x%10;
if (ge==wan&&shi==qian)/*個位等於萬位並且十位等於千位*/
  printf("this number is a huiwen\n");
else
  printf("this number is not a huiwen\n");
}
【程式31】
題目：請輸入星期幾的第一個字母來判斷一下是星期幾，如果第一個字母一樣，則繼續判斷第二個字母。

程式分析：用情況語句比較好，如果第一個字母一樣，則判斷用情況語句或if語句判斷第二個字母。

程式原始碼：

#include <stdio.h>
void main()
{
char letter;
printf("please input the first letter of someday\n");
while ((letter=getch())!='Y')/*當所按字母為Y時才結束*/
{ switch (letter)
{case 'S':printf("please input second letter\n");
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
【程式32】
題目：Press any key to change color, do you want to try it. Please hurry up!

程式分析：

程式原始碼：

#include <conio.h>
void main(void)
{
int color;
for (color = 0; color < 8; color++)
  { 
  textbackground(color);/*設定文字的背景顏色*/
  cprintf("This is color %d\r\n", color);
  cprintf("Press any key to continue\r\n");
  getch();/*輸入字元看不見*/
  }
}
【程式33】
題目：學習gotoxy()與clrscr()函式

程式分析：

程式原始碼：

#include <conio.h>
void main(void)
{
clrscr();/*清屏函式*/
textbackground(2);
gotoxy(1, 5);/*定位函式*/
cprintf("Output at row 5 column 1\n");
textbackground(3);
gotoxy(20, 10);
cprintf("Output at row 10 column 20\n");
}
【程式34】
題目：練習函式呼叫

程式分析：

程式原始碼：

#include <stdio.h>
void hello_world(void)
{
printf("Hello, world!\n");
}
void three_hellos(void)
{
int counter;
for (counter = 1; counter <= 3; counter++)
hello_world();/*呼叫此函式*/
}
void main(void)
{
three_hellos();/*呼叫此函式*/
}
【程式35】
題目：文字顏色設定

程式分析：

程式原始碼：

#include <conio.h>
void main(void)
{
int color;
for (color = 1; color < 16; color++)
  {
  textcolor(color);/*設定文字顏色*/
  cprintf("This is color %d\r\n", color);
  }
textcolor(128 + 15);
cprintf("This is blinking\r\n");
}
【程式36】
題目：求100之內的素數

程式分析：

程式原始碼：

#include <stdio.h>
#include "math.h"
#define N 101
main()
{
int i,j,line,a[N];
for(i=2;i<N;i++) a[i]=i;
for(i=2;i<sqrt(N);i++)
  for(j=i+1;j<N;j++)
  {
   if(a[i]!=0&&a[j]!=0)
   if(a[j]%a[i]==0)
   a[j]=0;}
printf("\n");
for(i=2,line=0;i<N;i++)
{
  if(a[i]!=0)
  {printf("%5d",a[i]);
  line++;}
  if(line==10)
  {printf("\n");
line=0;}
}
}
【程式37】
題目：對10個數進行排序

程式分析：可以利用選擇法，即從後9個比較過程中，選擇一個最小的與第一個元素交換，下次類推，即用第二個元素與後8個進行比較，並進行交換。

程式原始碼：

#define N 10
main()
{int i,j,min,tem,a[N];
/*input data*/
printf("please input ten num:\n");
for(i=0;i<N;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);}
printf("\n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
printf("\n");
/*sort ten num*/
for(i=0;i<N-1;i++)
{min=i;
for(j=i+1;j<N;j++)
if(a[min]>a[j]) min=j;
tem=a[i];
a[i]=a[min];
a[min]=tem;
}
/*output data*/
printf("After sorted \n");
for(i=0;i<N;i++)
printf("%5d",a[i]);
}
【程式38】
題目：求一個3*3矩陣對角線元素之和

程式分析：利用雙重for迴圈控制輸入二維陣列，再將a[i][i]累加後輸出。

程式原始碼：

main()
{
float a[3][3],sum=0;
int i,j;
printf("please input rectangle element:\n");
for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  scanf("%f",&a[i][j]);
for(i=0;i<3;i++)
  sum=sum+a[i][i];
printf("duijiaoxian he is %6.2f",sum);
}
【程式39】
題目：有一個已經排好序的陣列。現輸入一個數，要求按原來的規律將它插入陣列中。

程式分析：首先判斷此數是否大於最後一個數，然後再考慮插入中間的數的情況，插入後此元素之後的數，依次後移一個位置。

程式原始碼：

main()
{
int a[11]={1,4,6,9,13,16,19,28,40,100};
int temp1,temp2,number,end,i,j;
printf("original array is:\n");
for(i=0;i<10;i++)
  printf("%5d",a[i]);
printf("\n");
printf("insert a new number:");
scanf("%d",&number);
end=a[9];
if(number>end)
  a[10]=number;
else
  {for(i=0;i<10;i++)
   { if(a[i]>number)
    {temp1=a[i];
     a[i]=number;
    for(j=i+1;j<11;j++)
    {temp2=a[j];
     a[j]=temp1;
     temp1=temp2;
    }
    break;
    }
   }
}
for(i=0;i<11;i++)
  printf("%6d",a[i]);
}
【程式40】
題目：將一個數組逆序輸出。

程式分析：用第一個與最後一個交換。

程式原始碼：

#define N 5
main()
{ int a[N]={9,6,5,4,1},i,temp;
  printf("\n original array:\n");
  for(i=0;i<N;i++)
  printf("%4d",a[i]);
  for(i=0;i<N/2;i++)
  {temp=a[i];
   a[i]=a[N-i-1];
   a[N-i-1]=temp;
  }
printf("\n sorted array:\n");
for(i=0;i<N;i++)
  printf("%4d",a[i]);
}
【程式41】
題目：學習static定義靜態變數的用法

程式分析：

程式原始碼：

#include "stdio.h"
varfunc()
{
int var=0;
static int static_var=0;
printf("\40:var equal %d \n",var);
printf("\40:static var equal %d \n",static_var);
printf("\n");
var++;
static_var++;
}
void main()
{int i;
  for(i=0;i<3;i++)
   varfunc();
}
【程式42】
題目：學習使用auto定義變數的用法

程式分析：

程式原始碼：

#include "stdio.h"
main()
{int i,num;
num=2;
  for (i=0;i<3;i++)
  { printf("\40: The num equal %d \n",num);
   num++;
   {
   auto int num=1;
   printf("\40: The internal block num equal %d \n",num);
   num++;
   }
  }
}
【程式43】
題目：學習使用static的另一用法。

程式分析：

程式原始碼：

#include "stdio.h"
main()
{
int i,num;
num=2;
for(i=0;i<3;i++)
{
printf("\40: The num equal %d \n",num);
num++;
{
static int num=1;
printf("\40:The internal block num equal %d\n",num);
num++;
}
}
}
【程式44】
題目：學習使用external的用法。

程式分析：

程式原始碼：

#include "stdio.h"
int a,b,c;
void add()
{ int a;
a=3;
c=a+b;
}
void main()
{ a=b=4;
add();
printf("The value of c is equal to %d\n",c);
}
【程式45】
題目：學習使用register定義變數的方法。

程式分析：

程式原始碼：

void main()
{
register int i;
int tmp=0;
for(i=1;i<=100;i++)
tmp+=i;
printf("The sum is %d\n",tmp);
}
【程式46】
題目：巨集#define命令練習(1)

程式分析：

程式原始碼：

#include "stdio.h"
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
void main()
{
int num;
int again=1;
printf("\40: Program will stop if input value less than 50.\n");
while(again)
{
printf("\40:Please input number==>");
scanf("%d",&num);
printf("\40:The square for this number is %d \n",SQ(num));
if(num>=50)
  again=TRUE;
else
  again=FALSE;
}
}
【程式47】
題目：巨集#define命令練習(2)

程式分析：

程式原始碼：

#include "stdio.h"
#define exchange(a,b) { \ /*巨集定義中允許包含兩道衣裳命令的情形，此時必須在最右邊加上"\"*/
             int t;\
             t=a;\
             a=b;\
             b=t;\
            }
void main(void)
{
int x=10;
int y=20;
printf("x=%d; y=%d\n",x,y);
exchange(x,y);
printf("x=%d; y=%d\n",x,y);
}
【程式48】
題目：巨集#define命令練習(3)

程式分析：

程式原始碼：

#define LAG >
#define SMA <
#define EQ ==
#include "stdio.h"
void main()
{ int i=10;
int j=20;
if(i LAG j)
printf("\40: %d larger than %d \n",i,j);
else if(i EQ j)
printf("\40: %d equal to %d \n",i,j);
else if(i SMA j)
printf("\40:%d smaller than %d \n",i,j);
else
printf("\40: No such value.\n");
}
【程式49】
題目：#if #ifdef和#ifndef的綜合應用。

程式分析：

程式原始碼：

#include "stdio.h"
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
void main()
{ int a=10,b=20;
#ifdef MAX
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#else
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#else
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#endif
#undef MAX
#ifdef MAX
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#else
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#endif
#define MIN
#ifndef MIN
printf("\40: The lower one is %d\n",MINIMUM(a,b));
#else
printf("\40: The larger one is %d\n",MAXIMUM(a,b));
#endif
}
【程式50】
題目：#include 的應用練習

程式分析：

程式原始碼： test.h 檔案如下：

#define LAG >
#define SMA <
#define EQ ==
#include "test.h" /*一個新檔案50.c，包含test.h*/
#include "stdio.h"
void main()
{ int i=10;
int j=20;
if(i LAG j)
printf("\40: %d larger than %d \n",i,j);
else if(i EQ j)
printf("\40: %d equal to %d \n",i,j);
else if(i SMA j)
printf("\40:%d smaller than %d \n",i,j);
else
printf("\40: No such value.\n");
}
【程式51】
題目：學習使用按位與 & 。

程式分析：0&0=0; 0&1=0; 1&0=0; 1&1=1

程式原始碼：

#include "stdio.h"
main()
{
int a,b;
a=077;
b=a&3;
printf("\40: The a & b(decimal) is %d \n",b);
b&=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
【程式52】
題目：學習使用按位或 | 。

程式分析：0|0=0; 0|1=1; 1|0=1; 1|1=1

程式原始碼：

#include "stdio.h"
main()
{
int a,b;
a=077;
b=a|3;
printf("\40: The a & b(decimal) is %d \n",b);
b|=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
【程式53】
題目：學習使用按位異或 ^ 。

程式分析：0^0=0; 0^1=1; 1^0=1; 1^1=0

程式原始碼：

#include "stdio.h"
main()
{
int a,b;
a=077;
b=a^3;
printf("\40: The a & b(decimal) is %d \n",b);
b^=7;
printf("\40: The a & b(decimal) is %d \n",b);
}
【程式54】
題目：取一個整數a從右端開始的4～7位。

程式分析：可以這樣考慮：

先使a右移4位。

設定一個低4位全為1,其餘全為0的數。可用~(~0<<4)

將上面二者進行&運算。

程式原始碼：

main()
{
unsigned a,b,c,d;
scanf("%o",&a);
b=a>>4;
c=~(~0<<4);
d=b&c;
printf("%o\n%o\n",a,d);
}
【程式55】
題目：學習使用按位取反~。

程式分析：~0=1; ~1=0;

程式原始碼：

#include "stdio.h"
main()
{
int a,b;
a=234;
b=~a;
printf("\40: The a's 1 complement(decimal) is %d \n",b);
a=~a;
printf("\40: The a's 1 complement(hexidecimal) is %x \n",a);
} 
【程式56】
題目：畫圖，學用circle畫圓形。

程式分析：

程式原始碼：

/*circle*/
#include "graphics.h"
main()
{int driver,mode,i;
float j=1,k=1;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=0;i<=25;i++)
{
setcolor(8);
circle(310,250,k);
k=k+j;
j=j+0.3;
}
} 
【程式57】
題目：畫圖，學用line畫直線。

程式分析：

程式原始碼：

#include "graphics.h"
main()
{int driver,mode,i;
float x0,y0,y1,x1;
float j=12,k;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(GREEN);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
j=j+10;
}
x0=263;y1=275;y0=263;
for(i=0;i<=20;i++)
{
setcolor(5);
line(x0,y0,x0,y1);
x0=x0+5;
y0=y0+5;
y1=y1-5;
}
}
【程式58】
題目：畫圖，學用rectangle畫方形。

程式分析：利用for迴圈控制100-999個數，每個數分解出個位，十位，百位。

程式原始碼：

#include "graphics.h"
main()
{int x0,y0,y1,x1,driver,mode,i;
driver=VGA;mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
x0=263;y0=263;y1=275;x1=275;
for(i=0;i<=18;i++)
{
setcolor(1);
rectangle(x0,y0,x1,y1);
x0=x0-5;
y0=y0-5;
x1=x1+5;
y1=y1+5;
}
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(150,40,"How beautiful it is!");
line(130,60,480,60);
setcolor(2);
circle(269,269,137);
}
【程式59】
題目：畫圖，綜合例子。

程式分析：

程式原始碼：

# define PAI 3.1415926
# define B 0.809
# include "graphics.h"
#include "math.h"
main()
{
int i,j,k,x0,y0,x,y,driver,mode;
float a;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
x0=150;y0=100;
circle(x0,y0,10);
circle(x0,y0,20);
circle(x0,y0,50);
for(i=0;i<16;i++)
{
  a=(2*PAI/16)*i;
  x=ceil(x0+48*cos(a));
  y=ceil(y0+48*sin(a)*B);
  setcolor(2); line(x0,y0,x,y);}
setcolor(3);circle(x0,y0,60);
/* Make 0 time normal size letters */
settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
outtextxy(10,170,"press a key");
getch();
setfillstyle(HATCH_FILL,YELLOW);
floodfill(202,100,WHITE);
getch();
for(k=0;k<=500;k++)
{
  setcolor(3);
  for(i=0;i<=16;i++)
  {
   a=(2*PAI/16)*i+(2*PAI/180)*k;
   x=ceil(x0+48*cos(a));
   y=ceil(y0+48+sin(a)*B);
   setcolor(2); line(x0,y0,x,y);
  }
  for(j=1;j<=50;j++)
  {
   a=(2*PAI/16)*i+(2*PAI/180)*k-1;
   x=ceil(x0+48*cos(a));
   y=ceil(y0+48*sin(a)*B);
   line(x0,y0,x,y);
  }
}
restorecrtmode();
}
【程式60】 題目：畫圖，綜合例子。

程式分析：

程式原始碼：

#include "graphics.h"
#define LEFT 0
#define TOP 0
#define RIGHT 639
#define BOTTOM 479
#define LINES 400
#define MAXCOLOR 15
main()
{
int driver,mode,error;
int x1,y1;
int x2,y2;
int dx1,dy1,dx2,dy2,i=1;
int count=0;
int color=0;
driver=VGA;
mode=VGAHI;
initgraph(&driver,&mode,"");
x1=x2=y1=y2=10;
dx1=dy1=2;
dx2=dy2=3;
while(!kbhit())
{
  line(x1,y1,x2,y2);
  x1+=dx1;y1+=dy1;
  x2+=dx2;y2+dy2;
  if(x1<=LEFT||x1>=RIGHT)
  dx1=-dx1;
  if(y1<=TOP||y1>=BOTTOM)
   dy1=-dy1;
  if(x2<=LEFT||x2>=RIGHT)
   dx2=-dx2;
  if(y2<=TOP||y2>=BOTTOM)
   dy2=-dy2;
  if(++count>LINES)
  {
   setcolor(color);
   color=(color>=MAXCOLOR)?0:++color;
  }
}
closegraph();
}
【程式61】
題目：打印出楊輝三角形（要求打印出10行如下圖）

程式分析： 　　　 　　 1 　　　　　　 1 　1 　　　　　　 1 　2 　1 　　　　　　 1　 3 　3　 1 　　　　　　 1　 4　 6 　4 　1 　　　　　　 1　 5　 10　10　5 　1

程式原始碼：

main()
{int i,j;
int a[10][10];
printf("\n");
for(i=0;i<10;i++)
  {a[i][0]=1;
  a[i][i]=1;}
for(i=2;i<10;i++)
  for(j=1;j<i;j++)
  a[i][j]=a[i-1][j-1]+a[i-1][j];
for(i=0;i<10;i++)
  {for(j=0;j<=i;j++)
  printf("%5d",a[i][j]);
  printf("\n");
  }
}
【程式62】
題目：學習putpixel畫點。

程式分析：

程式原始碼：

#include "stdio.h"
#include "graphics.h"
main()
{
int i,j,driver=VGA,mode=VGAHI;
initgraph(&driver,&mode,"");
setbkcolor(YELLOW);
for(i=50;i<=230;i+=20)
  for(j=50;j<=230;j++)
  putpixel(i,j,1);
for(j=50;j<=230;j+=20)
  for(i=50;i<=230;i++)
  putpixel(i,j,1);
}
【程式63】
題目：畫橢圓ellipse

程式分析：

程式原始碼：

#include "stdio.h"
#include "graphics.h"
#include "conio.h"
main()
{
int x=360,y=160,driver=VGA,mode=VGAHI;
int num=20,i;
int top,bottom;
initgraph(&driver,&mode,"");
top=y-30;
bottom=y-30;
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,top,bottom);
top-=5;
bottom+=5;
}
getch();
}
【程式64】
題目：利用ellipse and rectangle 畫圖。

程式分析：

程式原始碼：

#include "stdio.h"
#include "graphics.h"
#include "conio.h"
main()
{
int driver=VGA,mode=VGAHI;
int i,num=15,top=50;
int left=20,right=50;
initgraph(&driver,&mode,"");
for(i=0;i<num;i++)
{
ellipse(250,250,0,360,right,left);
ellipse(250,250,0,360,20,top);
rectangle(20-2*i,20-2*i,10*(i+2),10*(i+2));
right+=5;
left+=5;
top+=10;
}
getch();
}
33 【程式65】 題目：一個最優美的圖案。

程式分析：

程式原始碼：

#include "graphics.h"
#include "math.h"
#include "dos.h"
#include "conio.h"
#include "stdlib.h"
#include "stdio.h"
#include "stdarg.h"
#define MAXPTS 15
#define PI 3.1415926
struct PTS {
int x,y;
};
double AspectRatio=0.85;
void LineToDemo(void)
{
struct viewporttype vp;
struct PTS points[MAXPTS];
int i, j, h, w, xcenter, ycenter;
int radius, angle, step;
double rads;
printf(" MoveTo / LineTo Demonstration" );
getviewsettings( &vp );
h = vp.bottom - vp.top;
w = vp.right - vp.left;
xcenter = w / 2; /* Determine the center of circle */
ycenter = h / 2;
radius = (h - 30) / (AspectRatio * 2);
step = 360 / MAXPTS; /* Determine # of increments */
angle = 0; /* Begin at zero degrees */
for( i=0 ; i<MAXPTS ; ++i ){ /* Determine circle intercepts */
rads = (double)angle * PI / 180.0; /* Convert angle to radians */
points[i].x = xcenter + (int)( cos(rads) * radius );
points[i].y = ycenter - (int)( sin(rads) * radius * AspectRatio );
angle += step; /* Move to next increment */
}
circle( xcenter, ycenter, radius ); /* Draw bounding circle */
for( i=0 ; i<MAXPTS ; ++i ){ /* Draw the cords to the circle */
for( j=i ; j<MAXPTS ; ++j ){ /* For each remaining intersect */
moveto(points[i].x, points[i].y); /* Move to beginning of cord */
lineto(points[j].x, points[j].y); /* Draw the cord */
} } }
main()
{int driver,mode;
driver=CGA;mode=CGAC0;
initgraph(&driver,&mode,"");
setcolor(3);
setbkcolor(GREEN);
LineToDemo();} 
【程式66】
題目：輸入3個數a,b,c，按大小順序輸出。

程式分析：利用指標方法。

程式原始碼：

/*pointer*/
main()
{
int n1,n2,n3;
int *pointer1,*pointer2,*pointer3;
printf("please input 3 number:n1,n2,n3:");
scanf("%d,%d,%d",&n1,&n2,&n3);
pointer1=&n1;
pointer2=&n2;
pointer3=&n3;
if(n1>n2) swap(pointer1,pointer2);
if(n1>n3) swap(pointer1,pointer3);
if(n2>n3) swap(pointer2,pointer3);
printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3);
}
swap(p1,p2)
int *p1,*p2;
{int p;
p=*p1;*p1=*p2;*p2=p;
}
【程式67】
題目：輸入陣列，最大的與第一個元素交換，最小的與最後一個元素交換，輸出陣列。

程式分析：譚浩強的書中答案有問題。

程式原始碼：

main()
{
int number[10];
input(number);
max_min(number);
output(number);
}
input(number)
int number[10];
{int i;
for(i=0;i<9;i++)
  scanf("%d,",&number[i]);
  scanf("%d",&number[9]);
}
max_min(array)
int array[10];
{int *max,*min,k,l;
int *p,*arr_end;
arr_end=array+10;
max=min=array;
for(p=array+1;p<arr_end;p++)
  if(*p>*max) max=p;
  else if(*p<*min) min=p;
  k=*max;
  l=*min;
  *p=array[0];array[0]=l;l=*p;
  *p=array[9];array[9]=k;k=*p;
  return;
}
output(array)
int array[10];
{ int *p;
for(p=array;p<array+9;p++)
  printf("%d,",*p);
printf("%d\n",array[9]);
}
【程式68】
題目：有n個整數，使其前面各數順序向後移m個位置，最後m個數變成最前面的m個數

程式分析：

程式原始碼：

main()
{
int number[20],n,m,i;
printf("the total numbers is:");
scanf("%d",&n);
printf("back m:");
scanf("%d",&m);
for(i=0;i<n-1;i++)
  scanf("%d,",&number[i]);
scanf("%d",&number[n-1]);
move(number,n,m);
for(i=0;i<n-1;i++)
  printf("%d,",number[i]);
printf("%d",number[n-1]);
}
move(array,n,m)
int n,m,array[20];
{
int *p,array_end;
array_end=*(array+n-1);
for(p=array+n-1;p>array;p--)
  *p=*(p-1);
  *array=array_end;
  m--;
  if(m>0) move(array,n,m);
}
【程式69】
題目：有n個人圍成一圈，順序排號。從第一個人開始報數（從1到3報數），凡報到3的人退出圈子，問最後留下的是原來第幾號的那位。

程式分析：

程式原始碼：

#define nmax 50
main()
{
int i,k,m,n,num[nmax],*p;
printf("please input the total of numbers:");
scanf("%d",&n);
p=num;
for(i=0;i<n;i++)
  *(p+i)=i+1;
  i=0;
  k=0;
  m=0;
  while(m<n-1)
  {
  if(*(p+i)!=0) k++;
  if(k==3)
  { *(p+i)=0;
  k=0;
  m++;
  }
i++;
if(i==n) i=0;
}
while(*p==0) p++;
printf("%d is left\n",*p);
}
【程式70】
題目：寫一個函式，求一個字串的長度，在main函式中輸入字串，並輸出其長度。

程式分析：

程式原始碼：

main()
{
int len;
char *str[20];
printf("please input a string:\n");
scanf("%s",str);
len=length(str);
printf("the string has %d characters.",len);
}
length(p)
char *p;
{
int n;
n=0;
while(*p!='\0')
{
  n++;
  p++;
}
return n;
}
【程式71】
題目：編寫input()和output()函式輸入，輸出5個學生的資料記錄。

程式分析：

程式原始碼：

#define N 5
struct student
{ char num[6];
  char name[8];
  int score[4];
} stu[N];
input(stu)
struct student stu[];
{ int i,j;
  for(i=0;i<N;i++)
  { printf("\n please input %d of %d\n",i+1,N);
   printf("num: ");
   scanf("%s",stu[i].num);
   printf("name: ");
   scanf("%s",stu[i].name);
    for(j=0;j<3;j++)
    { printf("score %d.",j+1);
     scanf("%d",&stu[i].score[j]);
    }
   printf("\n");
  }
}
print(stu)
struct student stu[];
{ int i,j;
printf("\nNo. Name Sco1 Sco2 Sco3\n");
for(i=0;i<N;i++)
{ printf("%-6s%-10s",stu[i].num,stu[i].name);
  for(j=0;j<3;j++)
   printf("%-8d",stu[i].score[j]);
  printf("\n");
}
}
main()
{
  input();
  print();
}
【程式72】
題目：建立一個連結串列。

程式分析：

程式原始碼：

/*creat a list*/
#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
struct list *next;
};
typedef struct list node;
typedef node *link;
void main()
{ link ptr,head;
int num,i;
ptr=(link)malloc(sizeof(node));
ptr=head;
printf("please input 5 numbers==>\n");
for(i=0;i<=4;i++)
{
  scanf("%d",&num);
  ptr->data=num;
  ptr->next=(link)malloc(sizeof(node));
  if(i==4) ptr->next=NULL;
  else ptr=ptr->next;
}
ptr=head;
while(ptr!=NULL)
{ printf("The value is ==>%d\n",ptr->data);
  ptr=ptr->next;
}
}
【程式73】
題目：反向輸出一個連結串列。

程式分析：

程式原始碼：

/*reverse output a list*/
#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
  struct list *next;
};
typedef struct list node;
typedef node *link;
void main()
{ link ptr,head,tail; 
  int num,i;
  tail=(link)malloc(sizeof(node));
  tail->next=NULL;
  ptr=tail;
  printf("\nplease input 5 data==>\n");
  for(i=0;i<=4;i++)
  {
   scanf("%d",&num);
   ptr->data=num;
   head=(link)malloc(sizeof(node));
   head->next=ptr;
   ptr=head;
  }
ptr=ptr->next;
while(ptr!=NULL)
{ printf("The value is ==>%d\n",ptr->data);
  ptr=ptr->next;
}}
【程式74】
題目：連線兩個連結串列。

程式分析：

程式原始碼：

#include "stdlib.h"
#include "stdio.h"
struct list
{ int data;
struct list *next;
};
typedef struct list node;
typedef node *link;
link delete_node(link pointer,link tmp)
{if (tmp==NULL) /*delete first node*/
  return pointer->next;
else
{ if(tmp->next->next==NULL)/*delete last node*/
   tmp->next=NULL;
  else /*delete the other node*/
   tmp->next=tmp->next->next;
  return pointer;
}
}
void selection_sort(link pointer,int num)
{ link tmp,btmp;
  int i,min;
  for(i=0;i<num;i++)
  {
  tmp=pointer;
  min=tmp->data;
  btmp=NULL;
  while(tmp->next)
  { if(min>tmp->next->data)
  {min=tmp->next->data;
   btmp=tmp;
  }
  tmp=tmp->next;
  }
printf("\40: %d\n",min);
pointer=delete_node(pointer,btmp);
}
}
link create_list(int array[],int num)
{ link tmp1,tmp2,pointer;
int i;
pointer=(link)malloc(sizeof(node));
pointer->data=array[0];
tmp1=pointer;
for(i=1;i<num;i++)
{ tmp2=(link)malloc(sizeof(node));
  tmp2->next=NULL;
  tmp2->data=array[i];
  tmp1->next=tmp2;
  tmp1=tmp1->next;
}
return pointer;
}
link concatenate(link pointer1,link pointer2)
{ link tmp;
tmp=pointer1;
while(tmp->next)
  tmp=tmp->next;
tmp->next=pointer2;
return pointer1;
}
void main(void)
{ int arr1[]={3,12,8,9,11};
  link ptr;
  ptr=create_list(arr1,5);
  selection_sort(ptr,5);
}
【程式75】
題目：放鬆一下，算一道簡單的題目。

程式分析：

程式原始碼：

main()
{
int i,n;
for(i=1;i<5;i++)
{ n=0;
  if(i!=1)
  n=n+1;
  if(i==3)
  n=n+1;
  if(i==4)
  n=n+1;
  if(i!=4)
  n=n+1;
  if(n==3)
   printf("zhu hao shi de shi:%c",64+i);
  }
}
【程式76】
題目：編寫一個函式，輸入n為偶數時，呼叫函式求1/2+1/4+...+1/n,當輸入n為奇數時，呼叫函式1/1+1/3+...+1/n(利用指標函式)

程式分析：

程式原始碼：

main()
#include "stdio.h"
main()
{
float peven(),podd(),dcall();
float sum;
int n;
while (1)
{
  scanf("%d",&n);
  if(n>1)
   break;
}
if(n%2==0)
{
  printf("Even=");
  sum=dcall(peven,n);
}
else
{
  printf("Odd=");
  sum=dcall(podd,n);
}
printf("%f",sum);
}
float peven(int n)
{
float s;
int i;
s=1;
for(i=2;i<=n;i+=2)
  s+=1/(float)i;
return(s);
}
float podd(n)
int n;
{
float s;
int i;
s=0;
for(i=1;i<=n;i+=2)
  s+=1/(float)i;
return(s);
}
float dcall(fp,n)
float (*fp)();
int n;
{
float s;
s=(*fp)(n);
return(s);
}
【程式77】
題目：填空練習（指向指標的指標）

程式分析：

程式原始碼：

main()
{ char *s[]={"man","woman","girl","boy","sister"};
char **q;
int k;
for(k=0;k<5;k++)
{       ;/*這裡填寫什麼語句*/
  printf("%s\n",*q);
}
}
【程式78】
題目：找到年齡最大的人，並輸出。請找出程式中有什麼問題。

程式分析：

程式原始碼：

#define N 4
#include "stdio.h"
static struct man
{ char name[20];
int age;
} person[N]={"li",18,"wang",19,"zhang",20,"sun",22};
main()
{struct man *q,*p;
int i,m=0;
p=person;
for (i=0;i<N;i++)
{if(m<p->age)
  q=p++;
  m=q->age;}
printf("%s,%d",(*q).name,(*q).age);
}
【程式79】
題目：字串排序。

程式分析：

程式原始碼：

main()
{
char *str1[20],*str2[20],*str3[20];
char swap();
printf("please input three strings\n");
scanf("%s",str1);
scanf("%s",str2);
scanf("%s",str3);
if(strcmp(str1,str2)>0) swap(str1,str2);
if(strcmp(str1,str3)>0) swap(str1,str3);
if(strcmp(str2,str3)>0) swap(str2,str3);
printf("after being sorted\n");
printf("%s\n%s\n%s\n",str1,str2,str3);
}
char swap(p1,p2)
char *p1,*p2;
{
char *p[20];
strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
}
【程式80】
題目：海灘上有一堆桃子，五隻猴子來分。第一隻猴子把這堆桃子憑據分為五份，多了一個，這隻猴子把多的一個扔入海中，拿走了一份。第二隻猴子把剩下的桃子又平均分成五份，又多了一個，它同樣把多的一個扔入海中，拿走了一份，第三、第四、第五隻猴子都是這樣做的，問海灘上原來最少有多少個桃子？

程式分析：

程式原始碼：

main()
{int i,m,j,k,count;
for(i=4;i<10000;i+=4)
{ count=0;
m=i;
for(k=0;k<5;k++)
{
  j=i/4*5+1;
  i=j;
  if(j%4==0)
   count++;
  else
   break;
}
  i=m;
  if(count==4)
  {printf("%d\n",count);
   break;}
}
}
【程式81】
題目：809*??=800*??+9*??+1 其中??代表的兩位數,8*??的結果為兩位數，9*??的結果為3位數。求??代表的兩位數，及809*??後的結果。

程式分析：

程式原始碼：

output(long b,long i)
{ printf("\n%ld/%ld=809*%ld+%ld",b,i,i,b%i);
}
main()
{long int a,b,i;
a=809;
for(i=10;i<100;i++)
{b=i*a+1;
if(b>=1000&&b<=10000&&8*i<100&&9*i>=100)
output(b,i); }
}
【程式82】
題目：八進位制轉換為十進位制

程式分析：

程式原始碼：

main()
{ char *p,s[6];int n;
p=s;
gets(p);
n=0;
while(*(p)!='\0')
{n=n*8+*p-'0';
p++;}
printf("%d",n);
}
【程式83】
題目：求0—7所能組成的奇數個數。

程式分析：

程式原始碼：

main()
{
long sum=4,s=4;
int j;
for(j=2;j<=8;j++)/*j is place of number*/
{ printf("\n%ld",sum);
if(j<=2)
s*=7;
else
s*=8;
sum+=s;}
printf("\nsum=%ld",sum);
}
【程式84】
題目：一個偶數總能表示為兩個素數之和。

程式分析：

程式原始碼：

#include "stdio.h"
#include "math.h"
main()
{ int a,b,c,d;
scanf("%d",&a);
for(b=3;b<=a/2;b+=2)
{ for(c=2;c<=sqrt(b);c++)
if(b%c==0) break;
if(c>sqrt(b))
d=a-b;
else
break;
for(c=2;c<=sqrt(d);c++)
if(d%c==0) break;
if(c>sqrt(d))
printf("%d=%d+%d\n",a,b,d);
}
}
【程式85】
題目：判斷一個素數能被幾個9整除

程式分析：

程式原始碼：

main()
{ long int m9=9,sum=9;
int zi,n1=1,c9=1;
scanf("%d",&zi);
while(n1!=0)
{ if(!(sum%zi))
n1=0;
else
{m9=m9*10;
sum=sum+m9;
c9++;
}
}
printf("%ld,can be divided by %d \"9\"",sum,c9);
}
【程式86】
題目：兩個字串連線程式

程式分析：

程式原始碼：

#include "stdio.h"
main()
{char a[]="acegikm";
char b[]="bdfhjlnpq";
char c[80],*p;
int i=0,j=0,k=0;
while(a[i]!='\0'&&b[j]!='\0')
{if (a[i]<b[j])
{ c[k]=a[i];i++;}
else
c[k]=b[j++];
k++;
}
c[k]='\0';
if(a[i]=='\0')
p=b+j;
else
p=a+i;
strcat(c,p);
puts(c);
}
【程式87】
題目：回答結果（結構體變數傳遞）

程式分析：

程式原始碼：

#include "stdio.h"
struct student
{ int x;
char c;
} a;
main()
{a.x=3;
a.c='a';
f(a);
printf("%d,%c",a.x,a.c);
}
f(struct student b)
{
b.x=20;
b.c='y';
}
【程式88】
題目：讀取7個數（1—50）的整數值，每讀取一個值，程式打印出該值個數的＊。

程式分析：

程式原始碼：

main()
{int i,a,n=1;
while(n<=7)
{ do {
    scanf("%d",&a);
    }while(a<1||a>50);
for(i=1;i<=a;i++)
  printf("*");
printf("\n");
n++;}
getch();
}
【程式89】
題目：某個公司採用公用電話傳遞資料，資料是四位的整數，在傳遞過程中是加密的，加密規則如下：每位數字都加上5,然後用和除以10的餘數代替該數字，再將第一位和第四位交換，第二位和第三位交換。

程式分析：

程式原始碼：

main()
{int a,i,aa[4],t;
scanf("%d",&a);
aa[0]=a%10;
aa[1]=a%100/10;
aa[2]=a%1000/100;
aa[3]=a/1000;
for(i=0;i<=3;i++)
  {aa[i]+=5;
  aa[i]%=10;
  }
for(i=0;i<=3/2;i++)
  {t=aa[i];
  aa[i]=aa[3-i];
  aa[3-i]=t;
  }
for(i=3;i>=0;i--)
printf("%d",aa[i]);
}
【程式90】
題目：專升本一題，讀結果。

程式分析：

程式原始碼：

#include "stdio.h"
#define M 5
main()
{int a[M]={1,2,3,4,5};
int i,j,t;
i=0;j=M-1;
while(i<j)  
{t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
i++;j--;
}
for(i=0;i<m;i++)  
printf("%d",*(a+i));
}
【程式91】
題目：時間函式舉例1

程式分析：

程式原始碼：

#include "stdio.h"
#include "time.h"
void main()
{ time_t lt; /*define a longint time varible*/
lt=time(NULL);/*system time and date*/
printf(ctime(<)); /*english format output*/
printf(asctime(localtime(<)));/*tranfer to tm*/
printf(asctime(gmtime(<))); /*tranfer to Greenwich time*/
}
【程式92】
題目：時間函式舉例2

程式分析：

程式原始碼：

/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ time_t start,end;
int i;
start=time(NULL);
for(i=0;i<3000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=time(NULL);
printf("\1: The different is %6.3f\n",difftime(end,start));
}
【程式93】
題目：時間函式舉例3

程式分析：

程式原始碼：

/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ clock_t start,end;
int i;
double var;
start=clock();
for(i=0;i<10000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=clock();
printf("\1: The different is %6.3f\n",(double)(end-start));
}
【程式94】
題目：時間函式舉例4,一個猜數遊戲，判斷一個人反應快慢。（版主初學時編的）

程式分析：

程式原始碼：

#include "time.h"
#include "stdlib.h"
#include "stdio.h"
main()
{char c;
clock_t start,end;
time_t a,b;
double var;
int i,guess;
srand(time(NULL));
printf("do you want to play it.('y' or 'n') \n");
loop:
while((c=getchar())=='y')
{
i=rand()%100;
printf("\nplease input number you guess:\n");
start=clock();
a=time(NULL);
scanf("%d",&guess);
while(guess!=i)
{if(guess>i)
{printf("please input a little smaller.\n");
scanf("%d",&guess);}
else
{printf("please input a little bigger.\n");
scanf("%d",&guess);}
}
end=clock();
b=time(NULL);
printf("\1: It took you %6.3f seconds\n",var=(double)(end-start)/18.2);
printf("\1: it took you %6.3f seconds\n\n",difftime(b,a));
if(var<15)
printf("\1\1 You are very clever! \1\1\n\n");
else if(var<25)
printf("\1\1 you are normal! \1\1\n\n");
else
printf("\1\1 you are stupid! \1\1\n\n");
printf("\1\1 Congradulations \1\1\n\n");
printf("The number you guess is %d",i);
}
printf("\ndo you want to try it again?(\"yy\".or.\"n\")\n");
if((c=getch())=='y')
goto loop;
}
【程式95】
題目：家庭財務管理小程式

程式分析：

程式原始碼：

/*money management system*/
#include "stdio.h"
#include "dos.h"
main()
{
FILE *fp;
struct date d;
float sum,chm=0.0;
int len,i,j=0;
int c;
char ch[4]="",ch1[16]="",chtime[12]="",chshop[16],chmoney[8];
pp: clrscr();
sum=0.0;
gotoxy(1,1);printf("|---------------------------------------------------------------------------|");
gotoxy(1,2);printf("| money management system(C1.0) 2000.03 |");
gotoxy(1,3);printf("|---------------------------------------------------------------------------|");
gotoxy(1,4);printf("| -- money records -- | -- today cost list -- |");
gotoxy(1,5);printf("| ------------------------ |-------------------------------------|");
gotoxy(1,6);printf("| date: -------------- | |");
gotoxy(1,7);printf("| | | | |");
gotoxy(1,8);printf("| -------------- | |");
gotoxy(1,9);printf("| thgs: ------------------ | |");
gotoxy(1,10);printf("| | | | |");
gotoxy(1,11);printf("| ------------------ | |");
gotoxy(1,12);printf("| cost: ---------- | |");
gotoxy(1,13);printf("| | | | |");
gotoxy(1,14);printf("| ---------- | |");
gotoxy(1,15);printf("| | |");
gotoxy(1,16);printf("| | |");
gotoxy(1,17);printf("| | |");
gotoxy(1,18);printf("| | |");
gotoxy(1,19);printf("| | |");
gotoxy(1,20);printf("| | |");
gotoxy(1,21);printf("| | |");
gotoxy(1,22);printf("| | |");
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
i=0;
getdate(&d);
sprintf(chtime,"%4d.%02d.%02d",d.da_year,d.da_mon,d.da_day);
for(;;)
{
gotoxy(3,24);printf(" Tab __browse cost list Esc __quit");
gotoxy(13,10);printf(" ");
gotoxy(13,13);printf(" ");
gotoxy(13,7);printf("%s",chtime);
j=18;
ch[0]=getch();
if(ch[0]==27)
break;
strcpy(chshop,"");
strcpy(chmoney,"");
if(ch[0]==9)
{
mm:i=0;
fp=fopen("home.dat","r+");
gotoxy(3,24);printf(" ");
gotoxy(6,4);printf(" list records ");
gotoxy(1,5);printf("|-------------------------------------|");
gotoxy(41,4);printf(" ");
gotoxy(41,5);printf(" |");
while(fscanf(fp,"%10s%14s%f\n",chtime,chshop,&chm)!=EOF)
{ if(i==36)
{ getch();
i=0;}
if ((i%36)<17)
{ gotoxy(4,6+i);
printf(" ");
gotoxy(4,6+i);}
else
if((i%36)>16)
{ gotoxy(41,4+i-17);
printf(" ");
gotoxy(42,4+i-17);}
i++;
sum=sum+chm;
printf("%10s %-14s %6.1f\n",chtime,chshop,chm);}
gotoxy(1,23);printf("|---------------------------------------------------------------------------|");
gotoxy(1,24);printf("| |");
gotoxy(1,25);printf("|---------------------------------------------------------------------------|");
gotoxy(10,24);printf("total is %8.1f$",sum);
fclose(fp);
gotoxy(49,24);printf("press any key to.....");getch();goto pp;
}
else
{
while(ch[0]!='\r')
{ if(j<10)
{ strncat(chtime,ch,1);
j++;}
if(ch[0]==8)
{
len=strlen(chtime)-1;
if(j>15)
{ len=len+1; j=11;}
strcpy(ch1,"");
j=j-2;
strncat(ch1,chtime,len);
strcpy(chtime,"");
strncat(chtime,ch1,len-1);
gotoxy(13,7);printf(" ");}
gotoxy(13,7);printf("%s",chtime);ch[0]=getch();
if(ch[0]==9)
goto mm;
if(ch[0]==27)
exit(1);
}
gotoxy(3,24);printf(" ");
gotoxy(13,10);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{ if (j<14)
{ strncat(chshop,ch,1);
j++;}
if(ch[0]==8)
{ len=strlen(chshop)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chshop,len);
strcpy(chshop,"");
strncat(chshop,ch1,len-1);
gotoxy(13,10);printf(" ");}
gotoxy(13,10);printf("%s",chshop);ch[0]=getch();}
gotoxy(13,13);
j=0;
ch[0]=getch();
while(ch[0]!='\r')
{ if (j<6)
{ strncat(chmoney,ch,1);
j++;}
if(ch[0]==8)
{ len=strlen(chmoney)-1;
strcpy(ch1,"");
j=j-2;
strncat(ch1,chmoney,len);
strcpy(chmoney,"");
strncat(chmoney,ch1,len-1);
gotoxy(13,13);printf(" ");}
gotoxy(13,13);printf("%s",chmoney);ch[0]=getch();}
if((strlen(chshop)==0)||(strlen(chmoney)==0))
continue;
if((fp=fopen("home.dat","a+"))!=NULL);
fprintf(fp,"%10s%14s%6s",chtime,chshop,chmoney);
fputc('\n',fp);
fclose(fp);
i++;
gotoxy(41,5+i);
printf("%10s %-14s %-6s",chtime,chshop,chmoney);
}}} 
【程式96】
題目：計算字串中子串出現的次數

程式分析：

程式原始碼：

#include "string.h"
#include "stdio.h"
main()
{ char str1[20],str2[20],*p1,*p2;
int sum=0;
printf("please input two strings\n");
scanf("%s%s",str1,str2);
p1=str1;p2=str2;
while(*p1!='\0')
{
if(*p1==*p2)
{while(*p1==*p2&&*p2!='\0')
{p1++;
p2++;}
}
else
p1++;
if(*p2=='\0')
sum++;
p2=str2;
}
printf("%d",sum);
getch();} 
【程式97】
題目：從鍵盤輸入一些字元，逐個把它們送到磁碟上去，直到輸入一個#為止。

程式分析：

程式原始碼：

#include "stdio.h"
main()
{ FILE *fp;
char ch,filename[10];
scanf("%s",filename);
if((fp=fopen(filename,"w"))==NULL)
{printf("cannot open file\n");
exit(0);}
ch=getchar();
ch=getchar();
while(ch!='#')
{fputc(ch,fp);putchar(ch);
ch=getchar();
}
fclose(fp);
}
【程式98】
題目：從鍵盤輸入一個字串，將小寫字母全部轉換成大寫字母，然後輸出到一個磁碟檔案“test”中儲存。

輸入的字串以！結束。

程式分析：

程式原始碼：

#include "stdio.h"
main()
{FILE *fp;
char str[100],filename[10];
int i=0;
if((fp=fopen("test","w"))==NULL)
{ printf("cannot open the file\n");
exit(0);}
printf("please input a string:\n");
gets(str);
while(str[i]!='!')
{ if(str[i]>='a'&&str[i]<='z')
str[i]=str[i]-32;
fputc(str[i],fp);
i++;}
fclose(fp);
fp=fopen("test","r");
fgets(str,strlen(str)+1,fp);
printf("%s\n",str);
fclose(fp);
}
【程式99】
題目：有兩個磁碟檔案A和B,各存放一行字母，要求把這兩個檔案中的資訊合併（按字母順序排列），輸出到一個新檔案C中。

程式分析：

程式原始碼：

#include "stdio.h"
main()
{ FILE *fp;
int i,j,n,ni;
char c[160],t,ch;
if((fp=fopen("A","r"))==NULL)
{printf("file A cannot be opened\n");
exit(0);}
printf("\n A contents are :\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
ni=i;
if((fp=fopen("B","r"))==NULL)
{printf("file B cannot be opened\n");
exit(0);}
printf("\n B contents are :\n");
for(i=0;(ch=fgetc(fp))!=EOF;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
n=i;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(c[i]>c[j])
{t=c[i];c[i]=c[j];c[j]=t;}
printf("\n C file is:\n");
fp=fopen("C","w");
for(i=0;i<n;i++)
{ putc(c[i],fp);
putchar(c[i]);
}
fclose(fp);
}
【程式100】
題目：有五個學生，每個學生有3門課的成績，從鍵盤輸入以上資料（包括學生號，姓名，三門課成績），計算出平均成績，況原有的資料和計算出的平均分數存放在磁碟檔案"stud"中。

程式分析：

程式原始碼：

#include "stdio.h"
struct student
{ char num[6];
char name[8];
int score[3];
float avr;
} stu[5];
main()
{int i,j,sum;
FILE *fp;
/*input*/
for(i=0;i<5;i++)
{ printf("\n please input No. %d score:\n",i);
printf("stuNo:");
scanf("%s",stu[i].num);
printf("name:");
scanf("%s",stu[i].name);
sum=0;
for(j=0;j<3;j++)
{ printf("score %d.",j+1);
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