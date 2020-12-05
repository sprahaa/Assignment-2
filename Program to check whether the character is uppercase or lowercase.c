#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet : ");
    scanf("%c",&c);
    if (c>='a' && c<='z')
    {
        printf("This alphabet is lowercase");
    }
    else if (c>='A' && c<='Z')
    {
        printf("This alphabet is uppercase");
    }
    else
    {
        printf("The input character is not an alphabet");
    }
    return 0;
}
