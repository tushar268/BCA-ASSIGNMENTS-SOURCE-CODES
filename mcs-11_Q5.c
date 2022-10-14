#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x[9], y[9],count = 0;
    system("cls");
    printf("\n Enter the number in first array :\n");
    for (int i=0; i<=9;i++)
    {
    scanf("%d",&x[i]);
    }
    printf("\n Enter the number in second array: \n");
    for (int i=0; i<=9;i++)
    {
     scanf("%d",&y[i]);   
    }

     printf("\n the common numbers are  ");
     for (int i=0;i<=9;i++)
    {
        for (int j=0; j<=9;j++)
        {
        
        if (x[i]==y[j])
        {
            printf("%d , ", x[i]);
            count++;
        }

        }
    }

printf("\n total common numbers are %d ",count);
return 0;

}
