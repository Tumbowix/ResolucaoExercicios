#include <stdio.h>

int main () {
    int lado, area;
    printf("\n\ninforme o lado do quadrado: \n");
    scanf("%d", &lado);

    area = lado * lado;
    printf("\n\nA area do quadrado eh: %d", area);

    return 0;
}