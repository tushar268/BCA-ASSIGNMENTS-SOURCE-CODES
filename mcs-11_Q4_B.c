#include<stdio.h>
#include<stdlib.h>
int main()
    {
     
     char c;
     int lowercase_vowel1,uppercase_vovel1;
     system ("cls");
     printf("Enter an alphabet: ");
     scanf("%c",&c);
     lowercase_vowel1 = (c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u');
     uppercase_vovel1 = (c== 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U');

     if (lowercase_vowel1 || uppercase_vovel1)
     printf("%c is a Vowel.",c);
     else
     printf("%c is a Consonant.",c);
     return 0;
    
    }
