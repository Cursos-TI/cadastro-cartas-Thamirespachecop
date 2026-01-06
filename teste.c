#include <stdio.h>

int main() {
    char cidade1[100];

    printf("Digite uma frase: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    // Remove o '\n' que o fgets guarda no final
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Você digitou: %s\n", cidade1);

    return 0;
}

