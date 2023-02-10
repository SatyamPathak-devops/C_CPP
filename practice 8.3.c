#include<stdio.h>

int main(){
    
    int num;
  
    for(int i = 0;i<=5;i++){
        if(i == 3){
            break;
    }
    printf("%d\n",i);
    }
    printf("End");
    return 0;
}