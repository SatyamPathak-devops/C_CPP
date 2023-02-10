#include<stdio.h>

int main(){
    
    int num;
    printf("Enter the Number: ");
    scanf("%d",num);

    int i = 1;
    do{
        printf("%d",i+num);
    }while(i<num);

    return 0;
}