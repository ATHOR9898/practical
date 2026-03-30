#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#define INSIDE 0
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8
int xmin=100,ymin=100,xmax=300,ymax=300;
int computeCode(int x,int y){
int code=INSIDE;
if(x<xmin)code|=LEFT;
else if(x>xmax)code|=RIGHT;
if(y<ymin)code|=BOTTOM;
else if(y>ymax)code|=TOP;
return code;
}
void cohenSutherland(int x1,int y1,int x2,int y2){
int code1=computeCode(x1,y1);
int code2=computeCode(x2,y2);
int accept=0;
while(1){
if((code1==0)&&(code2==0)){
accept=1;
break;
}
else if(code1&code2){
break;
}
else{
int codeOut;
float x,y;
if(code1!=0)codeOut=code1;
else codeOut=code2;
if(codeOut&TOP){
x=x1+(x2-x1)*(ymax-y1)/(float)(y2-y1);
y=ymax;
}
else if(codeOut&BOTTOM){
x=x1+(x2-x1)*(ymin-y1)/(float)(y2-y1);
y=ymin;
}
else if(codeOut&RIGHT){
y=y1+(y2-y1)*(xmax-x1)/(float)(x2-x1);
x=xmax;
}
else if(codeOut&LEFT){
y=y1+(y2-y1)*(xmin-x1)/(float)(x2-x1);
x=xmin;
}
if(codeOut==code1){
x1=x;
y1=y;
code1=computeCode(x1,y1);
}
else{
x2=x;
y2=y;
code2=computeCode(x2,y2);
}
}
}
if(accept){
setcolor(RED);
line(x1,y1,x2,y2);
}
}
int main(){
int gd=DETECT,gm;
int x1=50,y1=50,x2=350,y2=350;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(xmin,ymin,xmax,ymax);
setcolor(WHITE);
line(x1,y1,x2,y2);
cohenSutherland(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}