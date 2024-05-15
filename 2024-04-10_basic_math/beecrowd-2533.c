// Completed 13 APRIL 2024

// LINK: https://judge.beecrowd.com/problems/view/2533

#include <stdio.h>

int main() {
    
    int m;
    
    while (scanf("%d", &m) != EOF) {
        
        
        int soma1=0, soma2=0;
        
        for (int i=0; i<m; i++) {
            int n, c;
            scanf("%d %d", &n, &c);
        
            soma1 += n*c;
            soma2 += c;
        }
        
        printf("%.4f\n", soma1 / (soma2 * 100.0) );
        
    }
    
    return 0;
}
