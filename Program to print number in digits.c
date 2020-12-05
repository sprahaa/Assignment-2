#include <stdio.h>
int main()
{
    int n1,rem,temp,n2,i=0;
    int A1[20];
    printf("Enter the number: ");
    scanf("%d",&n1);
    while (n1!=0) 
    { 
        rem=n1%10; 
        n1=n1/10;
        A1[i]=rem;
        i++;
    }
    n2=i;
    for(i=0;i<n2/2;i++)
    {
        temp=A1[i];
        A1[i]=A1[n2-i-1];
        A1[n2-i-1]=temp;
    } 
    printf("The number printed in words is :");
    for(i=0;i<n2;i++)
    {
        switch(A1[i])
        {
            case 0:
            printf("Zero ");
            break;
            
            case 1:
            printf("One ");
            break;
            
            case 2:
            printf("Two ");
            break;
            
            case 3:
            printf("Three ");
            break;
            
            case 4:
            printf("Four ");
            break;
            
            case 5:
            printf("Five ");
            break;
            
            case 6:
            printf("Six ");
            break;
            
            case 7:
            printf("Seven ");
            break;
            
            case 8:
            printf("Eight ");
            break;
            
            case 9:
            printf("Nine ");
            break;
        }
    }
    return 0;
}
