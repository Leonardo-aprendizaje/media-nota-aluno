#include <stdio.h>

int main(){

    float nota_1;
    float nota_2;
    float nota_3;
    float nota_4;
    float resultado;
    float media;

    printf("Digite a 1° nota: ");
    scanf("%f", &nota_1);

    printf("Digite a 2° nota: ");
    scanf("%f", &nota_2);

    printf("Digite a 3° nota: ");
    scanf("%f", &nota_3);

    printf("Digite a 4° nota: ");
    scanf("%f", &nota_4);

    resultado = nota_1 + nota_2 + nota_3 + nota_4;
    media = resultado / 4;

    printf("\n\n----Nota do Aluno!!----\n\n");
    printf("Nota 1: %.1f\n", nota_1);
    printf("Nota 2: %.1f\n", nota_2);
    printf("Nota 3: %.1f\n", nota_3);
    printf("Nota 4: %.1f\n", nota_4);
    printf("\nNota final: %.1f\n", resultado);
    printf("Media final: %.2f\n", media);



    return 0;

}