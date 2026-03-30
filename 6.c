#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
int gd=DETECT,gm;
int x1=100,y1=100;
int x2=150,y2=50;
int x3=200,y3=100;
int tx=100,ty=50;
float sx=1.5,sy=1.5;
float angle=45;
float rad;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
outtextxy(100,110,"Original Object");
setcolor(YELLOW);
line(x1+tx,y1+ty,x2+tx,y2+ty);
line(x2+tx,y2+ty,x3+tx,y3+ty);
line(x3+tx,y3+ty,x1+tx,y1+ty);
outtextxy(x1+tx,y1+ty+10,"Translated Object");
setcolor(GREEN);
line(x1*sx,y1*sy,x2*sx,y2*sy);
line(x2*sx,y2*sy,x3*sx,y3*sy);
line(x3*sx,y3*sy,x1*sx,y1*sy);
outtextxy(x1*sx,y1*sy+10,"Scaled Object");
rad=angle*(3.14/180);
setcolor(RED);
line(x1*cos(rad)-y1*sin(rad),x1*sin(rad)+y1*cos(rad),x2*cos(rad)-y2*sin(rad),x2*sin(rad)+y2*cos(rad));
line(x2*cos(rad)-y2*sin(rad),x2*sin(rad)+y2*cos(rad),x3*cos(rad)-y3*sin(rad),x3*sin(rad)+y3*cos(rad));
line(x3*cos(rad)-y3*sin(rad),x3*sin(rad)+y3*cos(rad),x1*cos(rad)-y1*sin(rad),x1*sin(rad)+y1*cos(rad));
outtextxy(200,50,"Rotated Object");
getch();
closegraph();
return 0;
}