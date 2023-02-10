#include <stdio.h>

int main()
{   
   
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("The number is Positive.\n");
        if(num % 2 == 0)
        {
            printf("The Number is even.\n");
        }
        else
        {
            printf("The Number is odd.\n");
        }
    }
    else
    {
        printf("The Number is Negative.\n");
    }
    return 0;
}
