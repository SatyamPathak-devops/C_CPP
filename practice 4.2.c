#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Digit: ");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("It a digit!");
    }
    else
    {
        printf("it is not a Digit!");
    }
    return 0;
}