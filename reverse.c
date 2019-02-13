/* to reverse a number
date 13/2/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
	int rem,rev=0,num;
	printf("enter the number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("the reverse of a number is %d",rev);
}

