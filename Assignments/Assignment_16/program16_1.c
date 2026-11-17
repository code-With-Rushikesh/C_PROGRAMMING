#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number of rows and columns and display character pattern
// Input         : Integer, Integer (Rows, Columns)
// Output        : Pattern of alphabets (A B C D)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 16/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i<= iRow; i++)
    {
        for(j=1 ,ch = 'A'; j<=iCol; j++,ch++)
        {
            printf("%c\t",ch);
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
