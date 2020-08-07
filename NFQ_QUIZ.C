#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>

void logo();
void design1();



void main()
{
int gd=DETECT,gm;
int ans[10];
char name[50], city[50];
int i,j,a[10],r[10],w,temp=0,choise;
long double mno;
ans[1]=0;ans[2]=0;
clrscr();
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");

logo();
cleardevice();
printf("Do you want to play the game ?\n1. Play\n2. Exit\n-->");
scanf("%d",&choise);

if(choise==1)
{
  cleardevice();
  printf("Enter your Name: ");
  getchar();
  gets(name);
  printf("Enter your city: ");
  gets(city);
  printf("\nPress Enter to view rules...\n");
  getch();

settextstyle(3,0,4);
outtextxy(1,130, "Rules");
    printf("\n\n\n");
    printf("The Game rules are very simple\n");
    printf("1.)The Game consists of 12 questions.\n");
    printf("2.)For each correct answer, player will get 1 point\n");
    printf("3.)For each incorrect answer, player will get 0 point\n");
    printf("4.)Player will be given 30 seconds to answer the question\n");
    printf("5.)If player fails to give answer in 30 sec., player will get 0 point\n");
    printf("6.)Use the keyboards for selecting the options\ni.e. 'a' for option A, 'b' for option B and so on for C & D also\n");
    printf("\n\nPress Enter to Start...");
    getch();
  x:
  cleardevice();
  srand((unsigned) time(NULL));
for(i=0;i<=9;i++)
	{
	 temp=rand()%10+1;
	 for(j=0;j<=i-1;j++)
		{
		if(temp==r[j])
			{
			break;
			}
		}
	if(i==j)
		{
		r[i]=temp;
		}
	else
		i--;
	}

     for(i=1;i<=10;i++)
{
switch(r[i])
{
case 1: set1(name,city,mno);
break;
case 2: set2(name,city,mno);
break;
case 3: set3(name,city,mno);
break;

default : printf("Server Failure... Try Again");
	goto x;
}
break;
}
}
else
{
 exit(1);
}



getch();
closegraph();
}
/////////////////////starting//////////////////////////////
int startloading()
{
   cleardevice();
   settextstyle(2,0,9);
    outtextxy(130,150,"Starting the Quiz...");
    return 0;
}

///////////////////////////////loading///////////////////////////////////////
int loading()
{
   cleardevice();
   settextstyle(2,0,9);
    outtextxy(130,150,"Loading Next Question...");
    return 0;
}

//////////////////////////////loadResult////////////////////////////////
int loadResult()
{
   cleardevice();
   settextstyle(2,0,9);
    outtextxy(130,150,"Loading Result...");
    return 0;
}
////////////////////////////////////////////////////////////////
int q11set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q11.What is Norton ? ");

settextstyle(8,0,1);
outtextxy(25,335, "A.AntiVirus");
settextstyle(8,0,1);
outtextxy(330,335, "B.Vaccine");
settextstyle(8,0,1);
outtextxy(25,385, "C.Program");
settextstyle(8,0,1);
outtextxy(330,385, "D.Network");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
///////////////////////////////set4q2///////////////////////////////////////
int q12set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q12.What is 'Param Shivay' ?");

settextstyle(8,0,1);
outtextxy(25,335, "A.Super Computer");
settextstyle(8,0,1);
outtextxy(330,335, "B.Submarine");
settextstyle(8,0,1);
outtextxy(25,385, "C.Feature Film");
settextstyle(8,0,1);
outtextxy(330,385, "D.Military Missile");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
/////////////////////////////////q6set4////////////////////////////
int q11set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q11.Which is the smallest & fastest ");
outtextxy(100,230, "memory in computer ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.RAM");
settextstyle(8,0,1);
outtextxy(330,335, "B.ROM");
settextstyle(8,0,1);
outtextxy(25,385, "C.Cache");
settextstyle(8,0,1);
outtextxy(330,385, "D.Hard Drive");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
//////////////////////////////////set4q7/////////////////////////////////////
int q12set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q12.West Indies won its 1st Test  ");
outtextxy(100,230, "series against England in... ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.1930");
settextstyle(8,0,1);
outtextxy(330,335, "B.1949");
settextstyle(8,0,1);
outtextxy(25,385, "C.1950");
settextstyle(8,0,1);
outtextxy(330,385, "D.1960");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
/////////////////////////////////set3//////////////////////////////////////////
int set3(char name[],char city[])
{
int ans[12],points;
int per;
ans[1]=0;ans[2]=0;ans[3]=0;ans[4]=0;ans[5]=0;ans[6]=0;ans[7]=0;ans[8]=0;ans[9]=0;ans[10]=0;ans[11]=0;ans[12]=0;
startloading();
delay(2000);
cleardevice();
design1();
ans[1]=q1set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[2]=q2set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[3]=q3set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[4]=q4set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[5]=q5set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[6]=q6set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[7]=q7set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[8]=q8set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[9]=q9set3();
delay(1000);
cleardevice();
loading();
delay(1000);


cleardevice();
design1();
ans[10]=q10set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[11]=q11set3();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[12]=q12set3();
delay(1000);
cleardevice();
loading();
delay(1000);



cleardevice();

points=(ans[1]+ans[2]+ans[3]+ans[4]+ans[5]+ans[6]+ans[7]+ans[8]+ans[9]+ans[10]+ans[11]+ans[12]);
settextstyle(8,0,9);
outtextxy(1,1, "Result");
printf("Player Name: %s\t",name);
printf("From: %s\n",city);
printf("Player Points: %d\n",points);
getch();
cleardevice();
settextstyle(8,0,7);
outtextxy(100,100, "Thank You");

settextstyle(8,0,7);
outtextxy(100,150, "For Playing");

return 0;
}

///////////////////////////////set1////////////////////////////////////
int set1(char name[],char city[])
{
int ans[15],points;
int per;
ans[1]=0;ans[2]=0;ans[3]=0;ans[4]=0;ans[5]=0;ans[6]=0;ans[7]=0;ans[8]=0;ans[9]=0;ans[10]=0;ans[11]=0;ans[12]=0;
startloading();
delay(2000);
cleardevice();
design1();
ans[1]=q1set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[2]=q2set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[3]=q3set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[4]=q4set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[5]=q5set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[6]=q6set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[7]=q7set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[8]=q8set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[9]=q9set1();
delay(1000);
cleardevice();
loading();
delay(1000);


cleardevice();
design1();
ans[10]=q10set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[11]=q11set1();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[12]=q12set1();
delay(1000);
cleardevice();
loading();
delay(1000);


cleardevice();

points=(ans[1]+ans[2]+ans[3]+ans[4]+ans[5]+ans[6]+ans[7]+ans[8]+ans[9]+ans[10]+ans[11]+ans[12]);
settextstyle(8,0,9);
outtextxy(1,1, "Result");
printf("Player Name: %s\t",name);
printf("From: %s\n",city);
printf("Player Points: %d\n",points);
getch();
cleardevice();
settextstyle(8,0,7);
outtextxy(100,100, "Thank You");

settextstyle(8,0,7);
outtextxy(100,150, "For Playing");


return 0;
getch();

}

////////////////////////////set2//////////////////////////////////
int set2(char name[],char city[])
{
int ans[12],points;
int per;
ans[1]=0;ans[2]=0;ans[3]=0;ans[4]=0;ans[5]=0;ans[6]=0;ans[7]=0;ans[8]=0;ans[9]=0;ans[10]=0;ans[11]=0;ans[11]=0;ans[12]=0;
startloading();
delay(2000);
cleardevice();
design1();
ans[1]=q1set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[2]=q2set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[3]=q3set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[4]=q4set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[5]=q5set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[6]=q6set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[7]=q7set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[8]=q8set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[9]=q9set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[10]=q10set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[11]=q11set2();
delay(1000);
cleardevice();
loading();
delay(1000);

cleardevice();
design1();
ans[12]=q12set2();
delay(1000);
cleardevice();
loading();
delay(1000);


cleardevice();
points=(ans[1]+ans[2]+ans[3]+ans[4]+ans[5]+ans[6]+ans[7]+ans[8]+ans[9]+ans[10]+ans[11]+ans[12]);
settextstyle(8,0,9);
outtextxy(1,1, "Result");
printf("Player Name: %s\t",name);
printf("From: %s\n",city);
printf("Player Points: %d\n",points);
getch();
cleardevice();
settextstyle(8,0,7);
outtextxy(100,100, "Thank You");

settextstyle(8,0,7);
outtextxy(100,150, "For Playing");

return 0;
}

/////////////////////////////////set3q11///////////////////////////////////
int q11set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q11.Which region has won the Ranji");
outtextxy(100,230, "Trophy Tournament 2019? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Saurashtra");
settextstyle(8,0,1);
outtextxy(330,335, "B.Mumbai");
settextstyle(8,0,1);
outtextxy(25,385, "C.Vidarbha");
settextstyle(8,0,1);
outtextxy(330,385, "D.Rajasthan");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
int q12set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q12.Who got FIFA Best Player  ");
outtextxy(100,230, "2019 Award? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Neymar");
settextstyle(8,0,1);
outtextxy(330,335, "B. L.Messi");
settextstyle(8,0,1);
outtextxy(25,385, "C. C.Ronaldo");
settextstyle(8,0,1);
outtextxy(330,385, "D.Luka Mordic");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='b')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
int q1set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q1.Which one is the smallest ocean ");
outtextxy(100,230, "in the world ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Indian Ocean");
settextstyle(8,0,1);
outtextxy(330,335, "B.Pacific Ocean");
settextstyle(8,0,1);
outtextxy(25,385, "C.Atlantic Ocean");
settextstyle(8,0,1);
outtextxy(330,385, "D.Arctic");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
//////////////////////////////////set3q2//////////////////////////////////
int q2set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q2.India's first satellite Aryabatta ");
outtextxy(100,230, "was launched from ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Soviet Union");
settextstyle(8,0,1);
outtextxy(330,335, "B.America");
settextstyle(8,0,1);
outtextxy(25,385, "C.India");
settextstyle(8,0,1);
outtextxy(330,385, "D.Israel");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
////////////////////////////////set3q3//////////////////////////////////////
int q3set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q3.Who is the man with most oscar ");
outtextxy(100,230, "awards? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Edith Head");
settextstyle(8,0,1);
outtextxy(330,335, "B.John Ford");
settextstyle(8,0,1);
outtextxy(25,385, "C.Walt Disney");
settextstyle(8,0,1);
outtextxy(330,385, "D.Katharine Hepburn");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
////////////////////////////////set3q4//////////////////////////////////
int q4set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q4.Which of the following is a  ");
outtextxy(100,230, "chat engine ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Google Bol");
settextstyle(8,0,1);
outtextxy(330,335, "B.Yahoo Talk");
settextstyle(8,0,1);
outtextxy(25,385, "C.Rediff messenger");
settextstyle(8,0,1);
outtextxy(330,385, "D.NoneOfTheAbove");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
/////////////////////////////////set3q5//////////////////////////////////////
int q5set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q5.Which of the following is a video ");
outtextxy(100,230, "compression technology ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.MPEG");
settextstyle(8,0,1);
outtextxy(330,335, "B.NPEG");
settextstyle(8,0,1);
outtextxy(25,385, "C.LPEG");
settextstyle(8,0,1);
outtextxy(330,385, "D.OPEG");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
//////////////////////////////////set3q6////////////////////////////////////////
int q6set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q6.The software, which allows us to ");
outtextxy(100,230, "view webpages, is called ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Website");
settextstyle(8,0,1);
outtextxy(330,335, "B.Web Browser");
settextstyle(8,0,1);
outtextxy(25,385, "C.Interpreter");
settextstyle(8,0,1);
outtextxy(330,385, "D.OperatingSystem");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='b')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
///////////////////////////////////set3q7////////////////////////////////
int q7set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q7.In fiberOoptics,the signal source is");

settextstyle(8,0,1);
outtextxy(25,335, "A.Light Waves");
settextstyle(8,0,1);
outtextxy(330,335, "B.Sound Waves");
settextstyle(8,0,1);
outtextxy(25,385, "C.A-rays");
settextstyle(8,0,1);
outtextxy(330,385, "D.Cosmic Rays");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
///////////////////////////////set3q8///////////////////////////////////////
int q8set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q8.Who is the inventor of WWW ? ");

settextstyle(8,0,1);
outtextxy(25,335, "A.Bill Gates");
settextstyle(8,0,1);
outtextxy(330,335, "B.Tim Berners Lee");
settextstyle(8,0,1);
outtextxy(25,385, "C.Timothy Bil");
settextstyle(8,0,1);
outtextxy(330,385, "D.Ray Tomlinson");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='b')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
/////////////////////////////////set3q9/////////////////////////////////////
int q9set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q9.The service of internet providing ");
outtextxy(100,230, "both audio & video conversation is ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Chat");
settextstyle(8,0,1);
outtextxy(330,335, "B.E-Mail");
settextstyle(8,0,1);
outtextxy(25,385, "C.Video Conference");
settextstyle(8,0,1);
outtextxy(330,385, "D.Video Chat");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
/////////////////////////////////set3q10////////////////////////////////////
int q10set3()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q10.In context of computer security ");
outtextxy(100,230, "crackers are also called as ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.BlackHatHackers");
settextstyle(8,0,1);
outtextxy(330,335, "B.WhiteHatHackers");
settextstyle(8,0,1);
outtextxy(25,385, "C.EliteHackers");
settextstyle(8,0,1);
outtextxy(330,385, "D.ScriptHackers");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}

/////////////////////////////////set2q1/////////////////////////////////////
int q1set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q1.Game of cricket was invented by...");

settextstyle(8,0,1);
outtextxy(25,335, "A.England");
settextstyle(8,0,1);
outtextxy(330,335, "B.India");
settextstyle(8,0,1);
outtextxy(25,385, "C.Australia");
settextstyle(8,0,1);
outtextxy(330,385, "D.Pakistan");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
///////////////////////////////////q1set1//////////////////////////////////
int q1set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q1.Game of cricket was invented by...");

settextstyle(8,0,1);
outtextxy(25,335, "A.England");
settextstyle(8,0,1);
outtextxy(330,335, "B.India");
settextstyle(8,0,1);
outtextxy(25,385, "C.Australia");
settextstyle(8,0,1);
outtextxy(330,385, "D.Pakistan");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");
for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}

/////////////////////////////////q2set2//////////////////////////////////////
int q2set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q2.When was the world's first ");
outtextxy(100,230, "cricket club formed ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.1760s");
settextstyle(8,0,1);
outtextxy(330,335, "B.1770s");
settextstyle(8,0,1);
outtextxy(25,385, "C.1670s");
settextstyle(8,0,1);
outtextxy(330,385, "D.1780s");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");
    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");
 delay(1500);
 return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;


}
}
delay(800);

}
return 0;
}
///////////////////////////////set2q3//////////////////////////////////////
int q3set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q3.The first among Indian ");
outtextxy(100,230, " communities to setup cricket club ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Parsis");
settextstyle(8,0,1);
outtextxy(330,335, "B.Hindus");
settextstyle(8,0,1);
outtextxy(25,385, "C.Muslims");
settextstyle(8,0,1);
outtextxy(330,385, "D.Christians");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");
    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
       return 0;

}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
//////////////////////////////q3set2////////////////////////////////////////
int q4set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q4.Who is known as the father of");
outtextxy(100,230, "plastic surgery ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Charaka");
settextstyle(8,0,1);
outtextxy(330,335, "B.G.D.Naid");
settextstyle(8,0,1);
outtextxy(25,385, "C.Sushruta");
settextstyle(8,0,1);
outtextxy(330,385, "D.None");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
     return 0;

}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
////////////////////////////////q5set2//////////////////////////////
int q5set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q5.Who invented the safely break, which");
outtextxy(100,230, "stop the elevator from crashing? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Thomas Edison");
settextstyle(8,0,1);
outtextxy(330,335, "B.Eli Whitney");
settextstyle(8,0,1);
outtextxy(25,385, "C.Henry Ford");
settextstyle(8,0,1);
outtextxy(330,385, "D.Elisha Otis");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
	return 0;

}
}
delay(800);

}
return 0;
}
///////////////////////////////set2q6//////////////////////////////////////
int q6set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q6.The Father of White resvolution is:");

settextstyle(8,0,1);
outtextxy(25,335, "A.Patanjali");
settextstyle(8,0,1);
outtextxy(330,335, "B.J.C. Bose");
settextstyle(8,0,1);
outtextxy(25,385, "C.Verghese Kurien");
settextstyle(8,0,1);
outtextxy(330,385, "D.Raja Ramanna");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
     return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
    return 0;
}

else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
/////////////////////////////////set2q7///////////////////////////////////
int q7set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q7.Who built the first working,");
outtextxy(100,230, "electro mechanical computer ? ");
settextstyle(8,0,1);
outtextxy(25,335, "A.Konrad Zuse");
settextstyle(8,0,1);
outtextxy(330,335, "B.L.J. Biro");
settextstyle(8,0,1);
outtextxy(25,385, "C.Brandenburg");
settextstyle(8,0,1);
outtextxy(330,385, "D.Karl Benz");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
//////////////////////////////////set2q8///////////////////////////////////

/////////////////////////////////////////////////////////////////////////////

int q8set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q8.In Ranji Trophy teams represent...");

settextstyle(8,0,1);
outtextxy(25,335, "A.Regions");
settextstyle(8,0,1);
outtextxy(330,335, "B.Communities");
settextstyle(8,0,1);
outtextxy(25,385, "C.Races");
settextstyle(8,0,1);
outtextxy(330,385, "D.Religions");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
	return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
//////////////////////////////////////set2q9////////////////////////////////
int q9set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q9.First Indian Movie submitted for");
outtextxy(100,230, "Oscar ");
settextstyle(8,0,1);
outtextxy(25,335, "A.The Guide");
settextstyle(8,0,1);
outtextxy(330,335, "B.Mother India");
settextstyle(8,0,1);
outtextxy(25,385, "C.Madhumati");
settextstyle(8,0,1);
outtextxy(330,385, "D.Amrapali");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='b')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
    return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
      return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
///////////////////////////////////set2q10///////////////////////////////
int q10set2()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q10.Satyajit Ra win Oscar in the year");

settextstyle(8,0,1);
outtextxy(25,335, "A.1992");
settextstyle(8,0,1);
outtextxy(330,335, "B.1994");
settextstyle(8,0,1);
outtextxy(25,385, "C.1986");
settextstyle(8,0,1);
outtextxy(330,385, "D.1990");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
   return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
     return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}


/////////////////////////////////////set1q2////////////////////////
int q2set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q2.Who among them used to term ");
outtextxy(100,230, "computer worm for the first time ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.John Brunner");
settextstyle(8,0,1);
outtextxy(330,335, "B.Alan Turing");
settextstyle(8,0,1);
outtextxy(25,385, "C.John McCarthy");
settextstyle(8,0,1);
outtextxy(330,385, "D.JP Eckert");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}

////////////////////////////////////set1q3/////////////////////////////
int q3set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q3.Which was the first virus detected on,");
outtextxy(100,230, "ARPANET,the forerunner of internet ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.Exe Flie");
settextstyle(8,0,1);
outtextxy(330,335, "B.Creeper Virus");
settextstyle(8,0,1);
outtextxy(25,385, "C.Peeper Virus");
settextstyle(8,0,1);
outtextxy(330,385, "D.Trozen Virus");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();

return 0;//delay(1000);
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='b')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
     return 0;

}
}
delay(800);

}
return 0;
}
///////////////////////////////set1q4///////////////////////////////////
int q4set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q4.Which among them invented the ");
outtextxy(100,230, "Cinematograpgh ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.Lumiere Bros");
settextstyle(8,0,1);
outtextxy(330,335, "B.Mani Sethna");
settextstyle(8,0,1);
outtextxy(25,385, "C.DN Ganguly");
settextstyle(8,0,1);
outtextxy(330,385, "D.Alan Turing");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);

}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
/////////////////////////////////set1q5////////////////////////////////////
int q5set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q5.Early Cricket bats were shapes like? ");

settextstyle(8,0,1);
outtextxy(25,335, "A.Hockey sticks");
settextstyle(8,0,1);
outtextxy(330,335, "B.Flat Sticks");
settextstyle(8,0,1);
outtextxy(25,385, "C.Rackets");
settextstyle(8,0,1);
outtextxy(330,385, "D.Curved Outwards");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
     return 0;

}
}
delay(800);

}
return 0;
}
//////////////////////////////set1q6///////////////////////////////////
int q6set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q6.In which year the first laws of ");
outtextxy(100,230, "cricket were written in.... ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.1474");
settextstyle(8,0,1);
outtextxy(330,335, "B.1447");
settextstyle(8,0,1);
outtextxy(25,385, "C.1774");
settextstyle(8,0,1);
outtextxy(330,385, "D.1744");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,170,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
/////////////////////////////////set1q7///////////////////////////////
int q7set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q7.How printer quality is measured ?");

settextstyle(8,0,1);
outtextxy(25,335, "A.AlphbetPerStrike");
settextstyle(8,0,1);
outtextxy(330,335, "B.WodsPerStrike");
settextstyle(8,0,1);
outtextxy(25,385, "C.StrikePerInch");
settextstyle(8,0,1);
outtextxy(330,385, "D.DotsPerInch");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
//////////////////////////////////set1q8//////////////////////////////
int q8set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q8.Which was world's 1st successful ");
outtextxy(100,230, "electronic computer ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.PARAM");
settextstyle(8,0,1);
outtextxy(330,335, "B.CRAY-1");
settextstyle(8,0,1);
outtextxy(25,385, "C.Pascaline");
settextstyle(8,0,1);
outtextxy(330,385, "D.ENIAC");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}
////////////////////////////////////set1q9/////////////////////////////////
int q9set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q9.Who is considered as the 'Father ");
outtextxy(100,230, "of Artificial Intelligence ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.Charles Babbage");
settextstyle(8,0,1);
outtextxy(330,335, "B.Lee De Forest");
settextstyle(8,0,1);
outtextxy(25,385, "C.John McCarthy");
settextstyle(8,0,1);
outtextxy(330,385, "D.JP Eckart");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
}
delay(800);

}
return 0;
}
////////////////////////////////set1q10/////////////////////////////////////
int q10set1()
{
int i,j,x,y,s;
char a[30],b[30],ch;

setcolor(WHITE);
arc(300,200, 0, 180, 43);

for(i=0,j=30;i<=180,j>=0;i+=6,j--)
{

setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(100,205, "Q10.Where was the world's first cricket ");
outtextxy(100,230, "club formed ?");
settextstyle(8,0,1);
outtextxy(25,335, "A.Hambledon");
settextstyle(8,0,1);
outtextxy(330,335, "B.Marylebone");
settextstyle(8,0,1);
outtextxy(25,385, "C.London");
settextstyle(8,0,1);
outtextxy(330,385, "D.Melbourne");

arc(300,200, 0, i, 40);



if(j>=10)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(YELLOW);
settextstyle(7,0,4);
outtextxy(283,160, a);
for(s=100;s<120;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j==9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(283,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}

else if(j<9)
{
sprintf(a,"%d",j);
sprintf(b,"%d",j+1);
setcolor(BLACK);
settextstyle(7,0,4);
outtextxy(290,160, b);
setcolor(RED);
settextstyle(7,0,4);
outtextxy(290,160, a);
for(s=400;s<420;s=s+20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
}
}
if(j==0)
{
setcolor(RED);
settextstyle(7,0,7);
outtextxy(100,1, "Time's Up");

for(s=400;s>50;s=s-20)
{
sound(s);
delay(100);
nosound();
//delay(1000);
return 0;
}

}
if(kbhit())
{
//n=i;
gotoxy(38,24);
scanf("%c", &ch);

if(ch=='a')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"SUPERB! CORRECT ANSWER");

    delay(1500);
    return 1;
}
else if(ch=='b')
{
  settextstyle(7,0,4);
  outtextxy(70,100,"OOPS! WRONG ANSWER");

  delay(1500);
  return 0;
}

else if(ch=='c')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;
}
else if(ch=='d')
{
  settextstyle(7,0,4);
    outtextxy(70,100,"OOPS! WRONG ANSWER");

    delay(1500);
    return 0;

}
}
delay(800);

}
return 0;
}

//////////////////////////////////DESIGN/////////////////////////////
void design1()
{
setbkcolor(BLACK);


circle(300,375,20);

line(0,350,50,325);
line(0,350,50,375);
line(50,325,250,325);
line(50,375,250,375);
line(250,325,300,350);
line(250,375,300,350);


line(300,350,350,325);
line(300,350,350,375);
line(350,325,550,325);
line(350,375,550,375);
line(550,325,600,350);
line(550,375,600,350);

line(0,400,50,375);
line(0,400,50,425);
line(50,375,250,375);
line(50,425,250,425);
line(250,375,300,400);
line(250,425,300,400);

line(300,400,350,375);
line(300,400,350,425);
line(350,375,550,375);
line(350,425,550,425);
line(550,375,600,400);
line(550,425,600,400);

line(0,250,100,200);
line(0,250,100,300);
line(100,200,500,200);
line(100,300,500,300);
line(500,200,600,250);
line(500,300,600,250);
}








void logo()
{
int i;
 for(i=200;i<=300;i++)
     {
     sound(i);
     delay(10);
     nosound();
     }



     setfillstyle(SOLID_FILL,DARKGRAY);
     circle(300,240,200);
     floodfill(300,240,WHITE);
     for(i=400;i<=600;i++)
     {
     sound(i);
     delay(5);
     nosound();
     }
     //delay(1000);

     setfillstyle(SOLID_FILL,RED);
     circle(300,240,130);
     floodfill(300,240,WHITE);
     for(i=700;i<=900;i++)
     {
     sound(i);
     delay(5);
     nosound();
     }
     //delay(1000);

     line(400,290,195,290);
     line(400,190,195,190);
     for(i=100;i<=102;i++)
     {
     sound(i);
     delay(200);
     nosound();
     }
     //delay(1000);

    settextstyle(4,0,9);
    outtextxy(200,170,"NFQ");
     for(i=202;i>=200;i--)
     {
     sound(i);
     delay(200);
     nosound();
     }
    //delay(100);

    settextstyle(0,0,5);
    outtextxy(122,195,"N");
     for(i=200;i<=202;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
  //  delay(100);

    settextstyle(0,0,5);
    outtextxy(145,140,"E");
    for(i=300;i<=302;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
     //delay(100);

    settextstyle(0,0,5);
    outtextxy(180,90,"E");
   for(i=400;i<=402;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
   // delay(100);

     settextstyle(0,0,5);
    outtextxy(230,70,"D");
    for(i=500;i<=502;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
   // delay(100);

      settextstyle(0,0,5);
    outtextxy(400,110,"F");
     for(i=600;i<=602;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
    //	delay(100);

	 settextstyle(0,0,5);
    outtextxy(428,150,"O");
     for(i=700;i<=702;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
     //	delay(100);


     settextstyle(0,0,5);
    outtextxy(445,200,"R");
      for(i=800;i<=802;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
      //	delay(100);



     settextstyle(0,0,5);
    outtextxy(200,360,"Q");
      for(i=900;i<=902;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
      //	delay(100);

     settextstyle(0,0,5);
    outtextxy(250,380,"U");
      for(i=1000;i<=1002;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
      //	delay(100);

     settextstyle(0,0,5);
    outtextxy(300,383,"I");
      for(i=1100;i<=1102;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
      //	delay(100);

     settextstyle(0,0,5);
    outtextxy(345,375,"Z");
      for(i=1200;i<=1202;i++)
     {
     sound(i);
     delay(25);
     nosound();
     }
      //	delay(100);
      for(i=500;i>=100;i-=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=100;i<=500;i+=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=500;i>=100;i-=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=100;i<=500;i+=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=500;i>=100;i-=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=100;i<=500;i+=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=500;i>=100;i-=10)
     {
     sound(i);
     delay(5);
     nosound();
     }
     for(i=100;i<=500;i+=10)
     {
     sound(i);
     delay(5);
     nosound();
     }

     settextstyle(0,0,3);
     outtextxy(50,450,"Press Enter To Continue...");

	getch();

}




