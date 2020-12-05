#include <stdio.h>
int main()
{
    printf("ASCII-->Character\n\n");
    for(int i=33;i<=126;i++)
    {
        printf("%d-->%c\t\t",i,i);
    }
    return 0;
}
