// TREINAMENTO RAMIDE [19 Jun 2024]
// Árvores e Grafos - Rodada 1
// Problema 01 - Árvore Binária de Busca 
// https://judge.beecrowd.com/pt/problems/view/1195

// Finished by 14 Jul 2024
// Time Spent: 48min 30s


#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

struct node* insert(struct node* head, int num) {
  if (head==NULL) {
    head = (struct node*)malloc(sizeof(struct node));
    head->data = num;
    head->left = NULL;
    head->right = NULL;
    
  } else {
    if (num < head->data) {
      head->left = insert(head->left, num);
    } else {
      head->right = insert(head->right, num);
    }
  }
  return head;
}

void printPrefixo(struct node* head) {
  if (head==NULL) {
    return;
  } else {
    printf(" %d", head->data);
    printPrefixo(head->left);
    printPrefixo(head->right);
  }
}

void printInfixo(struct node* head) {
  if (head==NULL) {
    return;
  } else {
    if (head->left != NULL) {
      printInfixo(head->left);
    }
    printf(" %d", head->data);
    printInfixo(head->right);
  }
}

void printPosfixo(struct node* head) {
  if (head==NULL) {
    return;
  } else {
    if (head->left != NULL) {
      printPosfixo(head->left);
    }
    if (head->right != NULL) {
      printPosfixo(head->right);
    }
    printf(" %d", head->data);
  }
}


int main() {
  int c;
  scanf("%d", &c);
  
  for (int i=0; i<c; i++) {
    int n;
    scanf("%d", &n);
    struct node* head = NULL;
    
    for (int j=0; j<n; j++) {
      int num;
      scanf("%d", &num);
      head = insert(head, num);
    }
    
    printf("Case %d:\n", i+1);
    
    printf("Pre.:");
    printPrefixo(head);
    printf("\n");
    
    printf("In..:");
    printInfixo(head);
    printf("\n");
    
    printf("Post:");
    printPosfixo(head);
    printf("\n");
    printf("\n");
    
  }
  return 0;
}