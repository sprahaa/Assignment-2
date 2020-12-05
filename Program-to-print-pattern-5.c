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
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
