#include <stdio.h>
int main() 
{
   int a, b, c, d = 0;
   printf("Enter the number of rows: ");
   scanf("%d",&c);
   for(a=c;a>=1;--a) 
   {
      for (b=1;b<=c-a+1;++b,d=0) 
      {
         printf("  ");
      }
      while (d!=2*a-1) 
      {
         printf("* ");
         ++d;
      }
      printf("\n");
   }
   return 0;
}
