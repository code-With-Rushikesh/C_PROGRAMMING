#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Description   : Return index of last occurrence of given character
// Input         : Character pointer, Character (String, Search char) (ganesh) search g or search w 
// Output        : Integer (Last index or -1 if not found) Charecter location (e-> 3)(w-> -1)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int index = 0;
    int lastIndex = -1;

    while (*str != '\0')
    {
        if (*str == ch)

        lastIndex = index;

        str++;

        index++;
    }

    return lastIndex;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);
    
    return EXIT_SUCCESS; 

}