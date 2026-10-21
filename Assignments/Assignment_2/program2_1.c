#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Funcation Name :  Display
//  Description    :  Accept one number from user and print that number of * on screen
//  Input          :  Integer
//  Output         :  * on Screen
//  Author         :  Rushikesh Mahesh Suryawanshi
//  Date           :  21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int icnt = 0;

    // Write Updater
    while(icnt < iNo)
    {
        printf("*");
        icnt++;
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
