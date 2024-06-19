/ TREINAMENTO RAMIDE [19 Jun 2024]
// Prova OBI - Senior - Fase 1
// Questao 02 - RELOGIO
// Finished by 18 Jun 2024
// Time spent: 10min 20s

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int h, m, s, t;
    
    scanf("%d %d %d %d", &h, &m, &s, &t);
    
    s+=t%60;
    
    t = t/60;
    
    m+=t%60;
    
    t = t/60;
    
    h+=t;
    
    if (s>59) {
        m++;
        s-=60;
    }
    
    if (m>59) {
        h++;
        m-=60;
    }
    
    while (h>23) {
        h-=24;
    }
    
    
    printf("%d\n", h);
    printf("%d\n", m);
    printf("%d\n", s);
    
    return 0;
}