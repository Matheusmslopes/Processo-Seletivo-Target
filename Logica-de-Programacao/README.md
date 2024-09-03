# Logica de Programação

 ## Segue a resposta de cada questão: 
• [Questão 01](#questão01) <br>
• [Questão 02](#questão02) <br>
• [Questão 03](#questão03)  //// [Link para o arquivo JSON de faturamento](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Scripts/FaturamentoEmpresa/faturamento.json) <br>
• [Questão 04](#questão04) <br>
• [Questão 05](#questão05)

## Questão01
Observe o trecho de código abaixo:

    int INDICE = 13, SOMA = 0, K = 0;

    enquanto K < INDICE faça
    {
    	K = K + 1;
    	SOMA = SOMA + K;
    }

    imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?

### Resolução: O valor presente na variável SOMA será de 91.

---

## Questão02
Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

### Resolução: O código foi feito em C
```c
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
```
### Output:
![Numero presente na sequência de Fibonacci](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Outputs/FibonacciPresente.png) <br>
![Numero não presente na sequência de Fibonacci](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Outputs/FibonacciNaoPresente.png) 

---

## Questão03
Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne: <br>
• O menor valor de faturamento ocorrido em um dia do mês; <br>
• O maior valor de faturamento ocorrido em um dia do mês; <br>
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. <br>

IMPORTANTE: <br>
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal; <br>
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;

### Resolução: O código foi feito em Python.
```py
import json

def carregar_dados(json_file):
    with open(json_file, 'r') as file:
        dados = json.load(file)
    return dados

def calcular_faturamento(dados):
    valores = [dia['valor'] for dia in dados if dia['valor'] > 0]
    
    menor_faturamento = min(valores)
    maior_faturamento = max(valores)
    media_mensal = sum(valores) / len(valores)
    
    dias_acima_da_media = sum(1 for valor in valores if valor > media_mensal)
    
    return menor_faturamento, maior_faturamento, dias_acima_da_media

def main():
    dados = carregar_dados('dados.json')
    menor_faturamento, maior_faturamento, dias_acima_da_media = calcular_faturamento(dados)
    
    print(f"Menor valor de faturamento: R$ {menor_faturamento:.2f}")
    print(f"Maior valor de faturamento: R$ {maior_faturamento:.2f}")
    print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")

if __name__ == "__main__":
    main()
```

### Output:
![Faturamento](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Outputs/Faturamento.png) 
---

## Questão04
Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
• SP – R$67.836,43 <br>
• RJ – R$36.678,66 <br>
• MG – R$29.229,88 <br>
• ES – R$27.165,48 <br>
• Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.

### Resolução: O código foi feito em C
```c
#include <stdio.h>

int main() {
    float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53;
    
    float total = SP + RJ + MG + ES + outros;
    
    float percentualSP = (SP/total) * 100;
    float percentualRJ = (RJ/total) * 100;
    float percentualMG = (MG/total) * 100;
    float percentualES = (ES/total) * 100;
    float percentualOutros = (outros/total) * 100;
    
    printf("Representação percentual de cada estado: \n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
    
    return 0;
}
```

### Output:
![RepresentaçãoPercentualPorEstado](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Outputs/RepesentacaoPorEstado.png) 
---

## Questão05
Escreva um programa que inverta os caracteres de um string.

IMPORTANTE: <br>
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código; <br>
b) Evite usar funções prontas, como, por exemplo, reverse;

### Resolução: O código foi feito em C
```c
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
```

### Output: 
![ReverterPalavra](https://github.com/Matheusmslopes/Processo-Seletivo-Target/blob/main/Logica-de-Programacao/Outputs/ReverterPalavra.png) 
