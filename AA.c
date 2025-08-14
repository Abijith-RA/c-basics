#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2,choice;
    float Result;
    printf("Enter two numbers :");
    scanf("%d%d",&num1, &num2);
    printf("Select choice below\n1 for Addition\n2 for Subsraction\n3 for multipilication\n4 for Division");
    scanf("%d",&choice);
    if (choice==1)
    {
        Result=num1+num2;
        printf("The sum of %d and %d is %.2f",num1,num2,Result);
    }else if (choice==2)
    {
        Result=num1-num2;
        printf("The sub of %d and %d is %.2f",num1,num2,Result);
    }else if (choice==3)
    {
        Result=num1*num2;
        printf("The multi of %d and %d is %.2f",num1,num2,Result);
    }else if (choice==4)
    {
        if (num2==0)
        {
            printf("The number Division by zero can't possible");
        }else{
        Result=num1/num2;
        printf("The Division of %d and %d is %.2f",num1,num2,Result);
        }
    }else{
    printf("Enter a vaild choice");
    }
    return 0;
}