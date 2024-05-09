// DONE: 11 APRIL 2024
// LINK: https://judge.beecrowd.com/problems/view/2419

#include <stdio.h>

int main() {
    
    int m, n;
    
    scanf("%d", &m);
    scanf("%d", &n);

    char grid[m][n+1];
    
    for (int i=0; i<m; i++) {
        
        scanf("%s", grid[i]);
    }
    
    int count = 0;
    
    for (int i=0; i<m; i++) {
        
        for (int j=0; j<n; j++) {
            
            if (grid[i][j] == '#' &&
            (grid[i][j-1] == '.' || (j-1) < 0 || grid[i][j+1] == '.' || (j+1) == n || grid[i - 1][j] == '.' || (i-1) < 0 || grid[i + 1][j] == '.' || (i+1) == m) 
            ) {
                count++;
                //grid[i][j] = 'C';
            }
        }
    }
    
    
    /*
    for (int i=0; i<m; i++) {
        
        for (int j=0; j<n; j++) {
            
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
    */
    
    printf("%d\n", count);
    
    return 0;
}