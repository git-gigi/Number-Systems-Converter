//Convertitore Decimale-Binario con numero di Bit
#include <stdio.h>
#include "conversions.h"

int main (void)
{
    int b;
    printf("Opzioni: \n- 0 per convertire da decimale a binario;\n- 1 per convertire da binario a decimale;\n- 2 per convertire da decimale a esadecimale;\nInserisci numero: \t");
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
        char binaryNum[MAX];
        printf("Inserisci numero binario: \n");
        
        do {
            scanf("%c", &c);
            binaryNum[i] = c;
            i++;
        } while (binaryNum[i-1] != '\n');
        if (i <= MAX)
            printf("Il numero decimale è: \n %d\n", binaryToDecimal(binaryNum));
        else
            printf("Numero binario troppo elevato!\n");
    }
    else if (b == 2)
    {
        int N;
        printf("Inserisci un numero da convertire in esadecimale: \n");
        scanf("%d", &N);
        scanf("%*c");
        
        decimalToExadecimal(N);
    }
    else
        printf("Numero inserito non valido!");
    
    return 0;
}


