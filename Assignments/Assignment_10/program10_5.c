#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Converts area from square feet to square meter
// Input         : Integer (Square feet)
// Output        : Double (Square meter)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dAns = 0.0;
    
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    dAns = (double)iValue * 0.0929;
    return dAns;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}