#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
int main(){
int gd=DETECT,gm;
int px=300,py=400;
int ex=300,ey=0;
char ch;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
randomize();
while(1){
cleardevice();
setcolor(WHITE);
rectangle(200,0,440,480);
setcolor(BLUE);
rectangle(px,py,px+40,py+60);
outtextxy(px+5,py+20,"YOU");
setcolor(RED);
rectangle(ex,ey,ex+40,ey+60);
outtextxy(ex+5,ey+20,"CPU");
ey+=10;
if(ey>480){
ey=0;
ex=220+rand()%180;
}
if(px<ex+40&&px+40>ex&&py<ey+60&&py+60>ey){
cleardevice();
outtextxy(250,240,"GAME OVER!");
getch();
break;
}
if(kbhit()){
ch=getch();
if(ch==27)break;
if(ch==0){
ch=getch();
if(ch==75&&px>210)px-=20;
if(ch==77&&px<380)px+=20;
}
}
delay(100);
}
closegraph();
return 0;
}