/*programe to find product
	date:20/3/19
	name:migha maria joseph*/
#include <stdio.h>
void binary(int number);
void main()
{
	int number;
	printf("enter no:");
	scanf("%d",&number);
	binary(number);
	
}
void binary(int number)
{
	int count=1,remainder,reverse=0;
	while(number!=0)
{
		remainder=number%2;
		reverse=reverse+(remainder*count);
		count=count*10;
		number=number/2;
}
	printf("binary value is%d",reverse);
}

