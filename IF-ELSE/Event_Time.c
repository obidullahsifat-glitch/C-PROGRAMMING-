#include <stdio.h>

int main() {
    int st, h1, m1, s1;
    int end, h2, m2, s2;

    
    scanf("Dia %d", &st);
    scanf("%d : %d : %d", &h1, &m1, &s1);

    scanf(" Dia %d", &end);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start_sec = st * 86400 + h1 * 3600 + m1 * 60 + s1;
    int end_sec = end * 86400 + h2 * 3600 + m2 * 60 + s2;

    
    int diff = end_sec - start_sec;

    
    int days = diff / 86400;
    diff = diff % 86400;

    int hours = diff / 3600;
    diff = diff % 3600;

    int minutes = diff / 60;
    int seconds = diff % 60;

    
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}