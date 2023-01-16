#include <stdlib.h>
#include <math.h> //used for pow function

int main()
{
    int a = 43;
    int b = a;
    int c = b * 6;
    int d = 1,e;
    
    int oldAge = 22;
    int newAge = oldAge; //+ years;
    int years = 2; //invalid as var is decalred below executing for (std::vector<type>::const_iterator i = container.begin(); i != container.end(); ++i) {
      
    int x,y,z;
    x = y = z = 2; //declaring multiple variable values in one line
      
    //int x = y = z = 4; //invalid as you cannot decalre and use variables in the same line
    
    //arithematic operations
    int q = 1,r = 5;
    int sum = q + r;
    int multiply = q*r;
    
    //int b + c = a; //not valid
    //int d = bc; //not valid
    //int a = b^c; //not valid //for using power function in  pow(x,y) = x raise to y
    
    int power = pow(b,c);
    printf("%d",power);
    
    
    
    
    return 0;

}