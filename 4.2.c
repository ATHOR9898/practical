#include <graphics.h>
#include <conio.h>
#include <dos.h>
void floodFill(int x,int y,int old_color,int fill_color){
if(getpixel(x,y)==old_color){
putpixel(x,y,fill_color);
delay(1);
floodFill(x+1,y,old_color,fill_color);
floodFill(x-1,y,old_color,fill_color);
floodFill(x,y+1,old_color,fill_color);
floodFill(x,y-1,old_color,fill_color);
}
}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
rectangle(150,100,300,250);
floodFill(200,150,BLACK,GREEN);
getch();
closegraph();
}