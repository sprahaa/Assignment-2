#include <stdio.h>
int main()
{
    int num;
    printf("Enter day number : ");
    label:
    scanf("%d",&num);
    if(num==1)
    {
        printf("It is Sunday");
    }
    else if(num==2)
    {
        printf("It is Monday");
    }
    else if(num==3)
    {
        printf("It is Tuesday");
    }
    else if(num==4)
    {
        printf("It is Wednesday");
    }
    else if(num==5)
    {
        printf("It is Thursday");
    }
    else if(num==6)
    {
        printf("It is Friday");
    }
    else if(num==7)
    {
        printf("It is Saturday");
    }
    else 
    {
        printf("This input is invalid! Please enter a valid day number : ");
        goto label;
    }
    return 0;
}
