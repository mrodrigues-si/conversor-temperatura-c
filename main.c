include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius, por favor: ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em fahrenheit e: %.1f\n", fahrenheit);

     return 0;

}
