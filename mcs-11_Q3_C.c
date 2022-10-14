#include<stdio.h>
#include<stdlib.h>
long int multiplynumbers(int n);
int main()
{
    system ("cls");
    int n;
    printf("Enter positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %1d",n,multiplynumbers(n));
    return 0;

}

long int multiplynumbers(int n)
{
    if (n>=1)
    return n*multiplynumbers(n-1);
    else
    return 1;
    
}
