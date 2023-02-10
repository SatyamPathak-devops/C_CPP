#include <stdio.h>

int main()
{  int x,arm = 0,r,temp;
    printf("Enter any Number: ");
    scanf("%d",&x);
    temp=x;
    
    while(x>0){
        r=x%10;
        arm=(r*r*r)+arm;
        x=x/10;
    }
    if(temp==arm){
        printf("It is Armstrong Number");
        
    }else{
        printf("Not Armstrong Number");
    }
  
    
   
    return 0;
}