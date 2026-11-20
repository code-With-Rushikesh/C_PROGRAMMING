#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description   : Display ASCII table with symbol, decimal, hex, and octal (0-255)
// Input         : None
// Output        : ASCII representation table
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%X\t%o\t%c\n", iCnt, iCnt, iCnt, iCnt);
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    
    DisplayASCII();
    
    return EXIT_SUCCESS; 

}
