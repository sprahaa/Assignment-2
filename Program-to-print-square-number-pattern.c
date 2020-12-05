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
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}