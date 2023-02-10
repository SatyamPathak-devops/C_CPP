#include <stdio.h>

int main()
{   
   
    printf("\t**********MENU***********\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");
    printf("7. Sunday\n");
    
    
    char ch;
    printf("Enter the Initial character of the day in Menu: ");
    scanf("%c",&ch);
    
    
    switch(ch){
        case 'M': printf("It's Monday! ");
        break;
        case 't': printf("It's Tuesday!");
        break;
        case 'W': printf("It's Wednesday! ");
        break;
        case 'T': printf("It's Thursday!");
        break;
        case 'F': printf("It's Friday!");
        break;
        case 's': printf("It's Saturday!");
        break;
        case 'S': printf("It's Sunday!");
        break;
        default: printf("Invalid Option");
        
    }
    
    return 0;
}
