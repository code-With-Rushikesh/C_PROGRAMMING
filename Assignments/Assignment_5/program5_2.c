#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Determines whether a given year is a leap year
// Input         : Integer
// Output        : String (Leap Year / Not a Leap Year / Invalid)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if ((iYear % 400) == 0)
    {
        printf("Leap Year\n");
    }
    else if ((iYear % 100) == 0)
    {
        printf("Not a Leap Year\n");
    }
    else if ((iYear % 4) == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}