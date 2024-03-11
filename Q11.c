#include<stdio.h>
/*#define N=4
int board[100][100];*/

void printSolution(int board[4][4]) 
{ 
    int k = 1 , i ,j ; 
    printf("%d-\n",k++); 
    for (i = 0; i < 4; i++) 
    { 
        for (j = 0; j < 4; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
    printf("\n"); 
} 
bool  isSafe(void);
boolean isSafe(int board[4][4], int row, int col) 
{ 
    int i, j; 
  
    /* Check this row on left side */
    for (i = 0; i < col; i++)
	{
    	if (board[row][i]){
    		return false;
		}
	}
  for (i=row, j=col; i>=0 && j>=0; i--, j--)
  {
  	
        if (board[i][j]) {
        	return false;
        }
  } 
  for (i=row, j=col; j>=0 && i<N; i++, j--)
  {
  	if (board[i][j]) 
	  {
  		return false;
  	  }
                
  }
return true;

bool solveNQUtil(int board[N][N], int col)
{
    if (col == N) 
    { 
        printSolution(board); 
        return true; 
    }  
    bool res = false; 
    for (int i = 0; i < N; i++) 
    {
    	 if ( isSafe(board, i, col) )
		 {
		   board[i][col] = 1;
		   res = solveNQUtil(board, col + 1) || res;
		   board[i][col] = 0;
	     }
	
	}
	return res;
}
void solveNQ() 
{ 
    int board[N][N]; 
    memset(board, 0, sizeof(board)); 
  
    if (solveNQUtil(board, 0) == false) 
    { 
        printf("Solution does not exist"); 
        return ; 
    } 
  
    return ; 
}
int main() 
{ 
    solveNQ(); 
    return 0; 
}  
  
