#include<stdio.h>
main()
{
	int expense[5][7];
	int i,j,week=0,Total=0,day;
	//week 1
	for(i=0;i<5;i++)
	{
		printf("\nEnter Expense of Student %d:\n",i+1);
		
		for(j=0;j<7;j++)
		{
			printf("day%d: ",j+1);
		   scanf("%d",&expense[i][j]);	 // input of expensive 
		}
		
	 } 
	 
	 // week 2 
	 for(i=0;i<5;i++)      //for Student 
	{
		
		for(j=0;j<7;j++)    // weekly
		{
		
		   week += expense[i][j];
		   Total += expense[i][j];	
		   
		}
		printf("\nExpense of Student %d of week",i+1); 
		printf(" %d",week);
	
		week=0;
	
	 } 
	 
	 printf("\nTotal Expense of whole Students is %d",Total); // total expense of ALL student of 2 weeks 
	 
	 
	 // All students whole Day expensives 
	 for(i=0;i<7;i++) 
	{
		printf("\nExpense of Day %d of whole Students",i+1);
		for(j=0;j<5;j++)
		{
		
		   day += expense[j][i];
		   
		}
		printf(" %d",day);
         day = 0;
	
	 }  
	 
	
}
