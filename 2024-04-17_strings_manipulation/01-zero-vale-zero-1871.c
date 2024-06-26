// TREINAMENTO RAMIDE 
// [17 Apr 2024] Manipulacao de Strings
// Problema 01 - Zero vale Zero (Beecrowd 1871)

// Finished by 14 Apr 2024
// Time spent: ??

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int m=1, n=1;
    
    
    while (scanf("%d", &m)>0 && scanf("%d", &n)>0) {
        
        
        if (m==0 && n==0) {
            break;
        }
        
        
        int soma = m+n;
        char str[11];
        char result[11];
        
        sprintf(str, "%d", soma);
        
        int j = 0;
        for (int i=0; i<sizeof(str)/sizeof(str[0]); i++) {

            if (str[i] != '0') {
                result[j] = str[i];
                j++;
            }
        }
        
        /*
        for (int i=0; i<sizeof(result)/sizeof(result[0]); i++) {
            
            printf("%c", result[i]);
        }
        
        printf("\n");
        */
        
        soma = atoi(result);
        
        printf("%d\n", soma);
        
    }
    
    return 0;
}