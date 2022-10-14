#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i = 0;
    system("cls");
    printf("Enter a string: ");
    scanf("%[^\n]",s);
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }

        i++;
    }
    printf("In Upper case is : ");
    puts(s);
    return 0;

}
