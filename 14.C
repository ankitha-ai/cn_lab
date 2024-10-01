#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
void push(char);
void disp(void);
char pop(void);
char s[100];
int t=0;
void main(void)
{
int i,j,k,l,c=1;;
char str[25],ch[10],s[100],x,y;
clrscr();
printf("enter the expression in postfix form \n");
scanf("%s",str);
printf("%s\n",str);
1=strlen(str);
printf("th e length of the postfix form is =%d\n",1);
for(i=0;i<1;i++)
{
if(str[i]!='+'&&str[i]!='*'&&str[i]!='/')
{
push(str[i]);
printf("%c\n",s[t]);
}
else
{
switch(str[i])
{
case'+':y=pop();
	x=pop();
printf("mul %c%c\n\n",x,y);
printf("mov %d,%c\n\n",c,x);
itoa(c,ch,10);
push(ch[0]);
++c;
break;
case'/':y=pop();
	x=pop();
printf("div %c%c\n\n",x,y);
printf("mov %d,%c\n\n",c,x);
itoa(c,ch,10);
push(ch[0]);
++c;
break;
case'/':y=pop();
	x=pop();
printf("mul %c%c\n\n",x,y);
printf("mov %d,%c\n\n",c,x);
itoa(c,ch,10);
push(ch[0]);
++c;
break;
case'/':y=pop();
	x=pop();
printf("mul %c%c\n\n",x,y);
printf("mov %d,%c\n\n",c,x);
itoa(c,ch,10);
push(ch[0]);
++c;
break;
}
}
disp();
     }
     getch();
}
void push()
{
char ch;
++t;
s[t]=ch;
}
char pop(void)
{
char c;
c=s[t];
--t;
return(c);
}
void disp(void)
{
int i;
for(i=0;i<=t;i++)
printf("%c",s[i]);
}


