#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description   :  Accept two numbers from user and display first number in second number of times.
// Input         :  Integer, Integer
// Output        :  Integers
// Author        :  Rushikesh Mahesh Suryawanshi
// Date          :  21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write Updater
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    printf("Enter frequency");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}