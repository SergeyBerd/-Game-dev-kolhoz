int x=475,y=300,t=27,f,cl;//rx,ry,r=2

int object()
{
    R=50,G=50,B=175;

setcolor(COLOR(R-50,G+50,B-170));
Draw3d(x-1,y+10,COLOR(R-20,G-20,B-145),30,98,10,1);

setfillstyle(1,COLOR(30,50,30));
fillellipse(x,y+12,3,12);
ellipse( x,y,360,cl,25,5);

ellipse( x+56,y+13,0,0,40,8);
ellipse( x+56,y+11,0,0,46,8);

fillellipse(x+100,y+12,3,12);
ellipse( x+100,y,cl,0,25,5);

fillellipse(x+26,y-8,3,12);
ellipse( x+26,y-16,360,cl,25,5);
fillellipse(x+126,y-8,3,12);
ellipse( x+126,y-16,cl,0,25,5);


fillellipse(x+56,y+24,13,27);

line(x,y+12,x+56,y+24);
line(x+100,y+12,x+56,y+24);
line(x+26,y-8,x+56,y+24);
line(x+126,y-8,x+56,y+24);

setfillstyle(0,COLOR(0,0,0));
if (i%4==0)
{
cl+=30;
if (cl>360) cl=0;
}

Keybord_check();
if (iKey=='d')
{
    if (f<2){x+=4;f++;}
else if (f>=2){f=0;iKey=0;}

}
else if (iKey=='a')
{
if (f<2){x-=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if (iKey=='w')
{
    if (f<2){y-=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if (iKey=='s')
{
    if (f<2){y+=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if(iKey=='e')
{
    if (f<2){x+=4;y-=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if(iKey=='q')
{
    if (f<2){x-=4;y-=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if(iKey=='z')
{
    if (f<2){x-=4;y+=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if(iKey=='x')
{
    if (f<2){x+=4;y+=4;f++;}
else if (f>=2){f=0;iKey=0;}
}
else if (iKey==32)
{
 //   if (f<2){r+=20;f++;}
//else if (f>=2){f=0;iKey=0;}
}

if (x>999) x=1000;
else if (x<201) x=200;

ox=x;

if (y<30 && (iKey=='w'||iKey=='q'||iKey=='e')) y=31;
else if (y>660 && (iKey=='s'||iKey=='z'||iKey=='x')) y=659;
}

int x1=-600,y1,x2=-300,y2,depth;
int object_1()
{
if (i%4==0)
{
    //floodfill( 100, 150, 0 );
depth=random(15);
y1=random(8);
x1+=18;
//y2++;
x2+=15;

    setcolor(COLOR(R,G,B));

Draw3d(x2+xc,y2,COLOR(R,G,B),depth,6,40,1);

    Draw3d(-750+xc,300,COLOR(100,100,100),10,40,40,4);
    Draw3d(-790+xc,340,COLOR(100,100,100),10,40,40,4);
    Draw3d(-750+xc,340,COLOR(100,100,100),10,40,40,4);
    Draw3d(-710+xc,340,COLOR(100,100,100),10,40,40,4);
    Draw3d(-750+xc,380,COLOR(100,100,100),10,40,40,4);

    Draw3d(-700+xc,295,COLOR(100,100,100),10,40,40,4);
    Draw3d(-780+xc,295,COLOR(100,100,100),10,40,40,4);

    Draw3d(-700+xc,375,COLOR(100,100,100),10,40,40,4);
    Draw3d(-780+xc,375,COLOR(100,100,100),10,40,40,4);

Draw3d(x1+xc,y1*60+50,COLOR(R,G,B),depth,6,40,1);

}
if (i>39) {x2=-300;y2=random(8)*60+50;x1=-600;y1=0;}

}

int object_2()
{
    if (i%4==0)
    //setcolor(COLOR(50,50,50));
//Draw3d(500+xc,361,COLOR(0,0,0),15,50,25,0);
Draw3d(435+xc,395,COLOR(0,0,0),45,150,25,0);
Draw3d(370+xc,429,COLOR(0,0,0),75,250,25,0);
Draw3d(305+xc,463,COLOR(0,0,0),105,350,25,0);
Draw3d(240+xc,497,COLOR(0,0,0),135,450,25,0);
Draw3d(175+xc,531,COLOR(0,0,0),165,550,25,0);
Draw3d(110+xc,565,COLOR(0,0,0),195,650,25,0);
Draw3d(45+xc,599,COLOR(0,0,0),225,750,25,0);

Draw3d(6+xc,30,COLOR(R,G,B),3,510,6,1);
Draw3d(126+xc,42,COLOR(R,G,B),3,510,6,1);
Draw3d(306+xc,54,COLOR(R,G,B),3,510,6,1);
Draw3d(426+xc,66,COLOR(R,G,B),3,510,6,1);
}

int x3=3000,y3=300,t1,fg,f1,rx1,ry1,r1;

int object_3()
{
if (i%4==0)
{
R=random(225);
B=random(255);
setfillstyle(1,COLOR(B-247,0,R-216));
setcolor(COLOR(R,70,B));


if(t1>1) t1--;
else if(t1<=1) t1=30;

fillellipse( x3+xc,y3,t1+rx1,t1*2+ry1 );

rx1=random(10);
ry1=random(10);

fillellipse( x3+xc,y3,12+rx1,6+ry1 );
fillellipse( x3+xc,y3,3+rx1,6+ry1 );
}
fg=random(125);
if (fg==4)
{
    if (f1<2){r1+=20;f1++;}
else if (f1>=2) f1=0;

setfillstyle(1,COLOR(30,0,60));
fillellipse( x3+xc,y3,1.5*r1,r1);
setfillstyle(1,COLOR(rx1*2,r1%24,ry1*2));
fillellipse( x3+xc,y3,1.5*r1-8,r1-1);
if (r1>400)r1=2;
}

y3+=random(10);
y3-=random(10);

x3--;
if (x3<2500) x3=3500;


setfillstyle(1,COLOR(0,0,0));
setcolor(COLOR(0,0,0));
fillellipse( x3+xc,y3,30,60 );
fillellipse( x3+xc,y3,20,40 );
fillellipse( x3+xc,y3,20,10 );
fillellipse( x3+xc,y3,5,10 );

if (y3<30) y3=31;
else if (y3>660) y3=659;

}
