// 1) Write the program to implement CPU & scheduling algorithm for first come first serve scheduling.

#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
void main(){
int gd=DETECT,gm;
float x1,y1,x2,y2;
float dx,dy,xinc,yinc,x,y;
int steps,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter starting point (x1 y1): ");
scanf("%f%f",&x1,&y1);
printf("Enter ending point (x2 y2): ");
scanf("%f%f",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(fabs(dx)>fabs(dy))
steps=fabs(dx);
else
steps=fabs(dy);
xinc=dx/steps;
yinc=dy/steps;
x=x1;
y=y1;
for(i=0;i<=steps;i++){
putpixel((int)(x+0.5),(int)(y+0.5),WHITE);
x=x+xinc;
y=y+yinc;
}
getch();
closegraph();
}