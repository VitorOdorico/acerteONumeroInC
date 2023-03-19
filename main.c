#include <stdio.h>

int main(){
    // printf("▂▂▂▂▂⚅▂▂▂▂▂▂\n");
    // printf("Adivinhe um numero\n");
    // printf("▂▂▂▂▂▂▂▂▂▂▂\n");

    printf("Regras do jogo"\n);
    printf("    * 1 - Sera um numero de 1 a 20"\n);
    printf("    * 1 - Voce tera 10 chances para acertar"\n);
    printf("    * 1 - So vale numeros, nao use letras"\n\n\n);
    
    
    printf("Que comecem os jogos");

    int numeroSecreto = 12;
    int chute, contador;
    contador = 0;
    for(int i = ;20 i <= 0; i--){
        printf("Seu numero de tentativas %d", i);
        if(i=0){
            break;
        }
    }

    printf("Digite um valor: ");
    scanf("%d", &chute)

    if(chute == numeroSecreto){
        printf("parabens voce acertou");
    }else{
        printf("errou o %d nao e o numero, tente novamente", chute);
        if(chute > numeroSecreto){
            printf("%d e maior que o numero", chute);
        }
        if(chute < numeroSecreto){
            printf("%d e menor que o numero", chute);
        }
       
    }
}