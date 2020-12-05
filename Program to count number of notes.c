#include <stdio.h>
int main()
{
    int num;
    printf("Enter the amount of money in Rs : ");
    scanf("%d",&num);
    if( num<10 )
    {
        printf("Amount of money %d Rs is in the form of coins",num);
    }
    else if(num<20)
    {
        printf("Notes of Rs 10 : %d\n",num/10);
        printf("Rest of the amount %d Rs is in the form of coins",num%10);
    }
    else if(num<50)
    {
        printf("Notes of Rs 20 : %d\n",num/20);
        printf("Notes of Rs 10 : %d\n",(num%20)/10);
        printf("Rest of the amount %d Rs is in the form of coins",num%10);
    }
    else if(num<100)
    {
        printf("Notes of Rs 50 : %d\n",num/50);
        printf("Notes of Rs 20 : %d\n",(num%50)/20);
        printf("Notes of Rs 100 : %d\n",((num%50)%20)/10);
        printf("Rest of the amount %d Rs is in the form of coins",num%10);
    }
    else if(num<500)
    {
        printf("Notes of Rs 100 : %d\n",num/100);
        printf("Notes of Rs 50 : %d\n",(num%100)/50);
        printf("Notes of Rs 20 : %d\n",((num%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",(((num%100)%50)%20)/10);
        printf("Rest of the amount %d Rs is in the form of coins",num%10);
    }
    else if(num<2000)
    {
        printf("Notes of Rs 500 : %d\n",num/500);
        printf("Notes of Rs 100 : %d\n",(num%500)/100);
        printf("Notes of Rs 50 : %d\n",((num%500)%100)/50);
        printf("Notes of Rs 20 : %d\n",(((num%500)%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",((((num%500)%100)%50)%20)/10);
        printf("Rest of the amount %dRs is in the form of coins",num%10);
    }
    else if(num>=2000)
    {
        printf("Notes of Rs 2000 : %d\n",num/2000);
        printf("Notes of Rs 500 : %d\n",(num%2000)/500);
        printf("Notes of Rs 100 : %d\n",((num%2000)%500)/100);
        printf("Notes of Rs 50 : %d\n",(((num%2000)%500)%100)/50);
        printf("Notes of Rs 20 : %d\n",((((num%2000)%500)%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",(((((num%2000)%500)%100)%50)%20)/10);
        printf("Rest of the amount %dRs is in the form of coins",num%10);
    }


    return 0;
}