#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int limit,i,Searchkey,flag=0;
    int values[1000];

    printf("Enter the limit :");
    scanf("%d",&limit);

    for (i = 0; i < limit; i++)
    {
        printf("Enter the %d value:",i+1);
        scanf("%d",&values[i]);
    }

    printf("Enter the value for search :");
    scanf("%d",&Searchkey);
    
    for (i = 0; i <limit; i++)
    {
        if (Searchkey==values[i])
        {
            flag=1;
            break;
        }
        
    }

    if (flag==1)
    {
        printf("Value found in postion :%d",i+1);
    }else
    {
        printf("Not founded the searched value ");
    }
    
    
    return 0;
}