#include "Binary-DecimalConversions.h"

int decimalToBinary(int D, int N)
{
    int i;
    int binaryNum[BITMAX];
    for (i = 0; i < N; i++)
    {
        if (D == 0)
            binaryNum[i] = 0;
        else
            binaryNum[i] = (D % 2);
        D = D / 2;
    }
    if (D == 0 ) {
        for (i = N-1; i >= 0; i--) {
            printf("%d", binaryNum[i]);
        }
        printf("\n");
    }
    else
        printf("Numero di bit non succificiente per rappresentare il numero \n");
    return 0;
}

int binaryToDecimal(char binaryNum[BITMAX])
{
    int i = 0, n = 0;
    while (binaryNum[i] == '0')
        i++;
    while (binaryNum[i] != '\n')
    {
        if (binaryNum[i] == '1')
            n = (n * 2) + 1;
        else
            n = n * 2;
        i++;
    }
    return n;
}
