/* to reverse a number
date 13/2/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
	int rem,rev=0,num,n;
	printf("enter the number");
	scanf("%d",&num);
	n=num;
	while(n>0)
		{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
		}
	if(num==rev)
		printf("palindrome");
	else
		printf("not");
}
	
