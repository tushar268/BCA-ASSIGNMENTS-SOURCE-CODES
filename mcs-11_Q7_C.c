#include<stdio.h>
int main ()
{
    FILE *fp1,*fp2;
    char filename[40];
    char c;
    int del_line,temp=1;
    
    printf("\n Enter file name: ");
    scanf("%s",filename);
    fp1=fopen(filename,"r");
    c=getc(fp1);
    while (c!=EOF)
    {
        printf("%c",c);
        c=getc(fp1);
    }
    rewind (fp1);
    printf("\n Enter line number to delete a line ");
    scanf("%d",del_line);
    fp2 =fopen("copy.c","w");
    c=getc(fp1);
    while (c!=EOF)
    {
    c=getc(fp1);
    if (c=='\n')
    temp++;
    
    if(temp != del_line)
    {
        putc(c,fp2);
    }
    }

    fclose(fp1);
    fclose(fp2);
    remove (filename);
    rename ("copy.c",filename);
    printf("\n the content of new file ");
    fp1=fopen(filename,"r");
    c=getc(fp1);
    while (c!=EOF)
    {
        printf("%c",c);
        c=getc(fp1);

    }
    fclose(fp1);
    return 0;

}
