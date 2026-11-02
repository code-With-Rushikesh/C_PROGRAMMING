#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Converts US Dollar to Indian Rupees (1$ = 70 Rs)
// Input         : Integer
// Output        : Integer (INR value)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iAns = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo * 70;

    return iAns;
}


////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of US Doller : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("In INR is %d\n", iRet);

    return EXIT_SUCCESS;
}