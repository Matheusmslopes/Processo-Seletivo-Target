#include <stdio.h>
#include <string.h>

void inverter_palavra(char *str) {
    int n = strlen(str);
    char temp;
    
    // o loop vai até a metade, pois ele vai trocando os caracteres, se ele passar da metade, ele estaria "destrocando" os caracteres
    for (int i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char palavra[100];  
    
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    // Remove o caractere de nova linha '\n' que o fgets pode adicionar
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("Palavra original: %s\n", palavra);

    inverter_palavra(palavra);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}