#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Description   : Accept string and convert uppercase letters to lowercase
// Input         : Character pointer (String) (GaNesh)
// Output        : Modified string in lowercase (ganesh)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr); 

    return EXIT_SUCCESS; 

}
