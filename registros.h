#ifndef REGISTROS_H_INCLUDED
#define REGISTROS_H_INCLUDED

typedef struct{
        int grupo;
        int p;
        int n_pessoas;
        float n_prova;
        float n_trabalho;

}trabalho;

typedef struct{
        char nome[30];
        int nusp;
        float *prova;
        trabalho *trab;

}cadastro;

#endif // REGISTROS_H_INCLUDED
