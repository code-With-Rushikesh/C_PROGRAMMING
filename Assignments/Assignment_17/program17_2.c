#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display alternating even and odd numbers pattern
// Input         : Integer, Integer (iRows 4, iColumns 5)
// Output        : Pattern grid (2,4,6,8,10 or 1,3,5,7,9)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 0;

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)
        {
            iNo = 2;
        }
        else
        {
            iNo = 1;
        }

        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo = iNo + 2;
        }
        printf("\n");
    }
}


////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Col : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return EXIT_SUCCESS;
}