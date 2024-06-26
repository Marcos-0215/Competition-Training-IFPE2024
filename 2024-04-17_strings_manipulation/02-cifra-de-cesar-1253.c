// TREINAMENTO RAMIDE 
// [17 Apr 2024] Manipulacao de Strings
// Problema 02 - Cifra de César (Beecrowd 1253)

// Finished by 14 Apr 2024
// Time spent: ??


#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        
        char str[51];
        scanf("%s", str);
        int num;
        scanf("%d", &num);
        
        for (int j=0; j<strlen(str); j++) {
            
            str[j] -= num;
            
            if (str[j] < 65) {
                str[j] += 26;
            } 
        }
        
        printf("%s\n", str);
    }
    
    return 0;
}