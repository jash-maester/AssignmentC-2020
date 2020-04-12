/* 
Description:- Searching Book names stored in a file.
Created By:- Jash M.
Dated:- 12/04/2020.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    //Declaring the Variables
    char bookName[50];
    char s[50];

    //Declaration for communication between file and program
    FILE *ptr;

    //Opening the file
    ptr = fopen("books.txt", "r");

    //Checking if the file is available
    if (ptr == NULL)
    {
        printf("The File \"books.txt\" not found and/or failed to open.\n");
        return 1;
    }
    else
    {
        //Getting the Name of the book
        printf("Enter the name of the book to be searched: ");
        fgets(bookName, 50, stdin);

        while (fgets(s, 50, ptr) != NULL)
        {
            if (strcmp(bookName, s))
            {
                printf("Search Successful. The book is Available.\n");
            }
            else
            {
                printf("The book you entered is not available.\n");
            }
        }
    }
    //Closing the opened file & exiting
    fclose(ptr);
    return 0;
}