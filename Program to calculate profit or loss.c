#include <stdio.h>
int main()
{
    int sell,cost;

    printf("Please enter the Cost Price : ");
    scanf("%d",&cost);
    printf("Please enter the Sell Price : ");
    scanf("%d",&sell);
    if(sell==cost)
    {
        printf("No profit or loss happened in the transaction ");
    }
    else if(sell>cost)
    {
        printf("There is a profit of %d percent",100*(sell-cost)/cost);
    }
    else if(sell<cost)
    {
        printf("There is a loss of %d percent",100*(sell-cost)/cost);
    }
    return 0;
}

