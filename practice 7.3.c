#include <stdio.h>

int main()
{   int num;
    int i = 0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    while(i<=num){
    printf("%d\n",i);
    i++;
    }

    return 0;
}
