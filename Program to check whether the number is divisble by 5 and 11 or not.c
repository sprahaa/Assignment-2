#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("Number is divisible by 5 and 11 both"); 
    }
    else if(num%5==0 && num%11!=0)
    {
        printf("Number is divisible by 5 but not by 11");
    }
    else if(num%5!=0 && num%11==0)
    {
        printf("Number is divisible by 11 but not by 5");
    }
    else
    {
        printf("Number is not divisible by 5 and 11 both");
    }
    return 0;
}
