#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh"; // space travel 
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while (*ptr != '\0')
    {
        printf("%c\n",*ptr); // (%c) for char
        ptr++; 
    }
    
    
    return EXIT_SUCCESS;
}