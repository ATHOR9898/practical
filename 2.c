#include <graphics.h>
#include <conio.h>
void main(){
int gd=DETECT,gm;
int x1=200,y1=50;
int x2=500,y2=300;
int dx,dy,p,x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
dx=x2-x1;
dy=y2-y1;
p=2*dy-dx;
x=x1;
y=y1;
putpixel(x,y,WHITE);
while(x<x2){
x=x+1;
if(p<0){
p=p+2*dy;
}else{
y=y+1;
p=p+2*dy-2*dx;
}
putpixel(x,y,WHITE);
}
getch();
closegraph();
}