/*
Description:-   Conversion from English to Pig Latin
Written By:- Jash M.
Created On:- 09/04/2020
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 39

bool isVowel(char c);
void pigLatin(char string[]);
void output(char string[], int flag);

int main()
{
    //Declaring String array
    char input[MAX_LENGTH];

    //Getting the input
    printf("Enter The string: ");
    scanf("%s", input);

    pigLatin(input);

    printf("\n");
    return 0;
}

void pigLatin(char string[])
{
    //Checking whether first character is capitalized.
    char c = string[0];
    int flag = 0;
    if (c >= 65 && c <= 90)
    {
        int diff = c - 65;
        c = 97 + diff;
        string[0] = c;
        flag = 1;
    }

    int index = -1;

    //If First character is 'y' treating it as consonant.
    for (int i = 1, len = strlen(string); i < len; i++)
    {
        //If 'y' is not the first character it should be treated as a vowel.
        if (isVowel(string[0]))
        {
            index = 0;
            break;
        }
        else
        {
            if ((string[i] == 121 || string[i] == 89) || isVowel(string[i]))
            {
                index = i;
                break;
            }
        }
    }

    //Checking if the word has vowel
    if (index == -1)
    {
        output(string, flag);
    }
    else
    {
        char pigLatin[MAX_LENGTH];

        if (index == 0)
        {
            //If the word starts with a vowel
            strcpy(pigLatin, string);
            strcat(pigLatin, "way");
        }
        else
        {
            //If the word doesn't start with a vowel

            int i, len = MAX_LENGTH;

            //Part-1
            for (i = 0; (i + index) < len; i++)
            {
                pigLatin[i] = string[i + index];
            }
            //Part-2
            strncat(pigLatin, string, index);
            // Adding "ay"
            strcat(pigLatin, "ay");
        }
        output(pigLatin, flag);
    }
}

//Function to check Vowel
bool isVowel(char c)
{
    return (c == 65 || c == 69 || c == 73 ||
            c == 79 || c == 85 || c == 97 ||
            c == 101 || c == 105 || c == 111 ||
            c == 117);
}

//Output
void output(char string[], int flag)
{
    //If first character of input text is capitalized
    if (flag == 1)
    {
        int c = string[0];
        int diff = c - 97;
        c = 65 + diff;
        string[0] = c;
    }
    printf("In Pig Latin: %s", string);
}
