#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : Calculates electricity bill based on units consumed
// Input         : Integer
// Output        : Float / Amount
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }

    if (iUnits >= 0)
    {
        printf("Payable Bill = %.2f\n", fBill);
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
