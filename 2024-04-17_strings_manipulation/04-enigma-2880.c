// TREINAMENTO RAMIDE 
// [17 Apr 2024] Manipulacao de Strings
// Problema 04 - Enigma (Beecrowd 2880)

// Finished by ?? Apr 2024
// Time spent: ??


#include <stdio.h>
#include <string.h>

int main() {
    
    char msg[10001];
    char crib[10001];
    
    scanf("%s", msg);
    scanf("%s", crib);
    
    int msgLen = strlen(msg);
    int cribLen = strlen(crib);
    
    int k = 0; //varia os pontos de comparação
    int count = msgLen-cribLen + 1; // valor final, começa o valor máximo possível e vai diminuindo a cada caractere equivalente encontrado
    
    for (int i=0; i<=msgLen-cribLen; i++) {
        
        for (int j=0; j<cribLen; j++) {
            
            if (msg[j+k] == crib[j]) {
                count--;
                break;
            } 
        }
        k++;
    }

    printf("%d\n", count);

    return 0;
}