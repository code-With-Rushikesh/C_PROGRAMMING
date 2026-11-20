#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : Accept string and display only digits from that string
// Input         : Character pointer (String) (gan16sh17), (Demo)
// Output        : Digits present in string (1617), (    )
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{

    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
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

    DisplayDigit(arr);
    
    return EXIT_SUCCESS; 

}