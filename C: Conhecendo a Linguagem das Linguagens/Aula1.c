#include <stdio.h>

int main() {
    printf("**********************************\n");
    printf("This is my first Hello World in C!\n");
    printf("**********************************\n");
    // isso é um comentário

    int numeroSecreto = 42;
    printf("O número %d é o secreto... Não conta pra ninguém!\n", numeroSecreto);
    // e é assim q tu taca variável numa string :)

    int chute;
    printf("Qual o seu chute? ");
    scanf("%d", &chute);

    // %d máscara para inteiro  ..., variável
    // &antes de passar a variável
    // scanf = input do python

    printf("Seu chute foi %d\n", chute);

    // gcc aula1.c -o aula1.out
}
