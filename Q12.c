#include<stdio.h>
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) // variables
{ 
    if (n == 1) 
    { 
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);   //this is spaces for store the disk  
        return; 
    } 
    
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);  // spacess
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); // position  large are  store in last 
	 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);  // final result 
} 
  
int main() 
{ 
    int n = 4; // Number of disks 
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0; 
} 


/*  
      ************
      *          *
      ************
   *****************
   *               *
   *****************
***********************
*                     *
***********************
*/
