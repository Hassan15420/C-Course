#include<stdio.h>
main()
{
	guess();
}

int guess()
{
	int rnd = 88;
int num;
	do
	{
			rnd = rand()%100+1;
	       printf("\n%d",rnd);		
			
	printf("\nEnter any number ");
	scanf("%d",&num);
	if(num > 0)
	{
			if(num > rnd)
	{
		printf("\nYou pass Long number");
	}
	else if(num < rnd)
	{
		printf("\nYou pass Short number");
	}
	else if(num == rnd)
	{
		printf("\n Congratulation:");
	}	
	}

	
	else
	{
		break;
	}
		
	}
	while(num!=rnd);
	
	
}
