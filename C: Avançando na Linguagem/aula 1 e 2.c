#include <stdio.h> 
#include <string.h>

int main() {

    // char letra1 = 'A';
    // não tem string em C

    int notas [10];
    notas[0] = 10;
    notas[5] = 8;
    notas[9] = 4; 

    // array -> uma maneira de guardar várias coisas de um só tipo
    // array de char -> guarda um monte de caracteres  -  simular strings

    char secret[20];

    /*
        isso aqui é trampo de corno desnecessário

    secret[0] = 'M';
    secret[1] = 'E';
    secret[2] = 'L';
    secret[3] = 'A';
    secret[4] = 'N';
    secret[5] = 'C';
    secret[6] = 'I';
    secret[7] = 'A';
    secret[8] = '\0';      //é a pausa, indica que a string acabou!

    printf("%c%c"%c"%c"%c"%c"%c"%c", secret[0], secret[1], secret[2], secret[3], 
        secret[4], secret[5], secret[6], secret[7]);

    */

    sprintf(secret, "MELANCIA");          //string printf
    // printf("%s", secret);                 // %s é um cara esperto
    secret[8] = '\0';                     // ou só 0

    int acertou = 0;
    int enforcou = 1;

    char chutes[26];
    int tentativas = 0;

    /*
    do {
        char chute;
        scanf("%c", &chute);

        //fazer um loop e varrer o array
        for(int i = 0; i < strlen(secret); i++) {       //strlen captura o tamanho da palavra dentro do array de chars
            if(secret[i] == chute) {
                printf("A posição %d tem essa letra\n, i");
            }
        }

    } while(!acertou && !enforcou);     //booleano
    */

   do {
        for(int i = 0; i < strlen(secret); i++) {

            int achou = 0;

            for(int j = 0; j< tentativas;j++) {
                if(chutes[j] == secret[i]) {
                    achou = 1;
                    break;
                }
            }
            
            if(achou) {
                printf("%c ", secret[i]);
            } 
            else {
                printf("_ ");
            }
        }

        //loops encadeados
        
        print("\n");

        char chute;
        scanf(" %c", &chute);    //colocar o espaço antes do %c para o Enter não ficar no buffer

        chutes[tentativas] = chute;
        tentativas++;

   } while(!acertou && !enforcou);

}