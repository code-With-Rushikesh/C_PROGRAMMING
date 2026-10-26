#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)

    int icnt = 0;

    for(icnt = 1; icnt <= 4; icnt++)

        printf("jay ganesh...\n");
    

int main()
{
    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
