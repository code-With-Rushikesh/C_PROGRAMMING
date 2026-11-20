#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : struprx
// Description   : Accept string and convert lowercase letters to uppercase
// Input         : Character pointer (String) (GaNesh)
// Output        : Modified string in uppercase (GANESH)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    struprx(arr);

    printf("Modified string is %s\n", arr); 

    return EXIT_SUCCESS; 

}