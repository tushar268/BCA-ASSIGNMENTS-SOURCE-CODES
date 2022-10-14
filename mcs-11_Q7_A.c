#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    int marks,i,n;
    system("cls");
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = (fopen("C:\\Users\\Priyanka\\OneDrive\\Desktop\\Student_Marks.txt","w"));
    if(fptr==NULL)
    {
        printf("\n Error!");
        exit(1);
    }

    for (i=0;i<n;++i)
    {
        printf("\n For student %d \n Enter name: ",i+1);
        scanf("%s",&name);
        printf(" Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName : %s \nMarks=%d \n",name,marks);


    }
    fclose(fptr);
    system("cls");
    printf("\n\t\t\t\t----------------------------------------------------------");
    printf("\n\t\t\t\tYour Data File is Ready press [Enter] and find on Desktop.");
    printf("\n\t\t\t\t----------------------------------------------------------");
    return 0;
}
