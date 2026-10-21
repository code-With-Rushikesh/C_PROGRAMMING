#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description   : Determines voting eligibility based on age
//  Input         : Integer
//  Output        : String (Eligible / Not Eligible / Invalid Age)
//  Author        : Rushikesh Mahesh Suryawanshi
//  Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}