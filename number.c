/* to receive a numberand find its octal equivalent
date 06/03/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
int n,num,rem,sum=0,count=1;

printf("enterthe number");
scanf("%d",&num);
n=num;
while(n>0)
{
	
	rem=n%8;
        sum=(rem*count)+sum;
	count=count*10;
	n=n/8;
}
										
printf(" octaequivalent of number is%d",sum);
}
