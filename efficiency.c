/*programme to find efficiency of worker"
name:migha maria joseph
date:20/2/19*/
#include<stdio.h>
void main()
{
	int time;
	printf("enter the time of worker");
	scanf("%d",&time);
	if((time>=2)&&(time<3))
		printf("worker is said to be highly efficient");
	if((time>=3)&&(time<4))
		printf("worker is ordered to improve speed");
	if((time>=4)&&(time<5))
		printf("worker  is given training to improve speed");
 	if(time>=5)
		printf("worker  is terminated");
}
