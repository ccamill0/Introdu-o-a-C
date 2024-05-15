#include <stdio.h>

// Função para verificar se um número é palíndromo
int ehPalindromo(int num) {
    if (num <= 0) {
        return 0; // Retorna 0 se o número for 0 ou negativo
    }
    
    int original = num;
    int reverso = 0;

    // Inverte o número
    while (num != 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    // Verifica se o número original é igual ao reverso
    if (original == reverso) {
        return 1; // Retorna 1 se o número for palíndromo
    } else {
        return 0; // Retorna 0 se o número não for palíndromo
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é palíndromo e exibe o resultado
    if (ehPalindromo(numero)) {
        printf("%d e um numero palindromo.\n", numero);
    } else {
        printf("%d nao e um numero palindromo ou e invalido.\n", numero);
    }

    return 0;
}

