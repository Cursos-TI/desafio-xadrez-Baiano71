#include <stdio.h>
 

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Mova para Cima\n");  // Imprime o valor atual de n
        moverTorre(casas - 1);
    }
}
 
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Mova para a Esquerda\n");  // Imprime o valor atual de n
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Mova para Baixo\n");  // Imprime o valor atual de n
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas) {
    if (casas > 0) {
        printf("Mova o cavalo duas vezes para a direita e uma para esquerda\n");
        moverCavalo(casas - 1);
    }
}


int main() {
    moverTorre(5);
    moverBispo(3);
    moverCavalo(2);
    moverRainha(4);
    return 0;
}

