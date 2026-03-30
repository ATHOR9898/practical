#include <graphics.h>
#include <stdio.h>
#define MAX 20
int xmin=100,ymin=100,xmax=300,ymax=300;
typedef struct{int x,y;}Point;
int inside(Point p,int edge){
if(edge==0)return p.x>=xmin;
if(edge==1)return p.x<=xmax;
if(edge==2)return p.y>=ymin;
if(edge==3)return p.y<=ymax;
return 0;
}
Point intersect(Point p1,Point p2,int edge){
Point p;
float m=0;
if(p2.x!=p1.x)m=(float)(p2.y-p1.y)/(p2.x-p1.x);
if(edge==0){
p.x=xmin;
p.y=p1.y+m*(xmin-p1.x);
}
else if(edge==1){
p.x=xmax;
p.y=p1.y+m*(xmax-p1.x);
}
else if(edge==2){
p.y=ymin;
if(p2.x!=p1.x)p.x=p1.x+(ymin-p1.y)/m;
}
else if(edge==3){
p.y=ymax;
if(p2.x!=p1.x)p.x=p1.x+(ymax-p1.y)/m;
}
return p;
}
int clipPolygon(Point in[],int n,int edge,Point out[]){
Point curr,prev;
int i,count=0;
prev=in[n-1];
for(i=0;i<n;i++){
curr=in[i];
if(inside(curr,edge)){
if(!inside(prev,edge))out[count++]=intersect(prev,curr,edge);
out[count++]=curr;
}
else if(inside(prev,edge)){
out[count++]=intersect(prev,curr,edge);
}
prev=curr;
}
return count;
}
int main(){
int gd=DETECT,gm;
Point poly[MAX],out1[MAX],out2[MAX];
int n=4;
int i;
poly[0].x=50;poly[0].y=150;
poly[1].x=200;poly[1].y=50;
poly[2].x=350;poly[2].y=150;
poly[3].x=200;poly[3].y=350;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(xmin,ymin,xmax,ymax);
setcolor(WHITE);
for(i=0;i<n;i++)
line(poly[i].x,poly[i].y,poly[(i+1)%n].x,poly[(i+1)%n].y);
n=clipPolygon(poly,n,0,out1);
n=clipPolygon(out1,n,1,out2);
n=clipPolygon(out2,n,2,out1);
n=clipPolygon(out1,n,3,out2);
setcolor(RED);
for(i=0;i<n;i++)
line(out2[i].x,out2[i].y,out2[(i+1)%n].x,out2[(i+1)%n].y);
getch();
closegraph();
return 0;
}