// 10) To study and implement disk scheduling algorithms : Shortest Seek Time First (SSTF)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,j,head,total=0,closest,idx,dist,min;
int req[50],visited[50];

clrscr();

printf("Enter number of requests: ");
scanf("%d",&n);

printf("Enter request sequence:\n");
for(i=0;i<n;i++)
{
scanf("%d",&req[i]);
visited[i]=0;
}

printf("Enter initial head position: ");
scanf("%d",&head);

for(i=0;i<n;i++)
{
min=10000;
for(j=0;j<n;j++)
{
if(!visited[j])
{
dist=abs(head-req[j]);
if(dist<min)
{
min=dist;
closest=req[j];
idx=j;
}
}
}
total+=min;
head=closest;
visited[idx]=1;
printf("%d -> ",head);
}

printf("\nTotal seek time = %d",total);

getch();
}