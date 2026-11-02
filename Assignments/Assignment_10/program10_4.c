#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : Converts temperature from Fahrenheit to Celsius
// Input         : Float (Fahrenheit)
// Output        : Double (Celsius)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dAns = 0.0;
    
    dAns = (double)(fTemp - 32.0f) * (5.0 / 9.0);
    return dAns;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue1);

    dRet = FhtoCs(fValue1);

    printf("Temperature in Celsius is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}