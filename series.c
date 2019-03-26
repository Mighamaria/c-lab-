#include<stdio.h>
void main()
{
float i=1,fact=1;
 float sum=0;
while(i<=7)
{
	fact*=i;
	sum=sum+(1/fact);
	i++;
}
printf("sum is %f",sum);
}
