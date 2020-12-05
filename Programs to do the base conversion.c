#include <math.h>
#include <stdio.h>
#include <string.h>
int binarytodecimal(int n);
int decimaltooctal(int n);
void decimaltohexadecimal(int n);
int octaltodecimal(int n); 
void decimaltobinary(int n);
int hexadecimaltodecimal(char hex[]);
int main()
{
    int answer,n,c,temp;
    char A1[20];
    printf("Please choose from the following menu:\n");
    printf(" 1: Binary To Decimal \n");
    printf(" 2: Binary To Octal \n");
    printf(" 3: Binary To Hexadecimal \n");
    printf(" 4: Octal To Binary \n");
    printf(" 5: Octal To Decimal \n");
    printf(" 6: Octal To Hexadecimal \n");
    printf(" 7: Decimal To Binary \n");
    printf(" 8: Decimal To Octal \n");
    printf(" 9: Decimal To Hexadecimal \n");
    printf(" 10: Hexadecimal To Binary \n");
    printf(" 11: Hexadecimal To Deciaml \n");
    printf(" 12: Hexadecimal To Octal \n");
    label:
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter the Binary input\n");
        scanf("%d",&n);
        answer = binarytodecimal(n);
        printf("Decimal converted number is : %d",answer);
        break;
        
        
        case 2:
        printf("Enter the Binary input\n");
        scanf("%d",&n);
        temp = binarytodecimal(n);
        answer = decimaltooctal(temp);
        printf("Octal converted number is : %d",answer);
        break;
        
        
        case 3:
        printf("Enter the Binary input\n");
        scanf("%d",&n);
        temp = binarytodecimal(n);
        decimaltohexadecimal(temp);
        break;
        
        
        case 4:
        printf("Enter the Octal input\n");
        scanf("%d",&n);
        temp = octaltodecimal(n);
        decimaltobinary(temp);
        break;
        
        
        case 5:
        printf("Enter the Octal input\n");
        scanf("%d",&n);
        answer = octaltodecimal(n);
        printf("Decimal converted number is : %d",answer);
        break;
        
        
        case 6:
        printf("Enter the Octal input\n");
        scanf("%d",&n);
        temp = octaltodecimal(n);
        decimaltohexadecimal(temp);  
        break;
        
        
        case 7:
        printf("Enter the Decimal input\n");
        scanf("%d",&n);
        decimaltobinary(n);
        break;
        
        
        case 8:
        printf("Enter the Decimal input\n");
        scanf("%d",&n);
        answer = decimaltooctal(n);
        printf("Octal converted number is : %d",answer);
        break;
        
        
        case 9:
        printf("Enter the Decimal input\n");
        scanf("%d",&n);
        decimaltohexadecimal(n);
        break;
        
        
        case 10:
        printf("Enter the Hexadecimal input\n");
        scanf("%s",A1);
        temp=hexadecimaltodecimal(A1);
        decimaltobinary(temp);
        break;
        
        
        case 11:
        printf("Enter the Hexadecimal input\n");
        scanf("%s",A1);
        answer=hexadecimaltodecimal(A1);
        printf("Decimal converted number is : %d",answer);
        break;
        
        
        case 12:
        printf("Enter the Hexadecimal input\n");
        scanf("%s",A1);
        temp=hexadecimaltodecimal(A1);
        answer=decimaltooctal(temp);
        printf("Octal converted number is : %d",answer);
        break;
        
        
        default:
        printf("Invalid input! Please enter a valid choice : ");
        goto label;
    }
    return 0;
}


int binarytodecimal(int n)
{
    int num,tempval,rem,dec=0;
    int A1[20];
    int i=0;
    while(n!=0)
    {
        rem=n%10;
        A1[i]=rem;
        i++;
        n=n/10;
    }
    num=i;
    for(i=0;i<num/2;i++)
    {
        tempval=A1[i];
        A1[i]=A1[num-i-1];
        A1[num-i-1]=tempval;
    }
    for(i=0;i<num;i++)
    {
        dec=dec+A1[i]*pow(2,i);
    }
    return dec;
}


int decimaltooctal(int n)
{
   int oct=0;
   int i=1;
   while (n!= 0)
   {
        oct=oct+(n%8)*i;
        n=n/8;
        i=i*10;
   } 
   return oct;
}

    
void decimaltohexadecimal(int n)
{
    int rem,i,j=0;
    char hexadecimal[20];
    while (n!=0)
    {
        rem=n%16;
        if(rem<10)
        {
            hexadecimal[j++]=48+rem;
        }
        else
        {
            hexadecimal[j++]=55+rem;
        }
        n=n/16;
    }
    printf("Hexadecimal converted number is : ");
    for(i=j;i>=0;i--)
    {
        printf("%c", hexadecimal[i]);
    }
}
   
   
int octaltodecimal(int n)
{
    int dec=0;
    int i=0;
    while(n!=0)
    {
        dec=dec+(n%10)*pow(8,i);
        ++i;
        n/=10;
    }
    return dec;
}
    

void decimaltobinary(int n)
{
    int i, A1[20];
    for(i=0;n>0;i++)    
    {    
        A1[i]=n%2;    
        n=n/2;    
    }    
    printf("Binary converted number is : ");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",A1[i]);    
    }    
}

int hexadecimaltodecimal(char hex[]) 
{    
    int len = strlen(hex); 
    int base = 1; 
    int dec = 0; 
    for (int i=len-1; i>=0; i--) 
    {    
        if (hex[i]>='0' && hex[i]<='9') 
        { 
            dec+=(hex[i]-48)*base; 
            base=base*16; 
        } 
        else if (hex[i]>='A' && hex[i]<='F') 
        { 
            dec+=(hex[i]-55)*base; 
            base = base*16; 
        } 
    } 
      
    return dec; 
} 