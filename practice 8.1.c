#include<stdio.h>

int main(){
    
    int num,j;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum = 0;
    
    for(int j = num;j >= 1;j--){
        sum = sum+j;
        printf("%d\n",j);
    }
    
    printf("sum is %d\n",sum);


    
    return 0;
}