#include <stdio.h>
int main()
{
    float basic, gross, d, h;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    if(basic<= 10000)
    {
        d  = basic * 0.8;
        h = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        d  = basic * 0.9;
        h = basic * 0.25;
    }
    else
    {
        d  = basic * 0.95;
        h = basic * 0.3;
    }
    gross = basic + h + d;
    printf("Gross salary is: = %.6f", gross);
    return 0;
}
