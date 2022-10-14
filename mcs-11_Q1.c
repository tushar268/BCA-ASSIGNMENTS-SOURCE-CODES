#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
    int sw;
    system("cls");
    printf("\n press 1 for to reverse a 5 digit number");
    printf("\n press 2 to check wheather the 5-digit number is a palindrome or not");
    printf("\n press 3 to find the sum of all the digits of the 5-digit number");
    printf("\n press 4 to Exit");
    printf("\n Enter your choice :");
    scanf("%d",&sw);
    switch (sw)
    {

case 1:
    
    {
        int n,remainder,reverse=0,count=0,no;
        printf("\n Enter a no digit number: ");
        scanf("%d",&n);
        no=n;
        while(no!=0){
            no=no/10;
            count++;
        }   
        if (count==5)
        {
            while(n!=0){
                remainder=n%10;
                reverse = reverse * 10 + remainder;
                n=n/10;
            
            }
            printf("\n Reversed number = %d",reverse );
        }
       else {
        printf("\n Please enter five digit no");
       } 
    }
    
       break;
    
case 2:
        
        int n,remainder,reverse=0,count=0,no,P;
        printf("\n Enter a no digit number: ");
        scanf("%d",&n);
        no=n;
        P=n;
        while(no!=0){
            no=no/10;
            count++;
        }
        if (count==5)
        {
            while(n!=0){
                remainder=n%10;
                reverse = reverse * 10 + remainder;
                n=n/10;
            }

            if (P==reverse)
            {
                printf("\n Given no is palindrome");
            }
            else{
                printf("\n Given no is not palindrome");
            }
            
            
        }
       else {
        printf("\n Please enter five digit no");
       } 
       
       break;

case 3:

    {
     
     int n,remainder,sum=0,count=0,no;
        printf("\n Enter a no digit number: ");
        scanf("%d",&n);
        no=n;
        while(no!=0){
            no=no/10;
            count++;
        }   
        if (count==5)
        {
            while(n!=0){
                remainder=n%10;
                sum = sum + remainder;
                n=n/10;
            
            }
            printf("\n Sum of digits are  = %d",sum );
        }
       else {
        printf("\n Please enter five digit no");
       } 

    }

       break;

case 4:
    
    exit(0);

        break;

default :
       
        printf("please choose the right option");
    
    
    }
    
}
