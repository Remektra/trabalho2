#include <stdio.h>
#include <stdlib.h>

#include "registros.h"


int main(){

    // cabeçalho
    int n_alunos;
    int n_provas;
    int n_trabalhos;

    FILE *arquivo;

    /*arquivo = fopen("texto.txt", "r"); // abrir arquivo
    if (arquivo == NULL){
        printf("----Nao abriu----");
        return 0;
    }


    fscanf(arquivo, "%d", &n_alunos);
    fscanf(arquivo, "%d", &n_provas);
    fscanf(arquivo, "%d", &n_trabalhos);

    printf("%d - %d - %d ", n_alunos, n_provas, n_trabalhos);

    cadastro *aluno = malloc(sizeof(cadastro) *n_alunos);

    int j;
    for(j=0; j<n_alunos; j++){
        fscanf(arquivo, "%s", aluno[j].nome);
        fscanf(arquivo, "%d", &aluno[j].nusp);

        printf("Nome: %s - Nusp: %d", aluno[j].nome, aluno[j].nusp);

        aluno[j].p = malloc(sizeof(float) * n_provas);
        aluno[j].trab = malloc(sizeof(trabalho) * n_trabalhos);
        int i;
        printf("\nProvas: \n");
            for(i=0; i<n_provas; i++){
                fscanf(arquivo, "%f", &(aluno[j].p[i]));
                printf("%.2f -", aluno[j].p[i]);
            }

            for(i=0; i<n_trabalhos; i++){

                fscanf(arquivo,"%d", &(aluno[j].trab[i].grupo));
                fscanf(arquivo,"%d", &(aluno[j].trab[i].p));
                fscanf(arquivo,"%d", &(aluno[j].trab[i].n_pessoas));
                fscanf(arquivo,"%f", &(aluno[j].trab[i].n_prova));
                fscanf(arquivo,"%f", &(aluno[j].trab[i].n_trabalho));

                printf("%\n%d\n", aluno[j].trab[i].grupo);
                printf("%d\n", aluno[j].trab[i].p);
                printf("%d\n", aluno[j].trab[i].n_pessoas);
                printf("%.2f\n", aluno[j].trab[i].n_prova);
                printf("%.2f\n", aluno[j].trab[i].n_trabalho);
            }
    }



    free(aluno); */

    int rc = 1; // resposta cadastro
    int rp = 1; // resposta prova
    int rt = 1; // resposta prova

    printf("Deseja inserir aluno? (1 para sim 0 para nao): "); scanf("%d", &rc);

    if(rc == 1){

        arquivo = fopen("texto.txt", "a"); // inseri no final

        cadastro aluno;
        printf("Nome do aluno: "); scanf("%s", aluno.nome);
        printf("Numero usp do aluno: "); scanf("%d", &aluno.nusp);

        printf("Deseja inserir prova? (1 para sim 0 para nao): "); scanf("%d", &rp);
        n_provas = 0;
            if(rp == 1){
                aluno.prova = malloc(sizeof(float) * n_provas );
            }

            while(rp == 1){
                printf("Digite a nota da prova: "); scanf("%f", aluno.prova);
                printf("Deseja inserir prova? (1 para sim 0 para nao): "); scanf("%d", &rp);
                n_provas ++;
                aluno.prova = realloc(aluno.prova, n_provas);
            }

        printf("Deseja inserir trabalho? (1 para sim 0 para nao): "); scanf("%d", &rt);
        n_trabalhos = 0;
            if(rt == 1){
                aluno.trab = malloc(sizeof(trabalho) * n_trabalhos );
            }

            while(rt == 1){
                trabalho job;
                printf("Digite o grupo do trabalho: "); scanf("%d", job.grupo);
                printf("%d", job.grupo); // nao deu certo
                printf("Deseja inserir trabalho? (1 para sim 0 para nao): "); scanf("%d", &rt);
                n_trabalhos ++;
                aluno.trab = realloc(aluno.trab, n_trabalhos);
            }

        fprintf(arquivo, "%s", aluno.nome);
        fprintf(arquivo, "%d", &aluno.nusp);
        //faf(texto, "%s", aluno.nome);




    }else{
        return 0;
    }




    fclose(arquivo);

    return 0;
}
