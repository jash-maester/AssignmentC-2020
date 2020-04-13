/*
Description:-   Function to Shorten String
Written By:- Jash M.
Created On:- 09/04/2020
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void shorten(char string[], int n);

int main()
{
    //Declaring String array and Number n
    char input[MAX_LENGTH];
    int n;

    //Getting the input
    printf("Enter The string: ");
    // scanf("%s", input);
    gets(input);

    printf("Enter the number of characters to shorten the string: ");
    scanf(" %d", &n);

    shorten(input, n);

    return 0;
}

void shorten(char string[], int n)
{
    char tempStr[n];
    int i;

    if (!(n > strlen(string)))
    {
        for (i = 0; i < n; i++)
        {
            tempStr[i] = string[i];
        }
        printf("Shortened string: %s\n", tempStr);
    }
}
