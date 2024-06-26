// TREINAMENTO RAMIDE 
// [17 Apr 2024] Manipulacao de Strings
// Problema 03 - Jogo de Palavras (Beecrowd 3313)

// Finished by ?? Apr 2024
// Time spent: ??


#include <stdio.h>
#include <string.h>

void rotacionar (char str[]);

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
        char min[100001];
        char max[100001];
        strcpy(min, str);
        strcpy(max, str);
        
        for (int i=0; i<len; i++) {
            rotacionar(str);
            
            if (strcmp(str, min) < 0) {
                strcpy(min, str);
            }
            
            if (strcmp(str, max) > 0) {
                strcpy(max, str);
            }

        }
        
        printf("Caso %d: %s %s\n", cont, min, max);

    }
    
    return 0;
}

void rotacionar (char str[]) {
    char carac0 = str[0];
    int len = strlen(str);
    
    for (int i=1; i<len; i++) {
        str[i-1] = str[i];
    }
    
    str[len - 1] = carac0;
}
