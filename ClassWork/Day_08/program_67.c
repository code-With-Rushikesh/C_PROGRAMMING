#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int icnt = 0;

    printf("Factors of %d are : \n",iNo);

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if((iNo % icnt ) == 0)
        {
            printf("%d\n",icnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : Order of (N)