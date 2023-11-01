#include "conversions.h"

int decimalToBinary(int D, int N)
{
    if (N <= MAX)
    {
        int i;
        int binaryNum[MAX];
        for (i = 0; i < N; i++)
        {
            if (D == 0)
                binaryNum[i] = 0;
            else
                binaryNum[i] = (D % 2);
            D = D / 2;
        }
        
        
        if (D == 0)
        {
            printf("Il numero binario è: \n");
            for (i = N-1; i >= 0; i--)
            {
                printf("%d", binaryNum[i]);
            }
            printf("\n");
        }
        else
            printf("Numero di bit non succificiente per rappresentare il numero \n");
    }
    else
        printf("Numero di Bit troppo alto!\n");
    return 0;
}

int binaryToDecimal(char binaryNum[MAX])
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

int decimalToExadecimal(int D)
{
    int i;
    int exadecimalNum[MAX];
    char numChar[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (i = 0; D != 0; i++)
    {
        exadecimalNum[i] = D % 16;
        D = D / 16;
    }
    printf("Il numero esadecimale è: \n");
    i--;
    while (i >= 0)
    {
        if (exadecimalNum[i] > 9) {
            exadecimalNum[i] = numChar[exadecimalNum[i]-10];
            printf("%c", exadecimalNum[i]);
        }
        else
            printf("%d", exadecimalNum[i]);
        i--;
    }
    printf("\n");
    return 0;
}


