#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, farenheit;

    printf("Digite a temperatura em graus celsius, por favor: ");
    scanf("%f",&celsius);

    farenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em farenheit e: %.1f\n", farenheit);

     return 0;

}
