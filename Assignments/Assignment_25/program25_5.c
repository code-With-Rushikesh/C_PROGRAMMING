#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Description   : Accept division (A-D, case insensitive) and display exam timing
// Input         : Character (Division) enter (c/C)
// Output        : Exam schedule message (c -> exam time is 9:20)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if ((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if ((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if ((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if ((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);
    
    return EXIT_SUCCESS; 

}