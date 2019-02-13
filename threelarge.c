/*programe to find greatest of three numbers
  author:migha maria joseph
  date:6/2/19
*/
#include<stdio.h>
void main()
{
	int number1,number2,number3;
	printf("enter the three interger numbers\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	if((number1>number2)&&(number1>number3))
		printf("%d is greater ",number1);
	else
	{ 
		if((number2>number1)&&(number2>number3))
			printf("%d is greater ",number2);

		else

			printf("%d is greater ",number3);
	}
}
