#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age to check whether you're legal or not: ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("You're Legal!");
    }
    else
    {
        printf("There's still time for you to be legal.");
    }

    return 0;
}
