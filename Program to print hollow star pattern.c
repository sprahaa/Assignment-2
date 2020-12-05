#include <stdio.h>
int main() 
{
   int a, b, c, i, j = 0;
   printf("Enter the number of rows: ");
   scanf("%d",&a);
   b=a/2;
   if(a%2==0)
   {
       for(i=1;i<=b;++i) 
        {
            for (j=1;j<=b-i+1;++j,c=0) 
            {
            printf("  ");
            }
            while (c!=2*i-1) 
            {
            printf("* ");
            ++c;
            }
            printf("\n");
        }
        for(i=b;i>=1;--i) 
        {
            for (j=1;j<=b-i+1;++j,c=0) 
            {
                printf("  ");
            }
            while (c!=2*i-1) 
            {
                printf("* ");
            ++c;
            }
            printf("\n");
        } 
   }
   else
   {
       for(i=1;i<=b+1;++i) 
        {
            for (j=1;j<=b-i+2;++j,c=0) 
            {
            printf("  ");
            } 
            while (c!=2*i-1) 
            {
            printf("* ");
            ++c;
            } 
            printf("\n");
        }
        for(i=b;i>=1;--i) 
        {
            for (j=1;j<=b-i+2;++j,c=0) 
            {
            printf("  ");
            }
            while (c!=2*i-1) 
            {
            printf("* ");
            ++c;
            }
            printf("\n");
        }   
   }
   return 0;
}