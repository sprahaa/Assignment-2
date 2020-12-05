#include <stdio.h>
int main()
{
    int un;
    float bill=0;
    printf("Enter the no. of units consumed : ");
    scanf("%d",&un);
    if(un<=50)
    {
        bill=un*0.5;
    }
    else if(un<=150)
    {
        un=un-50;
        bill=25;
        bill=bill+(0.75*un);
    }
    else if(un<=250)
    {
        un=un-150;
        bill=100;
        bill=bill+(1.2*un);
    }
    else if(un>=250)
    {
        un=un-250;
        bill=220;
        bill=bill+(1.5*un);
    }
    bill=bill+(0.2*bill);
    printf("Final amount is %f Rs",bill);
    return 0;
}