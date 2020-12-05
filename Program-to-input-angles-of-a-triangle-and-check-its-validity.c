#include <stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the angles of triangle in degrees : ");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y+z==180)
    {
        printf("This Triangle is valid");
    }
    else if(x+y+z!=180)
    {
        printf("This Triangle is invalid");
    }
    return 0;
}
