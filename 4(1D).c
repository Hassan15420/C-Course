#include <stdio.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int i,n1,n2, sum1=0,sum2=0,result;
     // 1st Array 
    printf("Enter size of the array1: ");
    scanf("%d", &n1);

    
    printf("Enter %d elements in the array: ", n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    
    for(i=0; i<n1; i++)
    {
        sum1 = sum1 + arr1[i];
    }


    printf("Sum of all elements of array = %d", sum1);
    
    printf("\n");
    
    printf("Enter size of the array2: ");
    scanf("%d", &n2);
   
   
   // 2nd array 
   
    printf("Enter %d elements in the array: ", n1);
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    for(i=0; i<n2; i++)
    {
        sum2 = sum2 + arr2[i];
    }


    printf("Sum of all elements of array = %d", sum2);
    
	printf("\n");
	// sum of both arrays elements 
	
    result=sum1+sum2;
    printf("The sum of arrays=%d",result);

    return 0;
    
}
