#include<windows.h>
#include<graphics.h>
#include<stdio.h>
//#include <string.h>
//#define STACK_MAX_SIZE 1024

int iKey,ox,i=0,xc=0,xm,ym,kind=2,pix;//mcl
unsigned char R,G,B,C;
int a[5],b[5];

void Keybord_check();
int random(int N);
void Draw (int x, int y, int color,int width,int height);
void Draw3d(int x, int y, int color,int depth,int width,int height,int fill);

#include"object.cpp"

int random (int N) { return rand() % N; }

void Draw ( int x, int y, int color,int width,int height )
{
setfillstyle ( 1, color );
bar (x,y,x+width, y+height); 
}
void Draw3d ( int x, int y, int color,int depth,int width,int height,int fill)
{
setfillstyle ( fill, color ); 
bar3d ( x, y, x+width, y+height,depth,100);
}       
void Keybord_check()
{
     if (kbhit()) iKey = getch();      	
}
int gotoxy(int x,int y)
{
	HANDLE hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD gotoxy={x,y};
	SetConsoleCursorPosition(hConsoleOut,gotoxy);
}

    int main()
{   
   /* char *p;
    char str_a[20];
    p = str_a;
    strcpy(str_a, "Hello, world!");
    outtextxy( 1, 1, p);*/
    

    int t,sw;//x=1020,y=230,x1=1020,depth=3,
    printf("HELLO\n");
    initwindow(1200,690,"DEMO",40);
Draw ( 100, 100, COLOR(255,0,0),100,40 );
Draw ( 100, 150, COLOR(0,255,0),100,40 );
Draw ( 100, 200, COLOR(0,0,255),100,40 );
Draw ( 100, 250, COLOR(255,255,255),100,40 );
getmouseclick(kind,a[100,200],b[100,200]);
   for(i=0;i<41;i++)
{
//readimagefile("fgt.BMP",0, 0, 1201, 661);

xm=mousex( );
ym=mousey( );

pix=getpixel( xm, ym );
R=pix;
G=pix>>8;
B=pix>>16;
C=pix>>24;

gotoxy(15,5);
printf("                                                                 >>");
gotoxy(15,5);
printf("%2d",xc);
sw=xc/-1200;
gotoxy(25,5);
printf("%2d",sw);
gotoxy(35,5);
printf("%2d",xm);
gotoxy(45,5);
printf("%2d",ym);
gotoxy(55,5);
printf("%d",kind);
gotoxy(65,5);
printf("%x",pix);

gotoxy(15,7);
printf("                                                           >>");
gotoxy(15,7);
printf("%d",R);
gotoxy(30,7);
printf("%d",G);
gotoxy(45,7);
printf("%d",B);
gotoxy(60,7);
printf("%d",C);
/*
Draw(115,300,BLACK,50,10);            
Draw(115,315,BLUE,50,10);          
Draw(115,330,GREEN,50,10);
Draw(115,345,CYAN,50,10);
Draw(115,360,RED,50,10);
Draw(115,375,MAGENTA,50,10);
Draw(115,390,BROWN,50,10);
Draw(115,405,LIGHTGRAY,50,10);
Draw(115,420,DARKGRAY,50,10);
Draw(115,435,LIGHTBLUE,50,10);
Draw(115,450,LIGHTGREEN,50,10);
Draw(115,465,LIGHTCYAN,50,10);
Draw(115,480,LIGHTRED,50,10);
Draw(115,495,LIGHTMAGENTA,50,10);
Draw(115,510,YELLOW,50,10);
Draw(115,525,WHITE,50,10);
*/
setfillstyle(1,COLOR(30,30,30));
setcolor(COLOR(0,0,0));
if (i%2==0)
    bar(0,0,1200,690);
setbkcolor( COLOR(0,0,0) );
Draw3d(1197+xc,0,COLOR(150,50,50),1,3,690,1);
Draw3d(2397+xc,0,COLOR(150,50,50),1,3,690,1);
Draw3d(3597+xc,0,COLOR(150,50,50),1,3,690,1);
R=50;
G=75;
B=50;

if(xc>1200 && (iKey=='q'||iKey=='a'||iKey=='z')) xc=1196;

setcolor(COLOR(50,50,50));

if (xm>1000 && i%2==0)
{
Draw3d(1000,6,COLOR(50,50,50),1,190,678,1);
setfillstyle ( 0, 0 );
}
switch(sw)
{
case -1:    
    object_1();
case 0:      
    
    object_2();
break;

case 1:
    object_2();
    object_3();
break;

case 2:
    object_3();

break;
  
default:
    break;
}

Draw3d(2700+xc,360,COLOR(0,0,0),20,180,180,0);
    
if (i>39) i=0;

Keybord_check();

if(ox>=999 && iKey=='d')
{ 
if(t<2){xc-=4;t++;}
else if(t>=2){t=0;iKey=0;}
}
else if(ox<=201 && iKey=='a')
{ 
if(t<2){xc+=4;t++;}
else if(t>=2){t=0;iKey=0;}
}
object();

delay(4);
}
    getch();
    return 0;
}
