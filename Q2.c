#include <stdio.h>
void my();

int main()
{
	my();
	
	return 0;
}

void my()
{
	int r,c;
	printf("Enter no of rows: ");
	scanf("%d",&r);
	printf("Enter no of columns: ");
	scanf("%d",&c);
	
	int m[r][c];
				  
	int row,col;
	
	for(row=0; row<r; row++) // row 
	{
		for(col=0; col<c; col++) //column 
		{
			//diagonal
			if(row==col)
			{
				m[row][col] =      0;
			}
			
			//upper triangle
			if(row<col)
			{
				m[row][col] =      1;
			}
			
			//lower triangle
			if(row>col)
			{
				m[row][col] =  -1;
			}
		}
	}
	
	for(row=0; row<r; row++)
	{
	
		for(col=0; col<c; col++)
		{
			printf("%d " , m[row][col]);
		}
		
		printf(" \n");
	}
	
}
