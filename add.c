/* to find armstrong of a number
date 06/03/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
int i,j,add,fact=1,sum=0;
 
for(i=0;i<=7;i++)
{
for(j=0;j<=7;j++)
{
	fact=fact*i;
}
	sum=sum+(1/fact);
}
printf("sum is %d",sum);
}

