#include<stdio.h>
void main()
{
int num,digit=1,i,lim;
printf("enter the number");
scanf("%d",&num);
printf("enter the number");
scanf("%d",&lim);
for(i=1;i<=lim;i++)
{
digit=num*i;
printf("%d *%d=%d\n",num,i,digit);
}
}
