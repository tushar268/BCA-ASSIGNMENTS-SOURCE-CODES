#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
    int emp_no ;
    char name [20];
    int basic_pay,allow,debt,net_pay;
}
emp [10];
int main()
{
    int i,n;
    system("cls");
    printf("\n Enter the numbers of eployees :");
    scanf("%d",&n);
   for (i = 0; i<n;i++)
   {
    printf("\n Enter the employee number :");
    scanf("%d",&emp[i].emp_no); 
    printf("\n Enter the name :");
    scanf("%s",&emp[i].name);
    printf("\n Enter the basic pay : ");
    scanf("%d",&emp[i].basic_pay);
    printf("\n Enter the allowance : ");
    scanf("%d",&emp[i].allow);
    printf("\n Enter the deduction : ");
    scanf("%d",&emp[i].debt);
    emp[i].net_pay = emp[i].basic_pay + emp[i].allow + emp[i].debt ;

   } 
   system("cls");
   printf("\n-------------------------------------------------------");
   printf("\n                  Pay slip for %d Employee             ",n);
   printf("\n-------------------------------------------------------");
   printf("\nEmp.No.  Name \t\t Bpay \t Allow \t Ded     Npay \n\n");
   for (i = 0; i<n;i++)
   {
    printf(" %d \t %s \t %d \t %d \t %d \t %d \n",emp[i].emp_no,emp[i].name,emp[i].basic_pay,emp[i].allow,emp[i].debt,emp[i].net_pay);

   }
getch();
return 0;

}
