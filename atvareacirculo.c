#include <stdio.h>
int main() {
    float pi = 3.14159, r, area;
    printf("Digite o valor do raio em cm:\n");
    scanf("%f", &r);
    area = (pi * r * r) * 0.0001;
    printf("O valor da �rea em m2 �: %.4f", area);
return 0;
}

