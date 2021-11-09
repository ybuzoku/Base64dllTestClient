#include <iostream>
#include "Base64Math.h"

int main()
{
    /*****************************************************
        Note: Inputs 1 and 2 MUST be exactly 8 chars long.
        This will be addressed shortly. 
    ******************************************************/
    char* input1 = (char*)"Test3$@e";
    char* input2 = (char*)"OneTwoAz";
    const int numberOfReturnBytes = 9;
    int ret = 0;

    char* returnBuffer = (char*)calloc(numberOfReturnBytes, 1);
    if (returnBuffer == NULL) {
        return -1;
    }
    ret = add64(input1, input2, returnBuffer, numberOfReturnBytes);
    printf("\nThe sum is: ");

    for (int i = 0; i < numberOfReturnBytes; i++) {
        putchar(*(returnBuffer + i));
    }

    ret = sub64(input1, input2, returnBuffer, numberOfReturnBytes);
    printf("\nThe difference is: ");

    for (int i = 0; i < numberOfReturnBytes; i++) {
        putchar(*(returnBuffer + i));
    }
    free(returnBuffer);
    return ret;
}
