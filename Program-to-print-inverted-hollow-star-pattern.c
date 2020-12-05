#include <stdio.h>
int main() 
{
   int a, b, c, d = 0;
   printf("Enter the number of rows: ");
   scanf("%d",&c);
   for(a=c;a<=c;++a) 
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
   for(a=c-1;a>=1;--a) 
   {
      for (b=1;b<=2*c;++b,d=0) 
      {
         if((b==c-a+2)||(b==c+a))
         printf("* ");
         else
         printf("  ");
      }
      printf("\n");
   }
   return 0;
}