#include <stdio.h>

int main()
{   int marks;
    printf("Enter Marks (0-100): ");
    scanf("%d",&marks);
    
    if(marks<30){
        printf("You got C grade!");
    }else if(marks >= 30 && marks < 70){
        printf("You got B grade");
    }else if(marks >= 70 && marks < 90){
        printf("You got A grade");
    }else if(marks >= 90 && marks <= 100){
        printf("You got A+ grade");
    }else{
        printf("Wrong Input");
    }
        
    
    
    return 0;
}
