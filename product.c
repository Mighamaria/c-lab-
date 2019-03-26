/*programe to find product
	date:20/3/19
	name:migha maria joseph*/
#include <stdio.h>
float pdt(int number1,float number2);
void main()
{
	int number1;float number2;
	float value;
	printf("enter one in integernumber and other in float");
	scanf("%d%f",&number1,&number2);
	value = pdt(number1,number2);
	printf("the product is %f",value);
}
float pdt(int number1,float number2)
{
	float product;
	product=number1*number2;
	return product;
}

