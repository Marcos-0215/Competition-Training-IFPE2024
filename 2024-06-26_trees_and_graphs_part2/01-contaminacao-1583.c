// TREINAMENTO RAMIDE
// [26 Jun 2024] Árvores e Grafos - Rodada 2

// Problema 01 - Contaminação 
// https://judge.beecrowd.com/pt/problems/view/1583

// Finished by 26 Jun 2024
// Time Spent: 23min50s


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void estimarContaminacao(int n, int m, char matrix[n][m+1], int row, int col) {
    
    if (matrix[row][col]=='X' || matrix[row][col]=='A') {
        return;
    } else {
        // CHECK LEFT
        if (col-1>=0 && matrix[row][col-1]=='A') {
            matrix[row][col-1]='T';
            estimarContaminacao(n, m, matrix, row, col-1);
        }
        
        // CHECK RIGHT
        if (col+1<m && matrix[row][col+1]=='A') {
            matrix[row][col+1]='T';
            estimarContaminacao(n, m, matrix, row, col+1);
        }
        
        
        // CHECK UP
        if (row-1>=0 && matrix[row-1][col]=='A') {
            matrix[row-1][col]='T';
            estimarContaminacao(n, m, matrix, row-1, col);
        }
        
        
        // CHECK DOWN
        if (row+1<n && matrix[row+1][col]=='A') {
            matrix[row+1][col]='T';
            estimarContaminacao(n, m, matrix, row+1, col);
        }
        
    }
    
}

int main() {
    
    while (1)  {
        int n, m; // ate 50
        
        scanf("%d %d", &n, &m);
        
        if (n==0) {
            break;
        }
        
        char matrix[n][m+1];
        
        for (int i=0; i<n; i++) {
            scanf("%s", matrix[i]);
        }
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                estimarContaminacao(n, m, matrix, i, j);
            }
        }
        
        
        //printf("\n");
        
        //printf("----------\n");
        for (int i=0; i<n; i++) {
            printf("%s\n", matrix[i]);
            //printf("\n");
        }
        printf("\n");
        
    }
    
    return 0;
}