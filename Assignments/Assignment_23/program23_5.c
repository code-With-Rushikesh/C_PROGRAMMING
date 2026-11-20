#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Description   : Accept string and count number of white spaces
// Input         : Character pointer (String) (ganesh), (jay ganesh)
// Output        : Integer (Count of spaces) (0), (1)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);
    
    return EXIT_SUCCESS; 

}