#include <stdio.h>

int main(void) {

    int limit,i,value[100];
    int sum=0;

    printf("Enter the limit :");
    scanf("%d",&limit);

    for (i = 0; i < limit; i++)
        {
            printf("Enter the %d value :",i+1);
            scanf("%d",&value[i]);
            
        }
    for (i = 0; i < limit; i++)
    {
        sum=sum+value[i];
    }
    printf("Result =%d",sum);
    return 0;
}