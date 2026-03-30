#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int d=200;
void project(int x,int y,int z,int *xp,int *yp){
*xp=x+(z*x)/d;
*yp=y+(z*y)/d;
}
int main(){
int gd=DETECT,gm;
int x[8]={100,150,150,100,120,170,170,120};
int y[8]={100,100,150,150,120,120,170,170};
int z[8]={0,0,0,0,50,50,50,50};
int xp[8],yp[8];
int i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=0;i<8;i++)
project(x[i],y[i],z[i],&xp[i],&yp[i]);
line(xp[0],yp[0],xp[1],yp[1]);
line(xp[1],yp[1],xp[2],yp[2]);
line(xp[2],yp[2],xp[3],yp[3]);
line(xp[3],yp[3],xp[0],yp[0]);
line(xp[4],yp[4],xp[5],yp[5]);
line(xp[5],yp[5],xp[6],yp[6]);
line(xp[6],yp[6],xp[7],yp[7]);
line(xp[7],yp[7],xp[4],yp[4]);
line(xp[0],yp[0],xp[4],yp[4]);
line(xp[1],yp[1],xp[5],yp[5]);
line(xp[2],yp[2],xp[6],yp[6]);
line(xp[3],yp[3],xp[7],yp[7]);
outtextxy(50,50,"3D Cube - VR Modeling");
getch();
closegraph();
return 0;
}