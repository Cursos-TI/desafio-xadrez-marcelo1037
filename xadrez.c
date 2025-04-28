#include <stdio.h>

// Desafio de Xadrez - Marcelo

int main() {
  
    int i;

            // Comando Bispo com WHILE

    int bispo = 0;

    i = 0;

    while (i < 5) {
        bispo++;
        i++;
    }
    
            // Comando Torre Com FOR
    
    int torre = 0;

    for (i = 0; i < 5; i++){
        torre++;
    }

            // Comando Rainha com DO-WHILE

    int rainha = 0;
    
        i = 0;
    
    do {
        rainha++;
        i++;
    } while (i < 8);
    

            // Exibição dos resultados
    
        printf("Bispo: Movimentou cima, Direita! %d \n", bispo);
        printf("Torre: Movimentou Casas a Direita! %d \n", torre);
        printf("Rainha: Movimentou Casas a Esquerda! %d \n", rainha);
    
   

    return 0;
}
