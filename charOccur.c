/*
Description:-   Character Occurrence in C (Using Recursion)
Written By:- Jash M.
Created On:- 09/04/2020
*/

#include <stdio.h>
#include <string.h>

int checkChar(char *s, char c);

int main()
{
    char s[1000], c;
    int count = 0;

    //Getting the Inputs
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c = getchar();

    //Getting the value from our Function.
    count = checkChar(s, c);
    printf("character '%c' occurs: %d times\n", c, count);

    return 0;
}

int checkChar(char *s, char c)
{
    static int i = 0, count = 0;
    if (!s[i])
    {
        return count;
    }
    else
    {
        if (s[i] == c)
        {
            count++;
        }
        i++;
        checkChar(s, c);
    }
}