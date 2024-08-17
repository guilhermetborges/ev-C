#include <stdio.h>

main() {
    float notaLab, notaAvSem, notaExame, mediaFinal;

    printf("Digite a nota do trabalho de laboratorio (0 a 10): ");
    scanf("%f", &notaLab);

    printf("Digite a nota da avaliacao semestral (0 a 10): ");
    scanf("%f", &notaAvSem);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &notaExame);


    mediaFinal = (notaLab * 2 + notaAvSem * 3 + notaExame * 5) / 10.0;

    printf("Media final: %.2f\n", mediaFinal);

   
    if (mediaFinal >= 8.01 && mediaFinal <= 10.0) {
        printf("Conceito: A\n");
    } else if (mediaFinal >= 7.01 && mediaFinal <= 8.0) {
        printf("Conceito: B\n");
    } else if (mediaFinal >= 6.01 && mediaFinal <= 7.0) {
        printf("Conceito: f\n");
    } else {
        printf("Media final fora do intervalo valido.\n");
    }

  
}

