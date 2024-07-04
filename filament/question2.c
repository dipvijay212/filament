/*  Write a C program to find the frequency of characters in a given string. */
#include <stdio.h>
#include <math.h>
main()
{
    int i, count = 0;
    char str[100], ch;
    printf("Enter the String: ");
    gets(str);
//	scanf("%c",&str);
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
         if (ch == str[i])
             count++;
    }
    printf("\nFrequency of %c = %d", ch, count);
    printf("\n\n%c occurs %d times in %s", ch, count, str);
}

