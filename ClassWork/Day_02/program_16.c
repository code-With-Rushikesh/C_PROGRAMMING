#include "Header.h"
#include<assert.h>

int main()
{
    assert(Additiom(10,11) == 22);

    assert(Additiom(-10,20) == 10);

    assert(Additiom(-10,-20) == -30);
    

    return EXIT_SUCCESS;
}