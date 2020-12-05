#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of lines you want: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(a%2!=0)
            {
                if(i==a/2 &&  j==a/2)
                printf("0 ");
                else
                printf("1 ");
            }
            else
            {
                if((i==a/2 &&  j==a/2) || (j==(a/2)-1 && i==a/2) || (j==(a/2)-1 && i==(a/2)-1) || (j==a/2 && i==(a/2)-1))
                printf("0 ");
                else
                printf("1 ");
            }
        }
        printf("\n");
    }
        return 0;
  }