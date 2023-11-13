#include <stdio.h>

int main() {
    printf("**********************************\n");
    printf("       Jogo de Adivinhação!       \n");
    printf("       Você tem 3 tentativas      \n");
    printf("        Que comecem os jogos      \n");
    printf("**********************************\n");
    // isso é um comentário

    int numeroSecreto = 42;

    int chute;

    //da pra declarar variável em qualquer lugar do programa, porém ela só existe dentro do escopo em que ela foi declarada!

    //loops!
    for(int i=1; i<=3; i++) {
        // 1° declarar variável, contador
        // 2° repetir o bloco de código enquanto i<=3
        // 3° ++ significa somar 1

        printf("Tentativa %d de 3\n", i);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        //condições

        int acertou = (chute == numeroSecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");

            break;
            // parar de executar o loop se acertar a tentativa
        }
        else {
            int maior = chute > numeroSecreto;
            if(maior) {
                printf("Seu chute foi maior que o número secreto");
            }
            else {
                printf("Seu chute foi menor que o número secreto");
            }
        }
    }

    printf("Fim de jogo");
}

