#include <stdio.h>

int main(){

    float nota_1 = 0; // Sempre inicializar para evitar lixos
    float nota_2 = 0; // Sempre inicializar para evitar lixos
    float nota_3 = 0; // Sempre inicializar para evitar lixos
    float nota_4 = 0; // Sempre inicializar para evitar lixos
    float resultado = 0;
    float media = 0;
    int opcao; // não precisa pois vai ser usada com scanf antes de todos.

do  { // usado para repetir o menu, sem perder as variaveis digitadas.
    printf("***----------------------------------***\n");

    printf("### Menu de gerenciamento de Estudantes ###\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("4. Resultado da soma das notas \n");
    printf("5. Redefinir Notas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
    
        printf("Calculo de Média\n");
        printf("Digite a 1° nota: ");
        scanf("%f", &nota_1);
        printf("Digite a 2° nota: ");
        scanf("%f", &nota_2);
        printf("Digite a 3° nota: ");
        scanf("%f", &nota_3);
        printf("Digite a 4° nota: ");
        scanf("%f", &nota_4);
        
        //Testar a condição se a nota é >=0 e <= 10
        if ((nota_1 >= 0 && nota_1 <= 10) && 
            (nota_2 >= 0 && nota_2 <= 10) && 
            (nota_3 >= 0 && nota_3 <= 10) && 
            (nota_4 >= 0 && nota_4 <= 10)){
                // Calculo da media
            media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
            printf("A média é %.2f\n", media);       
        }
        else {
            printf("Entrada com valores errados (notas devem estar entre 0 e 10)\n");
        }

        break;
    case 2:
    if ((nota_1 + nota_2 + nota_3 + nota_4) == 0) {
        printf("Você precisa calcular a média primeiro (opção 1)\n");
    } else {
        printf("Média atual: %.2f\n", media);
        if (media >= 7.0) {
            printf("Status: Aprovado\n");
        } else if (media >= 5.0) {
            printf("Status: Recuperação\n");
        } else {
            printf("Status: Reprovado\n");
        }
    }
        break;
    case 3:
        printf("Saindo...\n");

        break;
    case 4:
    if ((nota_1 + nota_2 + nota_3 + nota_4) == 0) {
        printf("Você precisa inserir as notas primeiro (opção 1)\n");
    } else {
        resultado = nota_1 + nota_2 + nota_3 + nota_4;
        printf("Resultado da soma das notas: %.1f\n", resultado);
    }
        break;
    case 5:
        nota_1 = nota_2 = nota_3 = nota_4 = media = 0;
        printf("Notas resetadas com sucesso!\n");

    break;

    default:
        printf("Opção invalida\n");

        break;
    }
    } while (opcao != 3); // Repete até o usuario apertar sair.
   
    
    
    
    return 0;

}