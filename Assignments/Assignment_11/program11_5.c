#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : Accept range and display all numbers in reverse order
// Input         : Integer, Integer (Start, End)
// Output        : Numbers in reverse range
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayRangeRev(int iStart,int iEnd)
{
    int iRange = 0;

    for(iRange = iEnd; iRange >= iStart; iRange--)
    {
        printf("%d\t",iRange);
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Number\n");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}