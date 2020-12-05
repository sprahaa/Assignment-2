#include <stdio.h>
int main() 
{
   int x, y, a, b = 0;
   printf("Enter the number of rows: ");
   scanf("%d",&a);
   for(x=1;x<=a;++x) 
   {
      for (y=1;y<=a-x+1;++y,b=0) 
      {
         printf("  ");
      }
      while (b!=2*x-1) 
      {
         printf("* ");
         ++b;
      }
      printf("\n");
   }
   return 0;
}