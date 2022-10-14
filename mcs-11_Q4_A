#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int anagram (char [],char []);
int main()
{
    system ("cls"); 
    char i[100] , j [100];
    printf("\n Program to find anagram \n");
    printf("\n Enter the first string \n");
    gets(i);
    printf("\n Enter the second string \n");
    gets(j);


    if (anagram (i,j) == 1)
    printf("\n The given two strings are anagrams\n");
    else
    printf("\n The given two strings are not anagrams \n");
    return 0;

}

int anagram (char i[], char j[])
{

    int first1[26] = {0},second1[26] = {0}, d=0;

    while (i[d] != '\0')
    {
        first1[i[d] - 'a']++;
        d++;
    }
    d=0;
    while (j[d] != '0')
    {
        second1[j[d] - 'a']++;
        d++;
    }

    for ( d = 0; d < 26 ; d++)
    {
        if (first1[d] != second1[d])
        return 0;
    }

    return 1;
}
