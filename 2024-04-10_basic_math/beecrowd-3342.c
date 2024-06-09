// Completed 13 APRIL 2024

// LINK: https://judge.beecrowd.com/problems/view/3342

#include <stdio.h>

int main() {
    
    int n;
    int brancas = 0, pretas = 0;
    
    scanf("%d", &n);
    
    
    if (n%2 == 0) {
        brancas = (int) n*n / 2;
        pretas = brancas;
    } else {
        brancas = (int) n*n / 2 + 1;
        pretas = brancas - 1;
    }
    
    
    
    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);
    
    return 0;
}