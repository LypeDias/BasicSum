#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float num1, num2, soma;

    printf("Digite seu primeiro n�mero:");
    scanf("%f", &num1);

    printf("Digite seu segundo n�mero:");
    scanf("%f", &num2);

    soma = num1+num2;

    printf("Sua soma � igual a:%f", soma);


}
