#include <stdio.h>
int main()
{
    int i;
    printf("Enter the month number : ");
    jump:
    scanf("%d",&i);
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
  
        printf("%d has 31 days in it.",i);
    
    else if(i==4 || i==6 || i==9 || i==11)
    {
        printf("%d has 30 days in it.",i);
    }
    else if(i==2)
    {
        printf("%d has 28 days in it \n But in case of leap year there are 29 days",i);
    }
    else 
    {
        printf("This input is invalid! Please enter a valid input : ");
        goto jump;
    }

    return 0;
}