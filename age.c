/*to find youngest among three
name:MIGHA MARIA JOSEPH
date:20/2/19*/
#include<stdio.h>
void main()
{
	int age1,age2,age3;
	printf("enter the age of ram,sham,ajay:");
	scanf("%d%d%d",& age1,&age2,&age3);
	if((age1<age2)&&(age1<age3))
		printf("ram is smallest");
	if((age2<age1)&&(age2<age3))
		printf("sham is smallest");
	if((age3<age1)&&(age3<age2))
		printf("ajay is smallest");
}

	


