#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int hcf (int n1, int n2);
int main()
{
    system ("cls");
    printf("\n Program to find gcd of two numbers ");
    int n1,n2;
    printf("\n Enter the first integer ");
    scanf("%d",&n1);
    printf("\n Enter the second integer ");
    scanf("%d",&n2);
    printf("G.C.D of %d and %d is %d. ",n1,n2,hcf(n1,n2));
    return 0;

}

int hcf ( int n1, int n2)
{
    if(n2 != 0)
    return hcf(n2,n1 % n2);

    else
    return n1;
}
