#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print up to 'Z' if capital, reverse to 'a' if small, else return
// Input         : Character (if Input Capital R, if input small f, 8)
// Output        : Sequence of characters (R-> RSTUVWXYZ, f-> fedcba, 8-> no output)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char iCnt = '\0';

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
        printf("\n");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);
    
    return EXIT_SUCCESS; 

}