#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : Calculates shopping discount and final payable amount
// Input         : Float
// Output        : Float / Amount
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid Purchase Amount\n");
    }
    else if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount - (fAmount * fDiscount);
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
    else if (fAmount < 5000.0f)
    {
        fDiscount = 0.10f;
        fFinalAmount = fAmount - (fAmount * fDiscount);
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
    else
    {
        fDiscount = 0.20f;
        fFinalAmount = fAmount - (fAmount * fDiscount);
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}