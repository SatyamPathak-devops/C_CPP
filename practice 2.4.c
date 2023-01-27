
#include <stdio.h>

int main()
{
    int a = 1.9999999999,b,c;
    printf("%d\n",a); //c does not round off , it completely removes the decimal
    printf("%d\n",a*b + b*c);
    printf("%d\n",5*2/2*5);
    printf("%d\n",5*(2/2)*3); //precedence

    printf("%d \n", 4==3); //relational
    


    return 0;
}
