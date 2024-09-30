#include<stdio.h>
int max[10][10],alloc[10][10],need[10][10],avail[10],i,j,p,r,finish[10]={0},flag=0;
void main()
{
printf("\n\n simulation of deadlock prevention");
printf("enter no of processes,resources");
scanf("%d%d",&p,&r);
printf("enter allocation matrix");
for(i=0;i<p;i++)
for(j=0;j<r;j++)
scanf("%d",&alloc[i][j]);
printf("enter max matrix");
for(i=0;i<p;i++)
for(j=0;j<r;j++)
scanf("%d",&max[i][j]);
printf("enter available matrix");
for(i=0;i<r;i++)
scanf("%d",&avail[i]);
for(i=0;i<p;i++)
for(j=0;j<r;j++)
need[i][j]=max[i][j]-alloc[i][j];
fun();
if(flag==0)
{
if(finish[i]!=1)
{
printf("\n\n failing:mutual exclusion");
for(j=0;j<r;j++)
{
if(avail[j]<need[i][j])
avail[j]=need[i][j];
}
fun();
printf("\n by allocating required resources to process%d deadlock is prevented",i);
printf("\n\n lack of preemption");
for(j=0;j<r;j++)
{
if(avail[j]<need[i][j])
avail[j]=need[i][j]
alloc[i][j]=0;
}
fun();
printf("\n\n dead lock is prevented by allocating neededresources");
printf("\n\n failing:hold and wait condition");
for(j=0;j<r;j++)
{
if(avail[j]<need[i][j])
avail[j]=need[i][j];
}
fun();
printf("\n avoiding any one of the condition,u can prevent deadlock");
}
}
}
fun()
{
while(1)
{
for(flag=0,i=0;i<p;i++)
{
if(finish[i]==0)
{
for(j=0;j<r;j++)
{
if(need[][j]<=avail[i][j])
continue;
else
break;
}
if(j==r)
{
for(j=0;j<r;j++)
avil[j]+=alloc[i][j];
flag=1;
finish[i]=1;
}
}
}
if(flag==0)
break;
}
}

