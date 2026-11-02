#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Calculates area of a circle given its radius
// Input         : Float (Radius)
// Output        : Double (Area)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    double dArea = 0.0;

    if (fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}
