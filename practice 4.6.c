#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age to check whether you're legal or not: ");
    scanf("%d",&age);
    
    age>= 18 ? printf("You're an Adult!\n") : printf("You're not an Adult.\n");

    return 0;
}
