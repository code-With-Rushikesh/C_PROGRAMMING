#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number from user and print that number of $ & * on screen
// Input         : Integer (5,10,-3)
// Output        : Characters ($ and *)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}