#include<stdio.h>

struct Aluno
{
    char nome [50];
    int idade;
    float nota;

};

void imprimir (struct Aluno aluno){
    printf("\nAluno: %s \nIdade: %d\nNota : %f",aluno.nome, aluno.idade, aluno.nota);
}

//acesar uma informação por meio de um ponteiro

void alterarNota(struct Aluno *aluno, float novaNota){
    aluno->nota = novaNota;
}

int main(){
    struct Aluno aluno1 = {"Christian", 20, 8};
    imprimir(aluno1);

    printf("\nNota (ANTES): %f", aluno1.nota);
    alterarNota(&aluno1, 9);
    printf("\nNota (DEPOIS): %f", aluno1.nota);


    return 0;
}