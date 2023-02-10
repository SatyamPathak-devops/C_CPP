#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age to check whether you're legal or not: ");
    scanf("%d",&age);
    if(age>=18 && age<=24)
    {
        printf("You're Beer Legal!");
    }
    else if(age>=24 && age<=40)
    {
        printf("You're Hard Liquor Legal!");
    }
    else if(age>=60)
    {
        printf("You should be drinking medicine.");
    }

    else
    {
        printf("You're Sports drink legal.");
    }

    return 0;
}
