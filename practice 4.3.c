#include <stdio.h>
int main()
{   int a,b,c;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    if(a>b )
    {
        c = b;
    }
    else
    {
        c = a;
    }
    printf("The Smallest Number is %d",c);
    return 0;
}