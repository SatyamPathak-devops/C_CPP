#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    printf("Enter First Number: ");
    scanf("%d",&x);
    printf("Enter Second Number: ");
    scanf("%d",&y);
    printf("Enter Third Number: ");
    scanf("%d",&z);
    int a = (x+y+z);
    int b = (a/3);
    printf("The Average of the given 3 numbers is %d",b);
    
    
    
    return 0;
}
