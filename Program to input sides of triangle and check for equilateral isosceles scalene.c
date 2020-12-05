include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides the triangle : ");
    label:
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y+z || y>=x+z || z>=x+y)
    {
        printf("This Triangle is invalid");
        goto label;
    }
    else if(x==y && x==z)
    {
        printf("This Triangle is Equilateral");
    }
    else if(x==y || x==z || y==z)
    {
        printf("The Triangle is Isosceles");
    }
    else
    {
        printf("The Triangle is Scalene");
    }
    return 0;
}