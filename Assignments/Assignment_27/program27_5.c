#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Description   : Accept string and display it in reverse order
// Input         : Character pointer (String) (ganesh)
// Output        : Reversed string display (hsenag)
// Author        : Rushikesh Mahesh Suryawanshi
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////////////////////////////

void ReverseString(char *str)
{
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    while(iLength > 0)
    {
        printf("%c", str[iLength-1]);
        iLength--;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Of The Application
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];

    printf("Enter String : \n");
    scanf("%[^'\n']", Arr);

    ReverseString(Arr);
    
    return EXIT_SUCCESS; 

}