// Completed 13 APRIL 2024

// LINK: https://judge.beecrowd.com/problems/view/3056

#include <stdio.h>
#include <math.h>

int main() {
    
    long long int n;
    
    scanf("%lld", &n);
    
    printf("%lld\n",  ((long long int)pow(2, n) + 1) * ((long long int)pow(2, n) + 1));
    
    return 0;
}