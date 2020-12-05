#include <stdio.h>
int main ()
{
  int num,rem,n,temp,i=0;
  int carry=1;
  int A[20],O[20],T[20];
  printf("Please input the binary number  ");
  label:
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    A[i]=rem;
    i++;
    num=num/10;
    n=i;
  }
  for(i=0;i<n/2;i++)
  {
    temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;
  }
  for(i=0;i<n;i++)
  {
    if(A[i]==0)
    {
        O[i]=1;
    }
    else if(A[i]==1)
    {
        O[i]=0;
    }
    else 
    {
        printf("The entered binary number is invalid please enter again \n");
        goto label;
    }
  }
  O[n]='\0';
  printf("The 1's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",O[i]);
  }
  for(i=n-1; i>=0; i--)
  {
    if((O[i]==1) && (carry==1))
    {
        T[i]=0;
    }
    else if((O[i]==0) && (carry==1))
    {
        T[i]=1;
        carry=0;
    }
    else
    {
        T[i] = O[i];
    }
  }
    T[n] = '\0';
  printf("\nThe 2's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",T[i]);
  }
  return 0;
}