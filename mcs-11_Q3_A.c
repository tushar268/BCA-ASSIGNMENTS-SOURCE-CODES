  #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int HCF(int,int);
int main ()
{
system ("cls");
int a,b,result;
printf("\n program to find HCF using recursion");
printf("\n Enter the first number ");
scanf("%d",&a);
printf("\n Enter the second number ");
scanf("%d",&b);
result  =  HCF (a,b);
printf("\n The HCF of %d and %d is %d. \n ",a,b,result );

}

int HCF (int a , int b)
{
    while (a != b)
    {
        if (a>b)
        {
        
        return HCF (a - b,b);

        }
        else 
        {
        
        return HCF (a,b - a);

        }
    }
return a;
}
