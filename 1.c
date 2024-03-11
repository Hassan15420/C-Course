#include<stdio.h>
main()
{
	int marks[5][4]; // 5 student marks of 4 subjects 
	int i,j,sum=0;
	float per;
	
	for(i=0;i<5;i++) //
	{
		printf("\nEnter marks of Student %d:\n",i+1); //i=0 then print 1 students marks i+1=> 0+1=> 1
		
		for(j=0;j<4;j++)                  // marks loop 
		{
		  scanf("%d",&marks[i][j]);	     //inputs of marks
				    
		}
	    
	 } 
	 
	 
	 for(i=0;i<5;i++)
	{
		printf("\nResult of Student %d",i+1);   //result of 1 by 1 student  
		for(j=0;j<4;j++)
		{
		
		   sum += marks[i][j];        	
		} 
		per = sum * 100.0 / 400.0;   // percentage of  student 1 by 1 
		printf("\nTotal Marks %d",sum);// total percentage of all students
		printf("\nPercentage is %.2f",per);
		sum=0;
		per=0;
		
	 } 
	 
	 
	 
	
}
