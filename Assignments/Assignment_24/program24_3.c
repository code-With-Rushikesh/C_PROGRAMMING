#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description   : Return index of first occurrence of given character
// Input         : Character pointer, Character (String, Search char) (ganesh) search e, search w
// Output        : Integer (First index or -1 if not found) (location is 3) (w -> -1)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int index = 0;

    while (*str != '\0')
    {
        if (*str == ch)
            return index;

        str++;
        index++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);
    
    return EXIT_SUCCESS; 

}