#include <stdio.h>
#include <math.h>
int main()
{
    int n,n1,n2,last,first,rem,temp,i=0;
    int A[20];
    printf("Enter the number: ");
    scanf("%d",&n1);
    last=n1%10;
    while(n1!=0)
    {
        n1=n1/10;
        rem=n1%10;
        A[i]=rem;
        i++;
        if(n1/10==0)
        {
            first=n1;
            break;
        }
        n=i;
    }
    for(i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    n2=first;
    for(i=0;i<n;i++)
    {
        n2+=A[i]*pow(10,n-i);
    }
    n2=n2+last*pow(10,n+1);
    printf("\n Number with first and last digit swapped is %d",n2);
    

    return 0;
}

