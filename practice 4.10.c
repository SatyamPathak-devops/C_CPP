#include <stdio.h>

int main()
{   
   
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks <= 30)
    { printf("You've FAILED!!!");
    }
    else if(marks>=30 && marks<=100){
        printf("You've PASSED!");
    }else{
        printf("Wrong marks");
    }
    
    return 0;
}
