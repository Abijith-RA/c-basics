#include <stdio.h>
#include <stdlib.h>

int main(){

    int limit,i,value[1000],j,temp;
    int space=' ';

    printf("Enter the limit:");
    scanf("%d",&limit);

    for (i = 0; i < limit; i++)
    {
        printf("Enter the %d value:",i+1);
        scanf("%d",&value[i]);
    }

    for (i = 0; i < limit-1; i++)
    {
        for (j = i+1; j < limit ; j++)
        {
            if (value[i]>value[j])
            {
                temp=value[i];
                value[i]=value[j];
                value[j]=temp;
            }
            
        }        
    }
    printf("After sorted:");
    
    for (i = 0; i < limit; i++)
    {
        printf("%d,",value[i]);
    }
    return 0;
}