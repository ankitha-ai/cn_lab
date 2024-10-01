#include<stdio.h>
#include<conio.h>
void main()
{
char sender[50],receiver[50];
int i,winsize;
clrscr();
printf("\n enter the windows size:");
scanf("%d",&winsize);
printf("\n sender window is expanded to store message or window \n");
printf("\n enter the data to be sent :");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=null;
printf("\n message send by the sender:\n");
puts(sender);
printf("\n window size of receiveris expanded \n");
printf("\n acknowledgment from receiver \n");
for(i=0;i<winsize;i++)
printf("\n ack: %d",i);
printf("\n message recieved by receiver is :");
puts(receiver);
printf("\n window size of receiver is shrined\n"):
getch();
}