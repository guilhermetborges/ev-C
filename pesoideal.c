#include <stdio.h>

 main() {
    float altura, ideal;
    char sexo;

   
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);


    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); 
    if (sexo == 'M' || sexo == 'm') {
        ideal = (72.7 * altura) - 58;
        printf("Peso ideal para um homem: %.2f kg\n", ideal);
    } else if (sexo == 'F' || sexo == 'f') {
       ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal para uma mulher: %.2f kg\n", ideal);
    } else {
        printf("Sexo invalido! Por favor, digite 'M' para masculino ou 'F' para feminino.\n");
    }

}

