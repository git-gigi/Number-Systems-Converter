//Convertitore Decimale-Binario con numero di Bit
#include <stdio.h>
#include "Binary-DecimalConversions.h"

int main (void)
{
    int b;
    printf("Inserisci 0 per convertire da decimale a binario, inserisci 1 per convertire da binario a decimale: \n");
    scanf("%d", &b);
    scanf("%*c");
    
    if (b == 0) {
        int D, N;
        printf("Inserisci il numero da trasformare in binario: \n");
        scanf("%d", &D);
        printf("Inserisci il numero di bit: \n");
        scanf("%d", &N);
        
        decimalToBinary(D, N);
    }
    else if (b == 1)
    {
        int i = 0;
        char c;
        char binaryNum[BITMAX];
        printf("Inserisci numero binario: \n");
        
        do {
            scanf("%c", &c);
            binaryNum[i] = c;
            i++;
        } while (binaryNum[i-1] != '\n');
        printf("%d\n", binaryToDecimal(binaryNum));
    }
    else
        printf("Numero inserito non valido!");
}


