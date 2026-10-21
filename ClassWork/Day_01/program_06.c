/*
    step 1 : Understand the probleam statement
    step 2 : Write the algorithm
    step 3 : Decide the programming language
    step 4 : Write the program
    step 5 : Test the program

*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// step 1 : Understand the probleam statement
//          user is going to enter any 2 integer
//          and we have to perforam addition
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// step 2 : write the algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perforam the addition and store into Ans
        Display the result from Ans
    END
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 3 : Decide the programming language
//          we select the c programming
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// step 4 : Write the program
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;    // Business Logic

    return iAns;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);   

    printf("Addition is : %d\n",iResult);

    return 0;
}


