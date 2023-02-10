#include <stdio.h>

int main()
{   
   
    printf("\t**********MENU***********\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    
    int ch;
    printf("Enter the Number in Menu: ");
    scanf("%d",&ch);
    
    
    switch(ch){
        case 1: printf("Thank you for choosing Option 1");
        break;
        case 2: printf("Thank you for choosing Option 2");
        break;
        case 3: printf("Thank you for choosing Option 3");
        break;
        default: printf("Invalid Option");
        
    }
    
    return 0;
}
