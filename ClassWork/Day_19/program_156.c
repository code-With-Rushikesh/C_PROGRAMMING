#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");

    fgets(Arr,sizeof(Arr),stdin); // ^

    printf("Entered String is : %s\n",Arr);
    
    return EXIT_SUCCESS;
}
