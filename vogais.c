#include <stdio.h>
#include <ctype.h>

int contarVogais(char *frase) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int numeroVogais = contarVogais(frase);
    printf("Numero de vogais: %d\n", numeroVogais);

    return 0;
}

