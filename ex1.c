#include <stdio.h>

    struct Aluno
    {
        char nome[50];
        int idade;
        float nota;
    };
    
int main(){

    struct Aluno aluno1;

    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno1, nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1, idade);

    printf ("Digite a nota do aluno: ");
    scanf("%f", &aluno1, nota);

    return 0;
}