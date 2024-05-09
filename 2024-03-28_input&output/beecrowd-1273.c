// DONE: 11 APRIL 2024
// LINK: https://judge.beecrowd.com/problems/view/1273

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    while (n) {
        int max = 1;
        char name[n][50];
        
        for (int i=0; i<n; i++) {
            
            scanf("%s", name[i]);
            
            if (strlen(name[i]) > max) {
                max = strlen(name[i]);
            }
        }
        
        for (int j=0; j<n; j++) {
            printf("%*s\n", max, name[j]);
        }
        
        scanf("%d", &n);
        
        if (n) {
            printf("\n");
        }
    }
    
    return 0;
}