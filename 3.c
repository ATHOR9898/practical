#include <graphics.h>
#include <conio.h>
void main(){
int gd=DETECT,gm;
int xc=250,yc=200;
int r=100;
int x=0;
int y=r;
int p;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
p=1-r;
while(x<=y){
putpixel(xc+x,yc+y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc-x,WHITE);
x++;
if(p<0){
p=p+2*x+1;
}else{
y--;
p=p+2*(x-y)+1;
}
}
getch();
closegraph();
}