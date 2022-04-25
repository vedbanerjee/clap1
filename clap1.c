#include <stdio.h>
//VED BANERJEE
//RA2111003011885
int main(void)
{
    int a,b;
    printf("Enter values of a and b: ");
    scanf("%d %d",&a,&b);

    //Arthimetic Operators
    printf("Additon is %d",a+b);
    printf("Subtraction is %d",a-b);
    printf("Multiplication is %d",a*b);
    printf("Division is %d",a/b);
    printf("Modulus is %d",a%b);

    //Relational and Logical Operators
    if(a>=20&&b<20){
        printf("a is greater than equal to 20 and b is less than 20");
    }
    else if(b<=10||a!=20){
        printf("b is lesser than equal to 10 or a is not equal to 20");
    }

    //Bitwise Logical Operators
    printf("AND of a and b is %d",a&b);
    printf("OR of a and b is %d",a|b);
    printf("XOR of a and b is %d",a^b);
    printf("Complement of a is %d",~a);

    //Shift Operators 
    printf("Right shift of a by 2 is %d",a>>2);
    printf("Left shift of b by 4 is %d",b<<4);
    
    //Increment and Decrement Operators
    printf("Incremented value of a is %d",++a);
    printf("Decremented value of b is %d",--b);
    return 0;
}