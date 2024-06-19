// TREINAMENTO RAMIDE [19 Jun 2024]
// Prova OBI - Senior - Fase 1
// Questao 04 - JOGO DA VIDA
// Finished by 18 Jun 2024
// Time Spent: 92min 0s


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void simular(int n, int q, char matrix[n][n+1]) {
    
  char result[n][n+1];
  
  if (q>0) {
    
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        int alive = 0;
        
        // SE CELULA MORTA
        if (matrix[i][j]=='0') {
            
          //CHECK LEFT
          if (j-1>=0 && matrix[i][j-1]=='1') {
            alive++;
          }
          
          //CHECK UP
          if (i-1>=0 && matrix[i-1][j]=='1') {
            alive++;
          }
          
          //CHECK RIGHT
          if (j+1<n && matrix[i][j+1]=='1') {
            alive++;
          }
          
          //CHECK DOWN
          if (i+1<n && matrix[i+1][j]=='1') {
            alive++;
          }
          
          //CHECK LEFT+UP
          if (j-1>=0 && i-1>=0 && matrix[i-1][j-1]=='1') {
            alive++;
          }
          
          //CHECK LEFT+DOWN
          if (j-1>=0 && i+1<n && matrix[i+1][j-1]=='1') {
            alive++;
          }
          
          //CHECK RIGHT+UP
          if (j+1<n && i-1>=0 && matrix[i-1][j+1]=='1') {
            alive++;
          }
          
          //CHECK RIGHT+DOWN
          if (j+1<n && i+1<n && matrix[i+1][j+1]=='1') {
            alive++;
          }
          
          if (alive==3) {
            result[i][j] = '1';
          } else {
            result[i][j] = '0';
          }
            
        }
        
        // SE VIVA
        if (matrix[i][j]=='1') {
          alive = 0;
          
          //CHECK LEFT
          if (j-1>=0 && matrix[i][j-1]=='1') {
            alive++;
          }
          
          //CHECK UP
          if (i-1>=0 && matrix[i-1][j]=='1') {
            alive++;
          }
          
          //CHECK RIGHT
          if (j+1<n && matrix[i][j+1]=='1') {
            alive++;
          }
          
          //CHECK DOWN
          if (i+1<n && matrix[i+1][j]=='1') {
            alive++;
          }
          
          //CHECK LEFT+UP
          if (j-1>=0 && i-1>=0 && matrix[i-1][j-1]=='1') {
            alive++;
          }
          
          //CHECK LEFT+DOWN
          if (j-1>=0 && i+1<n && matrix[i+1][j-1]=='1') {
            alive++;
          }
          
          //CHECK RIGHT+UP
          if (j+1<n && i-1>=0 && matrix[i-1][j+1]=='1') {
            alive++;
          }
          
          //CHECK RIGHT+DOWN
          if (j+1<n && i+1<n && matrix[i+1][j+1]=='1') {
            alive++;
          }
          
          if (alive<2 || alive>3) {
            result[i][j] = '0';
          } else {
            result[i][j] = '1';
          }
            
        }
        
      }
      
      result[i][n] = '\0';
    }
        
    simular(n, q-1, result);
    
  } else {
    //printf("-------\n");
    for (int i=0; i<n; i++) {
      printf("%s", matrix[i]);
      printf("\n");
    }
  }
  
    
}


int main() {
    
  int n, q;
  
  scanf("%d %d", &n, &q);
  
  char matrix[n][n+1];
  
  for (int i=0; i<n; i++) {
      scanf("%s", matrix[i]);
  }
  
  //char result[n][n+1];
  
  // 0 -> 48
  // 1 -> 49
  
  simular(n, q, matrix);
  
  
  /*
  printf("-------\n");
  
  for (int i=0; i<n; i++) {
    printf("%s", result[i]);
    printf("\n");
  }
  
  printf("-------\n");
    
  printf("%d\n", matrix[0][0]);
  printf("%d\n", matrix[1][2]);
  */
  
  
  return 0;
}