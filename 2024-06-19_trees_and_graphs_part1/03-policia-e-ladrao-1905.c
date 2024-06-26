// TREINAMENTO RAMIDE
// [19 Jun 2024] Árvores e Grafos - Rodada 1

// Problema 03 - Polícia e Ladrão
// https://judge.beecrowd.com/pt/problems/view/1905

// Finished by 25 Jun 2024
// Time Spent: 60min


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void search(int matrix[5][5], int visited[5][5], int row, int col) {
    
    if (row>4 || row<0 || col>4 || col<0) {
        return;
    }
    
    if (visited[row][col]==1) {
        return;
    }
    
    if (matrix[row][col]==0) {
        visited[row][col] = 1;
        search(matrix, visited, row, col+1);
        search(matrix, visited, row, col-1);
        search(matrix, visited, row+1, col);
        search(matrix, visited, row-1, col);
      
    } 
    
    // "ROBBERS" -> 0
    // "COPS" -> 1
    
}

int main() {
    
    int t;
    
    scanf("%d", &t);
    
    for (int i=0; i<t; i++) {
        
        int matrix[5][5];
        
        for (int j=0; j<5; j++) {
            for (int k=0; k<5; k++) {
                scanf("%d", &matrix[j][k]);
            }
        }
        
        int visited[5][5];
        memset(visited, 0, sizeof(visited));
        
        search(matrix, visited, 0, 0);
        
        
        //printf("----\n");
        
        if (visited[4][4]) {
            printf("COPS\n");
        } else {
            printf("ROBBERS\n");
        }
        
        
        /*
        printf("----VISITED----\n");
        for (int j=0; j<5; j++) {
            for (int k=0; k<5; k++) {
                printf("%d ", visited[j][k]);
            }
            printf("\n");
        }
        printf("----\n");
        */

    }
    
    return 0;
}
