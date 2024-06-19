// TREINAMENTO RAMIDE [19 Jun 2024]
// Prova OBI - Senior - Fase 1
// Questao 01 - OGRO
// Finished by 18 Jun 2024
// Time spent: 19min 30s

/*
OBS.: o jeito ideal de resolver essa é usando um algoritmo de ordenação (sorting). E depois disso, basta apenas dar o printf no elemento [k-1], e temos o resultado final.

Já fiz um bubblesort há um tempo, mas tava bem esquecido (teria q fazer quase do 0) e não tinha certeza se ia fazer conseguir funcionar corretamente.

Então, para não arriscar perder tempo, resolvi fazer de uma forma mais manual: criando outro array que iria armazenar os k maiores elementos do array original. E depois, fazer outro loop neste novo array em busca do menor elemento.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int n, k;
    
    // n -> numero de participantes
    // k -> numero minimo de candidatos q dever sem aprovados
    
    scanf("%d %d", &n, &k);
    
    int notas[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &notas[i]);
    }
    
    int maiores[n];
    int maioresInd=0;
    
    
    for (int i=0; i<k; i++) {
        int max=0;
        int maxInd;
        for (int j=0; j<n; j++) {
            if (notas[j]>max) {
                max = notas[j];
                maxInd = j;
                maiores[maioresInd] = notas[j];
            }
        }
        notas[maxInd] = 0;
        maioresInd++;
    }
    
    
    int c=200;
    
    for (int i=0; i<maioresInd; i++) {
        if (maiores[i]<c) {
            c = maiores[i];
        }
    }
    
    printf("%d\n", c);
    
    return 0;
}