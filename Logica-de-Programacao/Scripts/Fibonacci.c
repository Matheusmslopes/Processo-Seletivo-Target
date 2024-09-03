#include <stdio.h>

int isFibonacci(int numero) {
    // a variável b vai ser a responsável pelo armazenamento da resposta da sequência de Fibonacci
    int a = 0, b = 1, c;
    
    // Se o número for 0 ou 1, ele automaticamente pertence a sequência de Fibonacci
    if (numero == 0 || numero == 1) {
        return 1;
    }
    
    while (b < numero) {
        c = a + b;
        a = b;
        b = c;
    }
    
    // Verifica se o número informado é igual ao valor atual de 'b'
    return (b == numero);
}

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%i", &numero);
    
    // Verifica se o número informado pertence a sequência de Fibonacci
    if (isFibonacci(numero)) {
        printf("O numero %i pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %i não pertence a sequencia de Fibonacci.\n", numero);
    }
    
    return 0;
}