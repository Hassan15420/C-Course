#include<stdio.h>
main()
{
	int i,temp;
	int hot=0,cold=0,pleasent=0,sum=0;
	for(i=1;i<=14;i++)
	{
		printf("Enter tempurature of day%d ",i);
		scanf("%d",&temp);
		if(temp >= 30)
		{
			hot++;
		}
		else if(temp > 20 && temp < 30)
		{
			pleasent++;
		}
		
		else if(temp  < 20)
		{
			cold++;
		}
		sum += temp;
	}
	
	float avg = sum / 14.0;
	printf("\nAverage tempurature is %.2f",avg);
	printf("\nHot days in two weeks is %d",hot);
	printf("\nCold days in two weeks is %d",cold);
	printf("\nPleasent days in two weeks is %d",pleasent);
}
