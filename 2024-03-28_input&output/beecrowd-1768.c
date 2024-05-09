// DONE: 11 APRIL 2024
// LINK: https://judge.beecrowd.com/problems/view/1768

#include <stdio.h>

int main() {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        
        int alt = n/2 + 1;
        int qntAst = 1;
        int espacos = n/2;
        
        //COPA DA ARVORE (atentando para 3 detalhes: altura da árvore, espaco à esquerda de cada linha da copa, e qnt de asteriscos em cada linha)
        for (int i=0; i<alt; i++) {
            for (int j=0; j<espacos;j++) {
                printf(" ");
            }
            
            for (int k=0; k<qntAst; k++) {
                printf("*");
            }
            
            printf("\n");
             espacos--;
             qntAst+=2;
        }
        
        //BASE DA ARVORE (parte superior)
        for (int i=0; i<n/2;i++) {
            printf(" ");
        }
        printf("*\n");
        
        //BASE DA ARVORE (parte inferior)
        for (int j=0; j<n/2-1;j++) {
            printf(" ");
        }
        printf("***\n\n");

    }
    

    return 0;
}