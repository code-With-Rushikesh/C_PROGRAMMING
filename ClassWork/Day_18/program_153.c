#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Ganesh PUNE";

    printf("%s\n",Arr); 

    printf("Sizeof Array is : %d\n",sizeof(Arr));

    printf("Length of string is : %d\n",strlen(Arr)); 
    
    return EXIT_SUCCESS;
}