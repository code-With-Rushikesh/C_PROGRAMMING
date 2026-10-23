#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Of The Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number : \n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);   

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}


