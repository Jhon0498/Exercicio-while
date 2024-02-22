#include <stdio.h>

int main() {
    double peso, altura, pesomaximo = 0;
    int pessoamaispesada = 0, pessoa = 1;

    while (pessoa <= 5) {
        printf("Altura da pessoa %d: ", pessoa);
        scanf("%lf", &altura);

        printf("Peso da pessoa %d: ", pessoa);
        scanf("%lf", &peso);

        if (peso >= pesomaximo) {
            pesomaximo = peso;
            pessoamaispesada = pessoa;
        }

        pessoa++;
    }

    printf("A pessoa mais pesada é a de número %d, com altura %g", pessoamaispesada, altura);

    return 0;
}

 