#include <stdio.h>

int main()
{   int ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    
    if(ch >= 'a' && ch <= 'z'){
        printf("Lower Case");
    }else if(ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }else{
        printf("Wrong input");
    }
   
    return 0;
}