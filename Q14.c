#include <stdio.h>

int main()
{
    int number, positive = 0, negative = 0, zero = 0;
    char choice;

    do
    {
        printf("Enter a number :");
        scanf("%d", &number);

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
        printf("Do you want to Continue(y/n)? ");
		scanf("%c", &choice);
        

    }while (choice == 'y' || choice == 'Y');

    
	
	
	

    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d", positive, negative, zero);
  
	
    return 0;
    

}

