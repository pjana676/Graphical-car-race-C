/* A simple c++ "car raceing" programe that i impliment for the improvming perpus
  that is a 2 daminational car raceing programe ,i create this programe
  use in graphics.....................................
  my self ...............PRITAM JANA...................................
  student of MMITC&BM in MMU Mullana,Ambala,haryana on MCA.........................*/

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <dos.h>
int spead=1,x=0,y=320,z=20,w=320,n,left=268,top=330,right=320,bottom=410,left1=216,top1=-80,right1=268,bottom1=0,left2=268,top2=-240,right2=320,bottom2=-160,left3=372,top3=-400,right3=424,bottom3=-320;
class draw
{
 public:
   void road();
   void outroad();
};
void draw::outroad()
 {
  int x1=0,y1=0,x2=0,y2=480;
  setcolor(90);
  for(x1=0;x1<=215;x1++)
   {
    line(x1,y1,x2,y2);
    x2++;
   }
  x1=425,y1=0,x2=425,y2=480;
  setcolor(90);
  for(x1=425;x1<=640;x1++)
   {
    line(x1,y1,x2,y2);
    x2++;
   }
 }
void draw::road()
 {
   static int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,inc=0,nl=1,count=0;

     setcolor(0);
     line(y,inc-1-r1,w,inc+20-1-r1);
     line(y+1,inc-1-r1,w+1,inc+20-1-r1);
     line(y+2,inc-1-r1,w+2,inc+20-1-r1);
     setcolor(15);
     line(y,inc-r1,w,inc+20-r1);
     line(y+1,inc-r1,w+1,inc+20-r1);
     line(y+2,inc-r1,w+2,inc+20-r1);

     setcolor(0);
     line(y,inc-1+50-r2,w,inc+20-1+50-r2);
     line(y+1,inc-1+50-r2,w+1,inc+20-1+50-r2);
     line(y+2,inc-1+50-r2,w+2,inc+20-1+50-r2);
     setcolor(15);
     line(y,inc+50-r2,w,inc+20+50-r2);
     line(y+1,inc+50-r2,w+1,inc+20+50-r2);
     line(y+2,inc+50-r2,w+2,inc+20+50-r2);

     setcolor(0);
     line(y,inc-1+100-r3,w,inc+20-1+100-r3);
     line(y+1,inc-1+100-r3,w+1,inc+20-1+100-r3);
     line(y+2,inc-1+100-r3,w+2,inc+20-1+100-r3);
     setcolor(15);
     line(y,inc+100-r3,w,inc+20+100-r3);
     line(y+1,inc+100-r3,w+1,inc+20+100-r3);
     line(y+2,inc+100-r3,w+2,inc+20+100-r3);

     setcolor(0);
     line(y,inc-1+150-r4,w,inc+20-1+150-r4);
     line(y+1,inc-1+150-r4,w+1,inc+20-1+150-r4);
     line(y+2,inc-1+150-r4,w+2,inc+20-1+150-r4);
     setcolor(15);
     line(y,inc+150-r4,w,inc+20+150-r4);
     line(y+1,inc+150-r4,w+1,inc+20+150-r4);
     line(y+2,inc+150-r4,w+2,inc+20+150-r4);

     setcolor(0);
     line(y,inc-1+200-r5,w,inc+20-1+200-r5);
     line(y+1,inc-1+200-r5,w+1,inc+20-1+200-r5);
     line(y+2,inc-1+200-r5,w+2,inc+20-1+200-r5);
     setcolor(15);
     line(y,inc+200-r5,w,inc+20+200-r5);
     line(y+1,inc+200-r5,w+1,inc+20+200-r5);
     line(y+2,inc+200-r5,w+2,inc+20+200-r5);

     setcolor(0);
     line(y,inc-1+250-r6,w,inc+20-1+250-r6);
     line(y+1,inc-1+250-r6,w+1,inc+20-1+250-r6);
     line(y+2,inc-1+250-r6,w+2,inc+20-1+250-r6);
     setcolor(15);
     line(y,inc+250-r6,w,inc+20+250-r6);
     line(y+1,inc+250-r6,w+1,inc+20+250-r6);
     line(y+2,inc+250-r6,w+2,inc+20+250-r6);

     setcolor(0);
     line(y,inc-1+300-r7,w,inc+20-1+300-r7);
     line(y+1,inc-1+300-r7,w+1,inc+20-1+300-r7);
     line(y+2,inc-1+300-r7,w+2,inc+20-1+300-r7);
     setcolor(15);
     line(y,inc+300-r7,w,inc+20+300-r7);
     line(y+1,inc+300-r7,w+1,inc+20+300-r7);
     line(y+2,inc+300-r7,w+2,inc+20+300-r7);

     setcolor(0);
     line(y,inc-1+350-r8,w,inc+20-1+350-r8);
     line(y+1,inc-1+350-r8,w+1,inc+20-1+350-r8);
     line(y+2,inc-1+350-r8,w+2,inc+20-1+350-r8);
     setcolor(15);
     line(y,inc+350-r8,w,inc+20+350-r8);
     line(y+1,inc+350-r8,w+1,inc+20+350-r8);
     line(y+2,inc+350-r8,w+2,inc+20+350-r8);

     setcolor(0);
     line(y,inc-1+400-r9,w,inc+20-1+400-r9);
     line(y+1,inc-1+400-r9,w+1,inc+20-1+400-r9);
     line(y+2,inc-1+400-r9,w+2,inc+20-1+400-r9);
     setcolor(15);
     line(y,inc+400-r9,w,inc+20+400-r9);
     line(y+1,inc+400-r9,w+1,inc+20+400-r9);
     line(y+2,inc+400-r9,w+2,inc+20+400-r9);

     setcolor(0);
     line(y,inc-1+450-r10,w,inc+20-1+450-r10);
     line(y+1,inc-1+450-r10,w+1,inc+20-1+450-r10);
     line(y+2,inc-1+450-r10,w+2,inc+20-1+450-r10);
     setcolor(15);
     line(y,inc+450-r10,w,inc+20+450-r10);
     line(y+1,inc+450-r10,w+1,inc+20+450-r10);
     line(y+2,inc+450-r10,w+2,inc+20+450-r10);

     if(inc>0)
      {
       if((inc%480)==0)
	{
	 nl=inc/480;
	 count=nl*480;
	}
      }

     if(inc==count+30)
      {
       r10=480+count;

      }
     if(inc==count+80)
      {
       r9=480+count;
      }
     if(inc==count+130)
      {
       r8=480+count;
      }
     if(inc==count+180)
      {
       r7=480+count;
      }
     if(inc==count+230)
      {
       r6=480+count;
      }
     if(inc==count+280)
      {
       r5=480+count;
      }
     if(inc==count+330)
      {
       r4=480+count;
      }
     if(inc==count+380)
      {
       r3=480+count;
      }
     if(inc==count+430)
      {
       r2=480+count;
      }
     if(inc==count+480)
      {
       r1=480+count;
      }
     inc++;

 }
class car
{
 public:

      void carme();
      void ecar1();
      void ecar2();
      void ecar3();
};
void car::ecar3()
{
 static int x=0;
 setcolor(0);
 rectangle(left3,top3+x,right3,bottom3+x);
 rectangle(left3+10,top3+x+7,right3-10,bottom3+x-30);
 //for(int i=0;i<=16;i++)
  //rectangle(left3+10+i,top3+x+7+i,right3-10-i,bottom3+x-20-i);
 line(left3+7,top3+x+70,right3-7,bottom3+x-10);
 line(left3+7,top3+x+70,left3,bottom3+x);
 line(right3,bottom3+x,right3-7,bottom3+x-10);
 line(right3-10,bottom3+x-20,right3-7,bottom3+x-10);
 line(left3+7,top3+x+70,left3+10,top3+x+60);
 line(left3,top3+x+25,left3+10,top3+x+25);
 line(right3,top3+x+25,right3-10,top3+x+25);
 line(right3,top3+x+49,right3-10,top3+x+49);
 line(left3,top3+x+49,left3+10,top3+x+49);
 line(right3,top3+x,right3-10,top3+x+7);
 line(left3,top3+x,left3+10,top3+x+7);
 //setcolor(15);
 //circle(right3-10,top3+x+4 ,3);
 //circle(left3+10,top3+x+4 ,3);

 x=x+spead;;

 setcolor(4);
 rectangle(left3,top3+x,right3,bottom3+x);
 rectangle(left3+10,top3+x+7,right3-10,bottom3+x-30);
 //for(int j=0;j<=16;j++)
  //rectangle(left3+10+j,top3+x+7+j,right3-10-j,bottom3+x-20-j);
 line(left3+7,top3+x+70,right3-7,bottom3+x-10);
 line(left3+7,top3+x+70,left3,bottom3+x);
 line(right3,bottom3+x,right3-7,bottom3+x-10);
 line(right3-10,bottom3+x-20,right3-7,bottom3+x-10);
 line(left3+7,top3+x+70,left3+10,top3+x+60);
 line(left3,top3+x+25,left3+10,top3+x+25);
 line(right3,top3+x+25,right3-10,top3+x+25);
 line(right3,top3+x+49,right3-10,top3+x+49);
 line(left3,top3+x+49,left3+10,top3+x+49);
 line(right3,top3+x,right3-10,top3+x+7);
 line(left3,top3+x,left3+10,top3+x+7);
 //setcolor(15);
 //circle(right3-10,top3+x+4 ,3);
 //circle(left3+10,top3+x+4 ,3);
 if(x>=880)
  {
   x=0;
   left3=left;
   right3=right;
  }
 if((top==bottom3+x)&&(((right3>left)&&(left>left3))||((right3>right)&&(right>left3))))
   n=27;
 if((top3+x==top)&&(((right3>left)&&(left>left3))||((right3>right)&&(right>left3))))
   n=27;
 if((top3+x==bottom)&&(((right3>left)&&(left>left3))||((right3>right)&&(right>left3))))
   n=27;

}
void car::ecar2()
{
 static int x=0;
 setcolor(0);
 rectangle(left2,top2+x,right2,bottom2+x);
 rectangle(left2+10,top2+x+7,right2-10,bottom2+x-30);
 //for(int i=0;i<=16;i++)
  //rectangle(left2+10+i,top2+x+7+i,right2-10-i,bottom2+x-20-i);
 line(left2+7,top2+x+70,right2-7,bottom2+x-10);
 line(left2+7,top2+x+70,left2,bottom2+x);
 line(right2,bottom2+x,right2-7,bottom2+x-10);
 line(right2-10,bottom2+x-20,right2-7,bottom2+x-10);
 line(left2+7,top2+x+70,left2+10,top2+x+60);
 line(left2,top2+x+25,left2+10,top2+x+25);
 line(right2,top2+x+25,right2-10,top2+x+25);
 line(right2,top2+x+49,right2-10,top2+x+49);
 line(left2,top2+x+49,left2+10,top2+x+49);
 line(right2,top2+x,right2-10,top2+x+7);
 line(left2,top2+x,left2+10,top2+x+7);
 //setcolor(15);
 //circle(right2-10,top2+x+4 ,3);
 //circle(left2+10,top2+x+4 ,3);

 x=x+spead;;

 setcolor(4);
 rectangle(left2,top2+x,right2,bottom2+x);
 rectangle(left2+10,top2+x+7,right2-10,bottom2+x-30);
 //for(int j=0;j<=16;j++)
  //rectangle(left2+10+j,top2+x+7+j,right2-10-j,bottom2+x-20-j);
 line(left2+7,top2+x+70,right2-7,bottom2+x-10);
 line(left2+7,top2+x+70,left2,bottom2+x);
 line(right2,bottom2+x,right2-7,bottom2+x-10);
 line(right2-10,bottom2+x-20,right2-7,bottom2+x-10);
 line(left2+7,top2+x+70,left2+10,top2+x+60);
 line(left2,top2+x+25,left2+10,top2+x+25);
 line(right2,top2+x+25,right2-10,top2+x+25);
 line(right2,top2+x+49,right2-10,top2+x+49);
 line(left2,top2+x+49,left2+10,top2+x+49);
 line(right2,top2+x,right2-10,top2+x+7);
 line(left2,top2+x,left2+10,top2+x+7);
 //setcolor(15);
 //circle(right2-10,top2+x+4 ,3);
 //circle(left2+10,top2+x+4 ,3);
 if(x>=720)
  {
   x=0;
   left2=left;
   right2=right;
  }
 if((top==bottom2+x)&&(((right2>left)&&(left>left2))||((right2>right)&&(right>left2))))
   n=27;
 if((top2+x==top)&&(((right2>left)&&(left>left2))||((right2>right)&&(right>left2))))
   n=27;
 if((top2+x==bottom)&&(((right2>left)&&(left>left2))||((right2>right)&&(right>left2))))
   n=27;


}
void car::ecar1()
{
 static int x=0;
 setcolor(0);
 rectangle(left1,top1+x,right1,bottom1+x);
 rectangle(left1+10,top1+x+7,right1-10,bottom1+x-30);
 //for(int i=0;i<=16;i++)
  //rectangle(left1+10+i,top1+x+7+i,right1-10-i,bottom1+x-20-i);
 line(left1+7,top1+x+70,right1-7,bottom1+x-10);
 line(left1+7,top1+x+70,left1,bottom1+x);
 line(right1,bottom1+x,right1-7,bottom1+x-10);
 line(right1-10,bottom1+x-20,right1-7,bottom1+x-10);
 line(left1+7,top1+x+70,left1+10,top1+x+60);
 line(left1,top1+x+25,left1+10,top1+x+25);
 line(right1,top1+x+25,right1-10,top1+x+25);
 line(right1,top1+x+49,right1-10,top1+x+49);
 line(left1,top1+x+49,left1+10,top1+x+49);
 line(right1,top1+x,right1-10,top1+x+7);
 line(left1,top1+x,left1+10,top1+x+7);
 //setcolor(15);
 //circle(right1-10,top1+x+4 ,3);
 //circle(left1+10,top1+x+4 ,3);

 x=x+spead;

 setcolor(4);
 rectangle(left1,top1+x,right1,bottom1+x);
 rectangle(left1+10,top1+x+7,right1-10,bottom1+x-30);
 //for(int j=0;j<=16;j++)
  //rectangle(left1+10+j,top1+x+7+j,right1-10-j,bottom1+x-20-j);
 line(left1+7,top1+x+70,right1-7,bottom1+x-10);
 line(left1+7,top1+x+70,left1,bottom1+x);
 line(right1,bottom1+x,right1-7,bottom1+x-10);
 line(right1-10,bottom1+x-20,right1-7,bottom1+x-10);
 line(left1+7,top1+x+70,left1+10,top1+x+60);
 line(left1,top1+x+25,left1+10,top1+x+25);
 line(right1,top1+x+25,right1-10,top1+x+25);
 line(right1,top1+x+49,right1-10,top1+x+49);
 line(left1,top1+x+49,left1+10,top1+x+49);
 line(right1,top1+x,right1-10,top1+x+7);
 line(left1,top1+x,left1+10,top1+x+7);
 //setcolor(15);
 //circle(right1-10,top1+x+4 ,3);
 //circle(left1+10,top1+x+4 ,3);
 if(x>=560)
  {
   x=0;
   left1=left;
   right1=right;
  }
 if((top==bottom1+x)&&(((right1>left)&&(left>left1))||((right1>right)&&(right>left1))))
   n=27;
 if((top1+x==top)&&(((right1>left)&&(left>left1))||((right1>right)&&(right>left1))))
   n=27;
 if((top1+x==bottom)&&(((right1>left)&&(left>left1))||((right1>right)&&(right>left1))))
   n=27;
}
void car::carme()
{

 if((n==75)&&(left!=216))
  {

   setcolor(0);
   rectangle(left,top,right,bottom);
   rectangle(left+10,top+20,right-10,bottom-7);
   for(int i=1;i<=16;i++)
    rectangle(left+10+i,top+20+i,right-10-i,bottom-7-i);
   line(left+7,top+10,right-7,bottom-70);
   line(left,top,left+7,top+10);
   line(right-7,bottom-70,right,top);
   line(right-7,bottom-70,right-10,top+20);
   line(left+7,top+10,left+10,top+20);
   line(left,top+25,left+10,top+25);
   line(right,top+25,right-10,top+25);
   line(right,top+49,right-10,top+49);
   line(left,top+49,left+10,top+49);
   line(right-10,bottom-7,right,bottom);
   line(left,bottom,left+10,bottom-7);
   //setcolor(15);
   //circle(right-10,top+4 ,3);
   //circle(left+10,top+4 ,3);
   left=left-13;
   right=right-13;
   n=0;
  }

  if((n==72)&&(top>=0))
  {

   setcolor(0);
   rectangle(left,top,right,bottom);
   rectangle(left+10,top+20,right-10,bottom-7);
   for(int i=1;i<=16;i++)
    rectangle(left+10+i,top+20+i,right-10-i,bottom-7-i);
   line(left+7,top+10,right-7,bottom-70);
   line(left,top,left+7,top+10);
   line(right-7,bottom-70,right,top);
   line(right-7,bottom-70,right-10,top+20);
   line(left+7,top+10,left+10,top+20);
   line(left,top+25,left+10,top+25);
   line(right,top+25,right-10,top+25);
   line(right,top+49,right-10,top+49);
   line(left,top+49,left+10,top+49);
   line(right-10,bottom-7,right,bottom);
   line(left,bottom,left+10,bottom-7);
   //setcolor(15);
   //circle(right-10,top+4 ,3);
   //circle(left+10,top+4 ,3);
   top=top-13;
   bottom=bottom-13;
   n=0;

  }

  if((n==80)&&(bottom<=480))
  {

   setcolor(0);
   rectangle(left,top,right,bottom);
   rectangle(left+10,top+20,right-10,bottom-7);
   for(int i=1;i<=16;i++)
    rectangle(left+10+i,top+20+i,right-10-i,bottom-7-i);
   line(left+7,top+10,right-7,bottom-70);
   line(left,top,left+7,top+10);
   line(right-7,bottom-70,right,top);
   line(right-7,bottom-70,right-10,top+20);
   line(left+7,top+10,left+10,top+20);
   line(left,top+25,left+10,top+25);
   line(right,top+25,right-10,top+25);
   line(right,top+49,right-10,top+49);
   line(left,top+49,left+10,top+49);
   line(right-10,bottom-7,right,bottom);
   line(left,bottom,left+10,bottom-7);
   //setcolor(15);
   //circle(right-10,top+4 ,3);
   //circle(left+10,top+4 ,3);
   top=top+13;
   bottom=bottom+13;
   n=0;
  }

  if((n==77)&&(right!=424))
  {

   setcolor(0);
   rectangle(left,top,right,bottom);
   rectangle(left+10,top+20,right-10,bottom-7);
   for(int i=1;i<=16;i++)
    rectangle(left+10+i,top+20+i,right-10-i,bottom-7-i);
   line(left+7,top+10,right-7,bottom-70);
   line(left,top,left+7,top+10);
   line(right-7,bottom-70,right,top);
   line(right-7,bottom-70,right-10,top+20);
   line(left+7,top+10,left+10,top+20);
   line(left,top+25,left+10,top+25);
   line(right,top+25,right-10,top+25);
   line(right,top+49,right-10,top+49);
   line(left,top+49,left+10,top+49);
   line(right-10,bottom-7,right,bottom);
   line(left,bottom,left+10,bottom-7);
   //setcolor(15);
   //circle(right-10,top+4 ,3);
   //circle(left+10,top+4 ,3);
   left=left+13;
   right=right+13;
   n=0;
  }

 setcolor(4);
 rectangle(left,top,right,bottom);
 rectangle(left+10,top+20,right-10,bottom-7);
 for(int i=1;i<=16;i++)
  rectangle(left+10+i,top+20+i,right-10-i,bottom-7-i);
 line(left+7,top+10,right-7,bottom-70);
 line(left,top,left+7,top+10);
 line(right-7,bottom-70,right,top);
 line(right-7,bottom-70,right-10,top+20);
 line(left+7,top+10,left+10,top+20);
 line(left,top+25,left+10,top+25);
 line(right,top+25,right-10,top+25);
 line(right,top+49,right-10,top+49);
 line(left,top+49,left+10,top+49);
 line(right-10,bottom-7,right,bottom);
 line(left,bottom,left+10,bottom-7);
 //setcolor(15);
 //circle(right-10,top+4 ,3);
 //circle(left+10,top+4 ,3);
}



void main()
 {
  int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
  int score=0;
  do
  {
  draw drw;
  car car;
  drw.outroad();
  while(n!=27)
   {
    score++;
    drw.road();
    car.carme();
    car.ecar1();
    car.ecar2();
    car.ecar3();
    gotoxy(5,8);
    cout<<"YOUR SCROE IS  "<<score;
    delay(5);
    if(kbhit())
      {
       n=getch();
      }

    //spead=1;
    if(score==(2000*spead))
     spead++;
   }
  a:
  clrscr();
  gotoxy(27,10);
  cout<<"!!!......GAME OVER......!!!";
  gotoxy(32,11);
  cout<<"YOUR SCROE IS  "<<score;
  gotoxy(23,12);
  cout<<"IF YOU WANT TO PLAY AGAIN PRACE    ENTER";
  gotoxy(17,13);
  cout<<"IF YOU DO NAT WANT TO PLAY PRACE      ANY KEY  ";
  n=getch();
  if((n!=27)&&(n!=13))
   goto a;
  if(n==13)
   {
    spead=1,x=0,y=320,z=20,w=320,left=268,top=330,right=320,bottom=410,left1=216,top1=-80,right1=268,bottom1=0,left2=268,top2=-240,right2=320,bottom2=-160,left3=372,top3=-400,right3=424,bottom3=-320;
    clrscr();
    score=0;
   }
  }
  while(n==13);
  closegraph();
 }