#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : Accept total marks & obtained marks and calculate percentage
// Input         : Integer, Integer (Total, Obtained)
// Output        : Float (Percentage)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    if (iTotal == 0 || iObtained < 0 || iTotal < iObtained)
    {
        return 0.0f;
    }

    return ((float)iObtained / (float)iTotal) * 100.0f;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%.1f%%\n", fRet);

    return EXIT_SUCCESS;
}