/* to find armstrong of a number
date 13/2/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
	int n,rem,num,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	n=num;
	while(n>0)
		{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
		}
	if(num==sum)
		printf("armstrong");
	else
		printf("not");
}
	
	
