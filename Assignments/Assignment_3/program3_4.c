#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : Accept one character from user and convert case of that character
//  Input         : Character
//  Output        : Character
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n", CValue + 32);
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
/////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}