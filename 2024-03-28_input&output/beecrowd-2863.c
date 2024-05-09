// Completed 11 APRIL 2024

// LINK: https://judge.beecrowd.com/problems/view/2863

#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF) {
        float run, min = 99.9;
        
        for (int i=0; i<n; i++) {
            scanf("%f", &run);
            
            if (run < min) {
                min = run;
            }
        }
        
        printf("%.2f\n", min);
    }
    
    
    return 0;
}