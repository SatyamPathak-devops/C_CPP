#include <stdio.h>

int main()
{
    int age = 10;
    char star = '*';
    float pi = 3.14;
    char hashtag = '#';
    char EMail[100] =  "Satyam1003@gmail.com"; //single line comment
    
    /* MUltiline
    comment */
    
    printf("Hello C");
    printf("Hello C\n");
    printf("Hello C\n");
    printf("Hello C\n");
    printf("age is %d\n",age);
    printf("value of pi is %f\n",pi);
    printf("star is denoted as %c\n",star);
    
    printf("Enter age: ");
    scanf("%d",&age);
    printf("The age is %d\n",age);
    
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    printf("The sum of a + b = %d\n",a + b); //can be done by creating sum as as a variable too but this is the easier method
    
    

    
    return 0;
}
