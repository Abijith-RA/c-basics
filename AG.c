#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a,i,flag=0;

    printf("Enter the limit in number :");
    scanf("%d",&a);

    for(i=2;i<a;i++){
        if (a%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Prime number");
    }else{
        printf("Not prime");
    }
    
    return 0;
}