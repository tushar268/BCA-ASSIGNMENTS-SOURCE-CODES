/**
 * C program to calculate electricity bill
 *
 * start with libraries
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int unit,present_unit,No_of_units,choice,Category;
    float amt, total_amt, sur_charge ;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char ch;

print:

 while (true) {
    /*Choise menu of program*/
    system("cls");
    printf("--------------------------------\n");
    printf("  ELECTRICITY BILL CHOICE MENU  \n");
    printf("--------------------------------\n");
    printf("\n1)To display the Meter Number\n");
    printf("2)To display the previous meter reading\n");
    printf("3)To display the no. of units consumed\n");
    printf("4)To display the complete Tariff Structure\n");
    printf("5)To display the bill-amount payable as per the tariff structure\n");
    printf("6)To display the due date of the payment\n");
    printf("7)To Quit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    /* switch is used to  proceed perticular section*/
    
    switch (choice)
   
    {
   
    case 1:
        /* TO print meter No. in program*/
    system("cls");
    printf("--------------------------------\n");
    printf("          Meter Number          \n");
    printf("--------------------------------\n");
    printf("\nYour Meter No. is CA012345 \n");
   
        break;
    
    case 2:
     /* To display previous meter reading*/
    system("cls");
    printf("--------------------------------\n");
    printf("     Previous Meter Reading     \n");
    printf("--------------------------------\n");
    
    printf("\nYour previous meter reading: 3586 \n");
      
        break;

    case 3:

     /* To display previous meter reading*/
     system("cls");
    printf("--------------------------------\n");
    printf("      No. of Unit Consumed      \n");
    printf("--------------------------------\n");
    printf("\nYour previous meter reading: 3586 \n");
     
     /* To enter your current meter reading*/
    printf("\nEnter your current meter reading = ");
    scanf("%d",&present_unit);

     No_of_units = present_unit - 3586;

        /*No. of unit consumed */
    printf("\nNo. of unit consumed: %d units \n",No_of_units);
        
        break;

    case 4:

    /*Tariff Structure (Domestic, Non-Domestic, Industrial)*/
    system("cls");
    printf("------------------------------------------------------\n");
    printf(" Tariff Structure (Domestic, Non-Domestic, Industrial) \n");
    printf("------------------------------------------------------\n");
    printf("\n--------------------\t\t\t\t----------------\t----------------\n");
    printf("|     Category     |\t\t\t\t|Unit Per Month|       \t|Energy Charges|");
    printf("\n--------------------\t\t\t\t----------------\t----------------\n");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n      Domestic      ");
    printf("\n\t\t\t\t\t\t  0 - 50 units \t\t  Rs. 1.00/unit\n");
    printf("\n\t\t\t\t\t\t  51 - 120 units \t  Rs. 1.50/unit\n");
    printf("\n\t\t\t\t\t\t  151 - 250 units \t  Rs. 2.00/unit\n");
    printf("\n\t\t\t\t\t\t  unit above 250 \t  Rs. 2.50/unit\n");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n      Non-Domestic      ");
    printf("\n\t\t\t\t\t\t               \t\t  Rs. 4.00/unit");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n      Industrial      ");
    printf("\n\t\t\t\t\t\t               \t\t  Rs. 5.50/unit");
    printf("\n----------------------------------------------------------------------------------------");

        
       break;
    
    case 5:

    wrong:

    /* Input unit consumed from user */
     system("cls");
    printf("------------------------------------------------------\n");
    printf("    Bill-amount payable as per the tariff structure   \n");
    printf("------------------------------------------------------\n");
    printf("\n  Tariff Category  ");
    printf("\n----------------------\n");
    printf("1) Domestic");
    printf("\n2) Non-Domestic");
    printf("\n3) Industrial");
    printf("\nChoose your category:");
    scanf("%d",&Category);


    switch(Category)
    {
    
    case 1:

    printf("\nEnter total no. of units consumed: ");
    scanf("%d", &unit);

    
    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 1.00;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 1.50);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 2.00);
    }
    else
    {
        amt = 220 + ((unit-250) * 2.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 5.00;
    total_amt  = amt + sur_charge;

    printf("\nYour Electricity Bill = Rs. %.2f \n", total_amt);

      break;
    
    case 2:
    
    printf("\nEnter total no. of  units consumed: ");
    scanf("%d", &unit);
    
     amt = unit * 4.00;
     
     sur_charge = amt * 7.00;
     total_amt  = amt + sur_charge;

     printf("\nElectricity Bill = Rs. %.2f \n", total_amt);
    
    break;

    case 3:
    
    printf("\nEnter total no. of  units consumed: ");
    scanf("%d", &unit);
    
     amt = unit * 5.50;
     
     sur_charge = amt * 10.00;
     total_amt  = amt + sur_charge;

     printf("\nElectricity Bill = Rs. %.2f \n", total_amt);

    break;

    default:

    printf("\nWrong input press [Enter] to go back.");
    getch();
    goto wrong;



    }

       break;


    case 6:
      system("cls");
      printf("------------------------------- \n");
      printf("    Due date of Bill Payment    \n");
      printf("--------------------------------\n");
      printf("\nYour due date for bill payment : %d-%d-%d \n",tm.tm_mday ,tm.tm_mon + 2,tm.tm_year + 1900);   
      
       break;

    case 7:

       exit(0);

    }
    
again:
//code to to continue or not.
printf("\n\n\t\t\t\t\t*****************************************");
printf("\n\n\t\t\t\t\tDo you want to repeat the operation(Y/N):");

    scanf (" %c", &ch);

    if(ch == 'y' || ch == 'Y'){
        system("cls");
        goto print;
    }
    else if(ch == 'n' || ch == 'N'){
        system("cls");
        printf("------------------------------\n");
        printf("Made By :-\n");
        printf("Name: Tushar Gulati\n");
        printf("Enrollment No.: 2108020607\n");
        printf("Program Code: BCA\n");
        printf("Cource Code: BCSL-21\n");  
        printf("------------------------------\n");
        printf("      Have a nice day.        \n");
        printf("------------------------------\n");
        return 0;
    }
    else{
        printf("\n\t\t\t\t\tPlease enter Yes or NO.\n");
        goto again;
    }
   
  
 }
    return 0;

}

    


