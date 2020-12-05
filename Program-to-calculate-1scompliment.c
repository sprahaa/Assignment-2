#include <stdio.h>
int main ()
{
  int num,rem,n,temp,i=0;
  int A1[20],A2[20];
  printf("Please input the binary number  ");
  label:
  scanf("%d",&num);
  while(n=0)
  {
    rem=num%10;
    A1[i]=rem;
    i++;
    num=num/10;
    n=i;
  }
  for(i=0;i<n/2;i++)
  {
    temp=A1[i];
    A1[i]=A1[n-i-1];
    A1[n-i-1]=temp;
  }
  for(i=0;i<n;i++)
  {
    if(A1[i]==0)
    {
        A2[i]=1;
    }
    else if(A1[i]==1)
    {
        A2[i]=0;
    }
    else 
    {
        printf("The entered binary number is invalid please enter again \n");
        goto label;
    }
  }
  A2[n]='\0';
  printf("The 1's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",A2[i]);
  }
  return 0;
}