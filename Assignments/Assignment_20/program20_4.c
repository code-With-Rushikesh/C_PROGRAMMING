#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Display triangle pattern with *, #, and $ symbols
// Input         : Integer, Integer (Rows, Columns)
// Output        : Pattern grid (******, *###**, *##*$*, *#*$$*, **$$$*, ****** Display this pattern row and columns wise)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

   for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == 0 || j == 0 || i == iRow-1 || j == iCol-1)
            {
                printf("*\t");
            }
            else if(i + j < iCol-1)
            {
                printf("#\t");
            }
            else if(i + j > iCol-1)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
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