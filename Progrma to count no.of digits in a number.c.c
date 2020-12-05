#include <stdio.h>

int main()
{
    int n,c=0;
    printf("Please enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    printf("Number of digits in the given number are %d",c);

    return 0;
}
