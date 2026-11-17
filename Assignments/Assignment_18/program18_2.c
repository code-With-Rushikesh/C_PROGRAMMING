#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Display alternative border star and hash pattern
// Input         : Integer, Integer (iRows 4, iColumns 4)
// Output        : Pattern grid (****,***#,**##,*### Display this pattern row and columns wise)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= iCol - i + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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