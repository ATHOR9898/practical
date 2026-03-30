#include <graphics.h>
#include <conio.h>
typedef struct{int x,y;}Point;
void main(){
int gd=DETECT,gm;
int i,j,y;
int ymin,ymax;
int interX[10];
int count;
int x1,y1,x2,y2;
int x,temp;
Point poly[5]={{200,100},{300,150},{260,250},{140,250},{100,150}};
int n=5;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
for(i=0;i<n;i++){
line(poly[i].x,poly[i].y,poly[(i+1)%n].x,poly[(i+1)%n].y);
}
ymin=poly[0].y;
ymax=poly[0].y;
for(i=1;i<n;i++){
if(poly[i].y<ymin)ymin=poly[i].y;
if(poly[i].y>ymax)ymax=poly[i].y;
}
for(y=ymin;y<=ymax;y++){
count=0;
for(i=0;i<n;i++){
x1=poly[i].x;
y1=poly[i].y;
x2=poly[(i+1)%n].x;
y2=poly[(i+1)%n].y;
if((y1<=y&&y2>y)||(y2<=y&&y1>y)){
x=x1+(y-y1)*(x2-x1)/(y2-y1);
interX[count++]=x;
}
}
for(i=0;i<count-1;i++){
for(j=i+1;j<count;j++){
if(interX[i]>interX[j]){
temp=interX[i];
interX[i]=interX[j];
interX[j]=temp;
}
}
}
setcolor(GREEN);
for(i=0;i<count;i+=2){
line(interX[i],y,interX[i+1],y);
}
}
getch();
closegraph();
}