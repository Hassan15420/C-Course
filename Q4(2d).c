#include<stdio.h>
void two_array(int row,int col);
int main()
{
int row,col;
	printf("please enter size of rows  : \n");
	scanf("%d",&row);
		printf("please enter size of rows  : \n");
	scanf("%d",&col);
	
		 two_array(row,col);




}

void two_array(int row,int col)
{
	int i,j;
		printf("please enter array values: \n");
int arr[row][col];
int arr2[row][col];
int arr3[row][col];
//1st array 
for(i=0;i<row;i++)
{
			for(j=0;j<col;j++)
		{
					printf("please enter array value  at index [%d][%d] :",i,j);

			scanf("%d",&arr[i][j]);
		}	
		printf("\n");
}

// 2nd array 
		printf("please enter array 2 values: \n");


for(i=0;i<row;i++)
{
			for(j=0;j<col;j++)
		{
					printf("please enter array value  at index [%d][%d] :",i,j);


			scanf("%d",&arr2[i][j]);
		}	
		printf("\n");
}

		printf("Sum of 2d array is   : \n");


//sum of both array and store in 3rd empty array 
for(i=0;i<row;i++)
{
			for(j=0;j<col;j++)
		{
				


         arr3[i][j]=arr[i][j]+arr2[i][j];
		}	
		printf("\n");
}
//answers index by index 
for(i=0;i<row;i++)
{
			for(j=0;j<col;j++)
		{
			printf("value at index %d %d is : [%d][%d}  \t",i,j,arr3[i][j]);		
		}	
printf(" \n");

}

}

