/*This is a program which displays a menu consisting of 4 games:
1.Hangman 
2.Number Puzzle 
3.Connect4 
4.Tic-Tac-Toe
and executes the required game according to users wish*/

#include<iostream>
#include"conio.h"
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cstdlib>
//#include<dos.h>
using namespace std;
//functions for hangman
const int max_const=6;
int wg=0;
void drawh()
{
	clrscr();
	cleardevice();
	setcolor(1);
	switch(wg)
 	{
 		case 6:
			circle(500,100,20);
			line(490,90,495,100);
			line(490,100,495,90);
			line(505,90,510,100);
			line(505,100,510,90);
			line(490,105,510,105);
			arc(505, 105,180,360, 5);
  		case 5:
 			line(500,120,500,180);
  		case 4:
 			line(500,150,450,125);
  		case 3:
 			line(500,150,550,125);
  		case 2:
 			line(500,180,450,200);
  		case 1:
 			line(500,180,550,200);
  		break;
  	}

}

int fill(char a,char use[],char str[])
{
 int st=0,i;
 for(i=0;i<strlen(str);i++) {
  	if(str[i]==a)
  		st=1;
}
 if(st==1){
  for(i=0;i<strlen(str);i++)
  {
   if(str[i]==a)
   use[i]=a;
  }
  if(strcmp(use,str)==0)
  return 3;
  else
  return 1;
 }else
 	return 0;
}

void hangman(){
	clrscr();
	cleardevice();
	// 	randomize(); turbo C use this 
    srand(3);

	int len,t,i,choice;
	char guessword[100],o,used[100],xword[100],b,userguess[100];
	char words[10][20]={"india","australia","england","germany","france","usa","russia"};
	t=random();
	strcpy(guessword,words[t]);
	len=strlen(guessword);
	for(int i=0; i<len;i++)
		used[i]='%';
	cout<<"\n\n\n\n Welcome to Hangman!";
	cout<<"\n\n Rules:\n 1.Each letter is shown by a dash '_'.\n 2.You have maximum of six tries for any word.";
	cout<<"\n";
	label1:
	cout<<"Press 's' to start or 'x' to exit : ";
	cin>>o;
	if(o=='x')
		exit(0);
	else if(o!='s'){
 		cout<<"Wrong choice! \n";
 		goto label1;
	}else{	
		clrscr();
		cleardevice();
		label2:
		for(i=0;i<len;i++){
			if(used[i]=='%')
				cout<<"  __  ";
			else
				cout<<used[i]<<" ";
		}
		cout<<"\n\n\n";
 		if(wg==max_const){
			cout<<"\n Better luck next time!"<<endl;
			cout<<"\n The word was:"<<guessword;
		}else{
			cout<<"1. Guess the word\n2. Guess a letter\n3.Exit\nEnter your choice: ";
			cin>>choice;
			if(choice==3)
				exit(0);
			else if(choice==1){
 				cout<<"Enter the guessed word: ";
 				cin>>userguess;
 				if(strcmp(userguess,guessword)==0)
 					cout<<"\n Congrats! \n You have found the word!"<<endl;
 				else{
					wg+=1;
  					drawh();
  					cout<<"Wrong Guess!!\n";
  					cout<<"\n You have"<<(max_const-wg)<<"tries left!"<<endl;
  					goto label2;
 				}
			}else if(choice==2){
				cout<<"\n Enter a letter : ";
				cin>>b;
			if(fill(b,used,guessword)==2){
				drawh();
  				cout<<"\n Letter already used!"<<endl;
  				goto label2;
 			}else if(fill(b,used,guessword)==1){
				drawh();
				cout<<"\n Correct guess!"<<endl;
				goto label2;
			}else if(fill(b,used,guessword)==0){
				wg+=1;
				drawh();
				cout<<"\n Wrong guess!"<<endl;
				cout<<"\n You have "<<-wg<<" tries left!"<<endl;
				goto label2;
			}else if(fill(b,used,guessword)==3){
 				drawh();
 				cout<<"\n Congrats! \n You have found the word! The word is "<<guessword<<endl;
			}
		}
	}
}

}

//functions for Number Puzzle
int a[4][4],i,j,b[4][4];
char c;
void output(int a[4][4])
{
// OUTPUT FUNCTION
for(i=0;i<4;i++)
{  setbkcolor(7);
setcolor(1);
line(130,50,400,50);
line(130,120,400,120);
line(130,190,400,190);
line(130,260,400,260);
line(130,340,400,340);
line(130,50,130,340);
line(200,50,200,340);
line(270,50,270,340);
line(340,50,340,340);
line(400,50,400,340);
cout<<endl<<"\n\n\n\t\t";
for(j=0;j<4;j++)
{
if(a[i][j]==-1)
cout<<"        ";//FOR OUTPUTING THE ARRAY WITH SPACE
else
cout<<"   "<<a[i][j]<<"   ";
}
cout<<"\n\t\t";
}
return;
}
//THE RESPECTIVE DIRECTIONS FUNCTIONS LEFT RIGHT UP DOWN
void down(int a[4][4])
{
int i,j,temp;
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]==-1)
{
temp=a[i][j];
a[i][j]=a[i-1][j];
a[i-1][j]=temp;
}
}
}
output(a);
return;
}
void up(int a[4][4])
{
int i,j,temp;
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]==-1)
{
temp=a[i][j];
a[i][j]=a[i+1][j];
a[i+1][j]=temp;
i+=20;j+=20;
}
}
}
output(a);
}
void right(int a[4][4])
{
int i,j,temp;
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]==-1)
{
temp=a[i][j];
a[i][j]=a[i][j-1];
a[i][j-1]=temp;
}
}
}
output(a);
return;
}
void left(int a[4][4])
{
int i,j,temp;
clrscr();
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(a[i][j]==-1)
{
temp=a[i][j];
a[i][j]=a[i][j+1];
a[i][j+1]=temp;
i+=20;j+=20;
}
}
}
output(a);
return;
}
void input(int a[4][4])
{//INPUT FUNCTION
char h;
cin>>h;
if(tolower(h)=='a')
left(a);
if(tolower(h)=='s')
down(a);
if(tolower(h)=='w')
up(a);
if(tolower(h)=='d')
right(a);
if(tolower(h)=='k')
exit(0);
return;
}
void numberpuzzle()
{
clrscr();

int a[4][4],i,j,b[4][4],st1=0,st2=0,st3=0,st4=0,st5=0,st6=0,st7=0,st8=0,st9=0,st10=0,st11=0,st12=0,st13=0,st14=0,st15=0,st16=0,y=10;
char c,A;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
a[i][j]=0;
}
//INITIAL SHUFFLE
a[0][0]=13;a[0][1]=10;a[0][2]=14;a[0][3]=11;a[1][0]=12;a[1][1]=16;a[1][2]=15;a[1][3]=21;a[2][0]=18;a[2][1]=23;a[2][2]=20;a[2][3]=17;a[3][0]=-1;a[3][1]=22;a[3][2]=19;a[3][3]=24;
setbkcolor(7);
setcolor(1);
//INSTRUCTIONS
cout<<"\n\n Welcome to number puzzle!!\n Rules\n 1. Press W,A,S,D for up, left, down, right respectively"<<"\n 2. Complete the puzzle in numbers arranged in sequential order"<<"\n 3. In case of illegal moves,for example,if left(A) key is pressed although no   number can be moved left,you loose the game. Press 'k'to exit "<<"\n Press A,S,D or W and enter to start ";

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
b[i][j]=y;
y++;
}
}
b[3][3]=-1;
while(1)
{
input(a);
//ALL THE STATUS FOR CHEKING TILL GAME FINISHED
if(a[0][0]==10)
{
st1=1;
}
else
st1=0;
if(a[0][1]==11)
{
st2=1;
}
else
st2=0;
if(a[0][2]==12)
{
st3=1;
}
else
st3=0;
if(a[0][3]==13)
{
st4=1;
}
else
st4=0;
if(a[1][0]==14)
{
st5=1;
}
else
st5=0;
if(a[1][1]==15)
{
st6=1;
}
else
st6=0;
if(a[1][2]==16)
{
st7=1;
}
else
st7=0;
if(a[1][3]==17)
{
st8=1;
}
else
st8=0;
if(a[2][0]==18)
{
st9=1;
}
else
st9=0;
if(a[2][1]==19)
{
st10=1;
}
else
st10=0;
if(a[2][2]==20)
{
st11=1;
}
else
st11=0;
if(a[2][3]==21)
{
st12=1;
}
else
st12=0;
if(a[3][0]==22)
{
st13=1;
}
else
st13=0;
if(a[3][1]==23)
{
st14=1;
}
else
st14=0;
if(a[3][2]==24)
{
st15=1;
}
else
st15=0;
if(a[3][3]==-1)
{
st16=1;
}
else
st16=0;
if(st1+st2+st3+st4+st5+st6+st7+st8+st9+st10+st11+st12+st13+st14+st15+st16==16)
{
cout<<"\n\n\n WELL DONE GAME SOLVED!!!"<<"\n YOU ARE BRILLIANT";
delay(1600);
exit(0);
}
}
}
//functions for connect 4
int ct=0;
void drawc(char game[5][10])
{
 clrscr();
 cleardevice();
 setlinestyle(9,0,1); // settextstyle
 setbkcolor(9);
 setcolor(1);
 outtextxy(250,5,"Connect  4");
 setlinestyle(3,0,1);
 outtextxy(20,120,"   1     2     3     4      5     6     7     8      9    10");
 setcolor(3);
 setlinestyle(1,1,1);
 bar(20,150,620,450);
 bar(20,450,30,470);
 bar(10,465,40,470);
 bar(610,450,620,470);
 bar(600,465,630,470);
 for(int i=0;i<5;i++)
 for(int j=0;j<10;j++)
 {
  if(game[i][j]=='x')
  {
   setcolor(9);
   setlinestyle(1,9,1);
  }
  else if(game[i][j]=='r')
  {
   setcolor(4);
   setlinestyle(1,4,1);
  }
  else if(game[i][j]=='y')
  {
   setcolor(14);
   setlinestyle(1,14,1);
  }
  pieslice(50+(j*60),180+(i*60),0,360,20);
 }
}
void connectfour()
{
int choice,a=0,r=0,y=0;
char game[5][10];
for(int i=0;i<5;i++)
for(int j=0;j<10;j++)
game[i][j]='x';        //to identify the non filled spaces
clrscr();
label2:
drawc(game);
cout<<"\n\n\n\n\tPlayer ";
if(ct%2==0)
cout<<"1: \n";
else
cout<<"2: \n";
label1:
cout<<"\tEnter 0 to exit or enter the place to drop the coin: ";
cin>>choice;
if(choice==0)
exit(0);
else if(choice<0||choice>10)
{
 drawc(game);
 cout<<"\n\n\n\n\tWrong choice\n";
 goto label1;
}
else
{
 for(i=4;i>=0;i--)
 if(game[i][choice-1]=='x')
 {
  a=1;
  break;
 }
 if(a)
 {
  if(ct%2==0)
  game[i][choice-1]='r';
  else
  game[i][choice-1]='y';

 }
 else
 {
  drawc(game);
  cout<<"\n\n\n\n\tThe column is occupied fully\n";
  goto label1;
 }
 for(i=0;i<10;i++)
{
 if(((game[0][i]=='r')&&(game[1][i]=='r')&&(game[2][i]=='r')&&(game[3][i]=='r'))||((game[4][i]=='r')&&(game[1][i]=='r')&&(game[2][i]=='r')&&(game[3][i]=='r')))
 {
  r=1;
  break;
 }
 else if(((game[0][i]=='y')&&(game[1][i]=='y')&&(game[2][i]=='y')&&(game[3][i]=='y'))||((game[4][i]=='y')&&(game[1][i]=='y')&&(game[2][i]=='y')&&(game[3][i]=='y')))
 {
  y=1;
  break;
 }
}
if(!r)
{
 for(i=0;i<5;i++)
 if(((game[i][0]=='r')&&(game[i][1]=='r')&&(game[i][2]=='r')&&(game[i][3]=='r'))||((game[i][4]=='r')&&(game[i][1]=='r')&&(game[i][2]=='r')&&(game[i][3]=='r'))||((game[i][4]=='r')&&(game[i][5]=='r')&&(game[i][2]=='r')&&(game[i][3]=='r'))||((game[i][4]=='r')&&(game[i][5]=='r')&&(game[i][6]=='r')&&(game[i][3]=='r'))||((game[i][4]=='r')&&(game[i][5]=='r')&&(game[i][6]=='r')&&(game[i][7]=='r'))||((game[i][8]=='r')&&(game[i][5]=='r')&&(game[i][6]=='r')&&(game[i][7]=='r'))||((game[i][8]=='r')&&(game[i][6]=='r')&&(game[i][6]=='r')&&(game[i][7]=='r')))
 {
 r=1;
 break;
 }
}
if(!y)
{
 for(i=0;i<5;i++)
 if(((game[i][0]=='y')&&(game[i][1]=='y')&&(game[i][2]=='y')&&(game[i][3]=='y'))||((game[i][4]=='y')&&(game[i][1]=='y')&&(game[i][2]=='y')&&(game[i][3]=='y'))||((game[i][4]=='y')&&(game[i][5]=='y')&&(game[i][2]=='y')&&(game[i][3]=='y'))||((game[i][4]=='y')&&(game[i][5]=='y')&&(game[i][6]=='y')&&(game[i][3]=='y'))||((game[i][4]=='y')&&(game[i][5]=='y')&&(game[i][6]=='y')&&(game[i][7]=='y'))||((game[i][8]=='y')&&(game[i][5]=='y')&&(game[i][6]=='y')&&(game[i][7]=='y'))||((game[i][8]=='y')&&(game[i][6]=='y')&&(game[i][6]=='y')&&(game[i][7]=='y')))
 {
 y=1;
 break;
 }
}
if(!r)
{
 if(((game[1][0]=='r')&&(game[2][1]=='r')&&(game[3][2]=='r')&&(game[4][3]=='r'))||((game[0][6]=='r')&&(game[1][7]=='r')&&(game[2][8]=='r')&&(game[3][9]=='r')))
 {
  r=1;
 }
 else
 {
  for(i=0;i<6;i++)
  if(((game[0][i]=='r')&&(game[1][i+1]=='r')&&(game[2][i+2]=='r')&&(game[3][i+3]=='r'))||((game[4][i+4]=='r')&&(game[1][i+1]=='r')&&(game[2][i+2]=='r')&&(game[3][i+3]=='r')))
  {
  r=1;
  break;
  }
 }
}
if(!y)
{
 if(((game[1][0]=='y')&&(game[2][1]=='y')&&(game[3][2]=='y')&&(game[4][3]=='y'))||((game[0][6]=='y')&&(game[1][7]=='y')&&(game[2][8]=='y')&&(game[3][9]=='y')))
 {
  y=1;
 }
 else
 {
  for(i=0;i<6;i++)
  if(((game[0][i]=='y')&&(game[1][i+1]=='y')&&(game[2][i+2]=='y')&&(game[3][i+3]=='y'))||((game[4][i+4]=='y')&&(game[1][i+1]=='y')&&(game[2][i+2]=='y')&&(game[3][i+3]=='y')))
  {
  y=1;
  break;
  }
 }
}
if(!r)
{
 if(((game[3][0]=='r')&&(game[2][1]=='r')&&(game[1][2]=='r')&&(game[0][3]=='r'))||((game[4][6]=='r')&&(game[3][7]=='r')&&(game[2][8]=='r')&&(game[1][9]=='r')))
 {
  r=1;
 }
 else
 {
  for(i=0;i<6;i++)
  if(((game[4][i]=='r')&&(game[3][i+1]=='r')&&(game[2][i+2]=='r')&&(game[1][i+3]=='r'))||((game[3][i]=='r')&&(game[2][i+1]=='r')&&(game[1][i+2]=='r')&&(game[0][i+3]=='r')))
  {
  r=1;
  break;
  }
 }
}
if(!y)
{
 if(((game[3][0]=='y')&&(game[2][1]=='y')&&(game[1][2]=='y')&&(game[0][3]=='y'))||((game[4][6]=='y')&&(game[3][7]=='y')&&(game[2][8]=='y')&&(game[1][9]=='y')))
 {
  y=1;
 }
 else
 {
  for(i=0;i<6;i++)
  if(((game[4][i]=='y')&&(game[3][i+1]=='y')&&(game[2][i+2]=='y')&&(game[1][i+3]=='y'))||((game[3][i]=='y')&&(game[2][i+1]=='y')&&(game[1][i+2]=='y')&&(game[0][i+3]=='y')))
  {
  y=1;
  break;
  }
 }
}

if(r)
{
 drawc(game);
 cout<<"\n\n\n\n\t\t\t Player 1 wins!!";
}
else if(y)
{
 drawc(game);
 cout<<"\n\n\n\n\t\t\t Player 2 wins!!";
}
else
{
 ct++;
 goto label2;
}
}
}
//functions for tic-tac-toe

int count=0;        //increases on every turn ( helps us to find whose turn )

void draw(char a[]) //draws the checkerboard and 'x's and 'o's on every turn
{
	clrscr();
	cleardevice();
	setcolor(1);
	cout<<"                         TIC-TAC-TOE\n\n\n\n             1            2           3\n\n\n\n\n";
	cout<<"\n             4            5           6\n\n\n\n\n";
	cout<<"\n             7            8           9\n\n\n\n\n\n";

	line(100,50,100,350);
	line(100,50,400,50);
	line(400,50,400,350);
	line(400,350,100,350);
	line(200,50,200,350);
	line(300,50,300,350);
	line(100,150,400,150);
	line(100,250,400,250);

	if(a[0]=='x')
	{
		line(130,80,170,120);
		line(130,120,170,80);
	}
	else if(a[0]=='o')
		circle(150,100,20);

	if(a[1]=='x')
	{
		line(230,80,270,120);
		line(230,120,270,80);
	}
	else if(a[1]=='o')
		circle(250,100,20);

	if(a[2]=='x')
	{
		line(330,80,370,120);
		line(330,120,370,80);
	}
	else if(a[2]=='o')
		circle(350,100,20);

	if(a[3]=='x')
	{
		line(130,180,170,220);
		line(130,220,170,180);
	}
	else if(a[3]=='o')
		circle(150,200,20);

	if(a[4]=='x')
	{
		line(230,180,270,220);
		line(230,220,270,180);
	}
	else if(a[4]=='o')
		circle(250,200,20);

	if(a[5]=='x')
	{
		line(330,180,370,220);
		line(330,220,370,180);
	}
	else if(a[5]=='o')
		circle(350,200,20);

	if(a[6]=='x')
	{
		line(130,280,170,320);
		line(130,320,170,280);
	}
	else if(a[6]=='o')
		circle(150,300,20);

	if(a[7]=='x')
	{
		line(230,280,270,320);
		line(230,320,270,280);
	}
	else if(a[7]=='o')
		circle(250,300,20);

	if(a[8]=='x')
	{
		line(330,280,370,320);
		line(330,320,370,280);
	}
	else if(a[8]=='o')
		circle(350,300,20);
}
void tictactoe()
{
int a=200,temp=0;
char g[9];
for(int i=0;i<9;i++)
g[i]='a';
label1:
draw(g);
//_setcursortype(_NORMALCURSOR);
if(count%2==0)
cout<<"           Player 1: \n";
else
cout<<"           Player 2: \n";
cout<<"\n           Enter 0 to exit or Enter the place to drop ";
if(count%2==0)
cout<<"x:  ";
else
cout<<"o:  ";
cin>>a;
if(a==0)
exit(0);
else
{
if(count%2==0&&g[a-1]=='a')
g[a-1]='x';
else if(count%2!=0&&g[a-1]=='a')
g[a-1]='o';
else
goto label1;
}
if((g[0]=='x'&&g[3]=='x'&&g[6]=='x')||(g[1]=='x'&&g[4]=='x'&&g[7]=='x')||(g[2]=='x'&&g[5]=='x'&&g[8]=='x')||(g[0]=='x'&&g[1]=='x'&&g[2]=='x')||(g[3]=='x'&&g[4]=='x'&&g[5]=='x')||(g[6]=='x'&&g[7]=='x'&&g[8]=='x')||(g[0]=='x'&&g[4]=='x'&&g[8]=='x')||(g[2]=='x'&&g[4]=='x'&&g[6]=='x'))
{
draw(g);
cout<<"\n\n                X Wins!! Congradulations !!";
temp=1;
}
else if((g[0]=='o'&&g[3]=='o'&&g[6]=='o')||(g[1]=='o'&&g[4]=='o'&&g[7]=='o')||(g[2]=='o'&&g[5]=='o'&&g[8]=='o')||(g[0]=='o'&&g[1]=='o'&&g[2]=='o')||(g[3]=='o'&&g[4]=='o'&&g[5]=='o')||(g[6]=='o'&&g[7]=='o'&&g[8]=='o')||(g[0]=='o'&&g[4]=='o'&&g[8]=='o')||(g[2]=='o'&&g[4]=='o'&&g[6]=='o'))
{
draw(g);
cout<<"\n\n                O Wins!! Congradulations !!";
temp=1;
}
else
{
count+=1;
goto label1;
}
if(g[0]!='a'&&g[1]!='a'&&g[2]!='a'&&g[3]!='a'&&g[4]!='a'&&g[5]!='a'&&g[6]!='a'&&g[7]!='a'&&g[8]!='a'&&temp!=1)
cout<<"\n\n              The match is draw!!!";

}

int main()
{
	clrscr();
	int gd=DETECT,gm,c;
	initgraph(&gd,&gm,".");
	setbkcolor(3);
	setlinestyle(10,0,1);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                         ";
	outtextxy(30,0,"Welcome!");
	outtextxy(30,30,"Which game do you want to play?");
	outtextxy(30,60,"1. Hangman");
	outtextxy(30,90,"2. Number Puzzle");
	outtextxy(30,120,"3. Connect 4");
	outtextxy(30,150,"4. Tic-Tac-Toe ");
	outtextxy(30,180,"5. Exit ");
	outtextxy(30,220,"Enter your choice: ");
	cin>>c;
	if(c==1)
	hangman();
	else if(c==2)
	numberpuzzle();
	else if(c==3)
	connectfour();
	else if(c==4)
	tictactoe();
	else if(c==5)
	exit(0);
	getch();
	return 0;
}