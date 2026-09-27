#include <stdio.h>

int main() {

    int Q1, Q2;

    float perdas;
    float menor_perda = 999999;

    int melhor_Q1 = 0;
    int melhor_Q2 = 0;

    /*
        Sistema de 3 barras

        Barra 1 -> G1
        Barra 2 -> G2
        Barra 3 -> Carga

        Demanda = 100 MVAr

        G1:
        0 <= Q1 <= 70

        G2:
        0 <= Q2 <= 60
    */

    for (Q1 = 0; Q1 <= 70; Q1++) {

        for (Q2 = 0; Q2 <= 60; Q2++) {

            // Restrição de atendimento da demanda
            if (Q1 + Q2 >= 100) {

                // Função objetivo
                perdas = 0.02 * Q1 + 0.05 * Q2;

                // Verifica a melhor solução
                if (perdas < menor_perda) {

                    menor_perda = perdas;

                    melhor_Q1 = Q1;
                    melhor_Q2 = Q2;
                }
            }
        }
    }

    printf("\n=====================================\n");
    printf(" OTIMIZACAO DE REATIVOS - 3 BARRAS\n");
    printf("=====================================\n");

    printf("\nGerador G1:\n");
    printf("Q1 = %d MVAr\n", melhor_Q1);

    printf("\nGerador G2:\n");
    printf("Q2 = %d MVAr\n", melhor_Q2);

    printf("\nAtendimento da demanda:\n");
    printf("Q1 + Q2 = %d MVAr\n",
           melhor_Q1 + melhor_Q2);

    printf("\nPerdas minimas:\n");
    printf("Ploss = %.2f MW\n",
           menor_perda);

    return 0;
}