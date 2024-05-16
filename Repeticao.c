#include <stdio.h>

// Função para contar o número de repetições de um dígito em um número
int contarRepeticoes(int numero, int digito) {
    // Inicializa as variáveis
    int repeticoes = 0;
    int ultimoDigito = -1; // Inicializa com um valor diferente do dígito para não considerar a repetição no início do número

    // Loop para percorrer os dígitos do número
    while (numero > 0) {
        int digitoAtual = numero % 10; // Obtém o último dígito do número
        numero /= 10; // Remove o último dígito do número

        // Verifica se o dígito atual é igual ao dígito desejado e se é igual ao último dígito verificado
        if (digitoAtual == digito && digitoAtual == ultimoDigito) {
            repeticoes++; // Incrementa o contador de repetições
        }

        ultimoDigito = digitoAtual; // Atualiza o último dígito verificado
    }

    return repeticoes; // Retorna o número de repetições encontradas
}

int main() {
    int numero, digito;

    // Solicita que o usuário insira o número e o dígito
    printf("Digite um numero inteiro positivo e maior que zero: ");
    scanf("%d", &numero);
    printf("Digite um numero inteiro de um unico digito: ");
    scanf("%d", &digito);

    // Verifica se o dígito está dentro do intervalo permitido
    if (digito < 0 || digito > 9) {
        printf("Digite um numero inteiro de um unico digito valido.\n");
        return 1;
    }

    // Chama a função contarRepeticoes e exibe o resultado
    int repeticoes = contarRepeticoes(numero, digito);
    printf("Quantidade de repeticoes do digito %d: %d\n", digito, repeticoes);

    return 0;
}

