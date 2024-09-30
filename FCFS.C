#include<stdio.h>
int main()
{
int incomingstream[]={4,1,2,4,5};
int pageFaults=0;
int frames=3;
int m,n,s,pages;
pages=size(incomingstream)/sizeof(incomingstream[0]);
printf("\n incoming \t frame 1 \t frame 2\t frame 3");
int temp[frames];
for(m=0;m<frames;m++)
{
temp[m]=-1;
}
for(m=0;m<pages;m++)
{
s=0;
for(n=0;n<frames;n++)
{
if(incomingstream[m]==temp[n])
{
s++;
pageFaults--;
}
}
pageFaults++;
if((pageFaults<=frames)&&(s==0))
{
temp[m]=incomingstream[m];
}
else if(s==0)
{
temp[(pageFaults-1)%frames]=incomingstream[m];
}
printf("\n");
printf("%d\t\t",incomingstream[m]);
for(n=0;n<frames;n++)
{
if(temp[n]!=-1)
printf("%d\t\t\t",temp[n]);
else
printf("-\t\t\t");
}
}
printf("\n total page faults:\t%d\n",pageFaults);
return 0;
}