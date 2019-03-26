/* to find armstrong of a number
date 06/03/19
Name Migha Maria Joseph*/
#include<stdio.h>
void main()
{
	int num,n,rem;
	for(num=100;num<=500;num++)
	{
	n=num;
	int sum=0;
	while(n>0)
		{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
		
		}
	if(num==sum)
		
		printf(" %d",num);
		}
		
	
		
}	
