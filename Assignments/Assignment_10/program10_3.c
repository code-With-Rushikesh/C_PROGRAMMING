#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KMToMeter
// Description   : Converts distance in kilometres to meters
// Input         : Integer (Kilometres)
// Output        : Integer (Meters)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iAns = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo * 1000;

    return iAns;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is %d\n", iRet);
    
    return EXIT_SUCCESS;
}