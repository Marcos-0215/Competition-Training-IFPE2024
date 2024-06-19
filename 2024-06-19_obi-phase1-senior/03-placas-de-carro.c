// TREINAMENTO RAMIDE [19 Jun 2024]
// Prova OBI - Senior - Fase 1
// Questao 03 - PLACAS DE CARRO
// Finished by 18 Jun 2024


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    
  char placa[11];
  
  scanf("%s", placa);
  
  int res = 0;
  
  int size = 0;
  
  for (int i=0; placa[i]!='\0'; i++) {
    size++;
  }
  
  // A -> 65
  // Z -> 90
  // 0 -> 48
  // 9 -> 57
  
  //printf("%d\n", size);
  
  if (size==8) {

    if (!(placa[0]>=65 && placa[0]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    
    if (!(placa[1]>=65 && placa[1]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[2]>=65 && placa[2]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    if (placa[3]!='-') {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[4]>=48 && placa[4]<=57)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[5]>=48 && placa[5]<=57)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[6]>=48 && placa[6]<=57)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[7]>=48 && placa[7]<=57)) {
      printf("%d\n", res);
      return 0;
    }
  
    printf("%d\n", 1);
    return 0;
  }

  if (size==7) {
    if (!(placa[0]>=65 && placa[0]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    
    if (!(placa[1]>=65 && placa[1]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[2]>=65 && placa[2]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[3]>=48 && placa[3]<=57)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[4]>=65 && placa[4]<=90)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[5]>=48 && placa[5]<=57)) {
      printf("%d\n", res);
      return 0;
    }
    if (!(placa[6]>=48 && placa[6]<=57)) {
      printf("%d\n", res);
      return 0;
    }
  
    printf("%d\n", 2);
    return 0;
  }
  
  printf("%d\n", res);
  
  return 0;
}