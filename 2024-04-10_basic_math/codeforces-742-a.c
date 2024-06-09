// Completed 13 APRIL 2024

// LINK: https://codeforces.com/contest/742/problem/A

#include <stdio.h>

int main() {
    
    int n, result=0;
    
    scanf("%d", &n);
    
    if (n%4==1) {
        result=8;
    } else if (n%4==2) {
        result=4;
    } else if (n%4==3) {
        result=2;
    } else if (n%4==0) {
        result=6;
    }
    
    printf("%d", result);
    
    return 0;
}