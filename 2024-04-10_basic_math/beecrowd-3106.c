// Completed 13 APRIL 2024

// LINK: https://judge.beecrowd.com/problems/view/3106

#include <stdio.h>

int main() {
    
    int n, result;
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        
        int s;
        
        scanf("%d", &s);
        
        s = (int)s/3;
        
        result += s;
    }
    
    printf("%d\n", result*3);
    
    return 0;
}