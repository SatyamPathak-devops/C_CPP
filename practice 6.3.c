#include <stdio.h>


int main(){
    //increment operator
    //++i (pre increment)
    //i++ (post increment)
    //--i (pre decrement)
    //i-- (post decrement)
   int i = 1;

  printf("%d\n",i++); //use, then increase
  printf("%d\n\n",i);
   
   printf("%d\n",++i); //increase, then use
   printf("%d\n\n",i);
   
   printf("%d\n",i--); //use , then decrease
   printf("%d\n\n",i);
   
    printf("%d\n",--i); //decrease, then use
   printf("%d\n\n",i);

    return 0;
}