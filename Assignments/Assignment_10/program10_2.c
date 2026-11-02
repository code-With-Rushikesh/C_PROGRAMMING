#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Calculates area of a rectangle given width and height
// Input         : Float, Float (Width, Height)
// Output        : Double (Area)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if (fWidth < 0.0f)
    {
        fWidth = -fWidth;
    }
    if (fHeight < 0.0f)
    {
        fHeight = -fHeight;
    }

    dArea = (double)fWidth * fHeight;

    return dArea;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}