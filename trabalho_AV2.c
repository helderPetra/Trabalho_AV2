#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float nota1[30];
    char aluno[30][30];
    int aux;


    printf("\n Olá, meu nome é Helder Petra e este programa pode ser visto no seguinte endereço do github: ");
    printf("\n https://github.com/helderPetra/trabalho_Av2 \n");


    for(i=0; i<=29; i++)
    {
        //entrar com o nome dos alunos
    printf("\n Entre com o nome do aluno %d:", i+1);
    scanf("%s", aluno[i]);

        //entrar com o valor da av1
    printf("\nEntre com a av1 de %s:", aluno[i]);
        scanf("%f", &nota1[i]);

    }

    //ordenação do metodo de bolha.

    for (i=0; i<=29; i++) {

        for (j=i+1; j<=29; j++) {

            if (nota1[j] > nota1[i]) {

                aux = nota1[j];
                nota1[j] = nota1[i];
                nota1[i] = aux;

            }
        }
    }

    //ordem decrescente
    printf("\nListagem da AV1\n");
    printf("\n---------------\n");
    printf("NOME DO ALUNO\tAV1\n");

    for(i=0;i<=29;i++)
    {
        printf("\n \t\t%s-%.2f\n", aluno[i], nota1[i]);
    }





    return 0;
}
