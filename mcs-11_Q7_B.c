#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
int main()
{
    char name [50];
    int marks, i,n,roll_no;
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = (fopen("C:\\Users\\Priyanka\\OneDrive\\Desktop\\Student_Marks.txt","a"));
    if(fptr==NULL)
    {
        printf("\nError!");
        exit(1);
    }
    for (i=0;i<n;++i)
    {
        printf("\n For students %d \n Enter name: ",i+1);
        scanf("%s",&name);
        printf(" Enter roll number: ");
        scanf("%d",&roll_no);
        printf(" Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\n Name: %s Roll no = %d Marks = %d",name,roll_no,marks);

    }
    fclose(fptr);
    return 0;

}
