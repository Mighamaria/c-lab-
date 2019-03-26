/*programe to find product
	date:20/3/19
	name:migha maria joseph*/
#include <stdio.h>
int average(int mark1,int mark2,int mark3);
int percent(int mark1,int mark2,int mark3);
void main()
{
	int mark1,mark2,mark3,value2;
	int value1;
	printf("enter the mark of3 subjects");
	scanf("%d%d%d",&mark1,&mark2,&mark3);
	value1=average(mark1,mark2,mark3);
	value2=percent(mark1,mark2,mark3);
	printf("average  is%d ",value1);
	printf("percentage  is%d",value2);
}
int average(int mark1,int mark2,int mark3)
{
	int sum;
	int average;
	sum=mark1+mark2+mark3;
	average	=sum/3;
	return average;
}	
int percent(int mark1,int mark2,int mark3)	
{
	int sum, percent;
	sum=mark1+mark2+mark3;
	percent=(sum*100)/300;
	return percent;
}



