#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Description   : Displays student grade based on marks out of 100
// Input         : Float (or Integer)
// Output        : String (Grade A, B, C, D, Fail, Invalid Marks)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100.0f))
    {
        printf("Invalid Marks\n");
    }
    else if (fMarks >= 90.0f && fMarks <= 100.0f)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75.0f && fMarks < 90.0f)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60.0f && fMarks < 75.0f)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40.0f && fMarks < 60.0f)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}