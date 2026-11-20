#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : strtogglex
// Description   : Accept string and toggle character case (upper <-> lower)
// Input         : Character pointer (String) (Jay Ganesh)
// Output        : Modified string with toggled case (jAY gANESH)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
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

    strtogglex(arr);

    printf("Modified string is %s\n", arr); 

    return EXIT_SUCCESS; 

}