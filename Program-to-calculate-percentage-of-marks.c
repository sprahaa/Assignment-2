#include <stdio.h>
int main()
{
    int phy,chem,comp,maths,biology,percentage;
    char Grade;
    printf("Program to calculate percentage of marks(out of 100) and corresponding grade\n");
    printf("Please enter marks for Physics : ");
    scanf("%d",&phy);
    printf("Please enter marks for Chemistry : ");
    scanf("%d",&chem);
    printf("Please enter marks for Biology : ");
    scanf("%d",&biology);
    printf("Please enter marks for Maths : ");
    scanf("%d",&maths);
    printf("Please enter marks for Computer : ");
    scanf("%d",&comp);
    percentage=(phy+chem+comp+biology+maths)/5;
    if(percentage>=90)
    {
        Grade='A';
    }
    else if(percentage>=80)
    {
        Grade='B';
    }
    else if(percentage>=70)
    {
        Grade='C';
    }
else if(percentage>=60)
    {
        Grade='D';
    }
    else if(percentage>=40)
    {
        Grade='E';
    }
    else
    {
        Grade='F';
    }
    printf("Percentage recieved is : %d\n",percentage);
    printf("Grade recieved is : %c",Grade);
    return 0;
}