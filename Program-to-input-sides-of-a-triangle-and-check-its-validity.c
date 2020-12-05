#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides the triangle : ");
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y+z || y>=x+z || z>=x+y)
    {
        printf("This Triangle is invalid");
    }
    else
    {
        printf("This Triangle is valid");
    }
    return 0;
}