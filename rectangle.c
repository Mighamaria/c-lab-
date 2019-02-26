/*programme to find area of rectanle greaterthan its perimeter
name:Migha Maria Joseph
date:20/02/19*/
#include<stdio.h>
void main()
{	
	int length,breadth,area=1,perimeter;
	printf("enter the length and breadth");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		printf("area is greater than perimeter");
	else
		printf("area is not greater than perimeter");
}


