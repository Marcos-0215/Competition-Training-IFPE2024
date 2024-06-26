// TREINAMENTO RAMIDE 
// [17 Apr 2024] Manipulacao de Strings
// Problema 03 - Jogo de Palavras (Beecrowd 3313)

// Finished by ?? Apr 2024
// Time spent: ??

/* **************************************
SOLUÇÃO ERRADA (manual, tentando fazer o algoritmo sozinho, sem perceber que a ordem alfabética se aplicada além do 1o caractere = ordem lexicográfica)
******************************************* */

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100001];
    char aster[2] = "*";
    int stop = 1;
    
    int cont = 0;
    
    while (stop != 0) {
        
        scanf("%s", str);
        stop = strcmp(aster, str);
        if (stop == 0) {
            break;
        }
        
        cont++;

        int len = strlen(str);
        int max = 1;
        int min = 127;
        int indexMax, indexMin;
        
        for (int i=0; i<len; i++) {
            
            if (str[i] > max) {
                max = str[i];
                indexMax = i;
            }
            
            if (str[i] < min) {
                min = str[i];
                indexMin = i;
            }
        }
        
        char caso1[100001] = "";
        
        for (int i=0; i<len-indexMin; i++) {
            caso1[i] = str[i+indexMin];
        }
        
        for (int i=len-indexMin; i<len; i++) {
            caso1[i] = str[i-(len-indexMin)];
        }
        
        char caso2[100001] = "";
        
        for (int i=0; i<len-indexMax; i++) {
            caso2[i] = str[i+indexMax];
        }
        
        for (int i=len-indexMax; i<len; i++) {
            caso2[i] = str[i-(len-indexMax)];
        }
        
        printf("Caso %d: %s %s\n", cont, caso1, caso2);

    }
    
    return 0;
}