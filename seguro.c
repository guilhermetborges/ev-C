#include <stdio.h>

main() {
    int idade;
    char grupoRisco;

    printf("Digite a idade do segurado: ");
    scanf("%d", &idade);


    printf("Digite o grupo de risco do segurado (b para baixo, m para medio, a para alto): ");
    scanf(" %c", &grupoRisco);

 	if (idade < 18 || idade > 70) {
    printf("Idade fora do intervalo permitido para adquirir apolices de seguros.\n");
   } else if (idade >= 18 && idade <= 24) {
        if (grupoRisco == 'b' || grupoRisco == 'B') {
            printf("Codigo do seguro: Baixo\n");
        } else {
            printf("Grupo de risco invalido para a faixa etaria de 18 a 24 anos.\n");
        }
    } else if (idade >= 25 && idade <= 40) {
        if (grupoRisco == 'm' || grupoRisco == 'M') {
            printf("Codigo do seguro: Medio\n");
        } else {
            printf("Grupo de risco invalido para a faixa etaria de 25 a 40 anos.\n");
        }
    } else if (idade >= 41 && idade <= 70) {
        if (grupoRisco == 'a' || grupoRisco == 'A') {
            printf("Codigo do seguro: Alto\n");
        } else {
            printf("Grupo de risco invalido para a faixa etaria de 41 a 70 anos.\n");
        }
    }

}

