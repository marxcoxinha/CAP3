//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
//Constantes
#define M 10
#define N 10

/*
Algoritmo Caça-Palavras
Objetivo: Realizar um caça-palavras através de uma matriz fornecida em um arquivo, ou gerada pelo programa,ou pelo usuário, e verificar se as palavras informadas em um arquivo ou pelo usuário estão contidas no caça palavras
Autores: Italo Carvalho Vianelli Ribeiro RA:769687 Alvaro
input: matriz, lista de palavras
output: informar se a palavra está no caça-palavras
data de criação: 10/06/2019
última modificação: 16/06/2019
*/



/*
Nome: horizontalDireta
Objetivo: verificar se as palavras estão de maneira direta (esquerda para direita) nas linhas horizontais do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int horizontalDireta(char matriz[M][N], char p[])
{
    int i, j, k=0, aux=1, existe=0, tam;
    tam=strlen(p);
    setlocale(LC_ALL,"Portuguese");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            //condição de quebra de linha
            if(j==0){
                aux=0;
                k=0;
            }
            //identificar se cada caracter da palavra está contida na matriz
            if(p[k]==matriz[i][j])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
        }
    }
    return existe;

}

/*
Nome: horizontalInversa
Objetivo: verificar se as palavras estão de maneira Inversa (direita para a esquerda) nas linhas horizontais do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int horizontalInversa(char matriz[M][N], char p[])
{
    int i, j, k=0, aux=0, existe=0, tam;
    tam=strlen(p);
    for(i=M-1;i>=0;i--)
    {
        for(j=N-1;j>=0;j--)
        {
            if(j==N-1){
                aux=0;
                k=0;
            }
            if(p[k]==matriz[i][j])
            {
                k++;
                aux++;
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    k++;
                    aux++;
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    if(aux==tam) existe = 1;
                }
            }
        }
    }
    return existe;

}

/*
Nome: verticalDireta
Objetivo: verificar se as palavras estão de maneira direta (cima para baixo) nas colunas verticais do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int verticalDireta(char matriz[M][N], char p[])
{
    int i, j, k=0, aux=1, existe=0, tam;
    tam=strlen(p);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            //condição de quebra de linha
            if(j==0){
                aux=0;
                k=0;
            }
            //identificar se cada caracter da palavra está contida na matriz
            if(p[k]==matriz[j][i])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[j][i])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
        }
    }
    return existe;

}

/*
Nome: verticalInversa
Objetivo: verificar se as palavras estão de maneira inversa (baixo para cima) nas colunas verticais do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int verticalInversa(char matriz[M][N], char p[])
{
    int i, j, k=0, aux=0, existe=0, tam;
    tam=strlen(p);
    for(i=N-1;i>=0;i--)
    {
        for(j=M-1;j>=0;j--)
        {
            if(j==N-1){
                aux=0;
                k=0;
            }
            if(p[k]==matriz[j][i])
            {
                k++;
                aux++;
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[j][i])
                {
                    k++;
                    aux++;
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    if(aux==tam) existe = 1;
                }
            }
        }
    }
    return existe;

}
/*
Nome: diagonalDireta
Objetivo: verificar se as palavras estão de maneira direta (cima para baixo e da esquerda para direita) nas diagonais \ do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int diagonalDireta(char matriz[M][N], char p[])
{
    int i, j, k=0,l=0, aux1=0, aux=0, existe=0, tam;
    tam=strlen(p);
    for(i=0,j=0;i<M && j<N;i++,j++){
            if(p[k]==matriz[i][j])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==M-1 || j==N-1)
            {
                i=-1;
                l++;
                j=l-1;
            }

    }
    l=0;

    for(i=0,j=0;i<M && j<N;i++,j++){
            if(p[k]==matriz[i][j])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==M-1 || j==N-1)
            {
                j=-1;
                l++;
                i=l-1;
            }

    }
    return existe;
}
/*
Nome: diagonalInversa
Objetivo: verificar se as palavras estão de maneira inversa (baixo para cima e da esquerda para direita) nas diagonais \ do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int diagonalInversa(char matriz[M][N], char p[])
{
    int i, j, k=0,l=0, aux1=0, aux=0, existe=0, tam;
    tam=strlen(p);
    for(i=M-1,j=N-1;i>=0 && j>=0;i--,j--){
            if(p[k]==matriz[i][j])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==0 || j==0)
            {
                i=M-1;
                l++;
                j=N-l;
            }

    }
    l=0;

    for(i=M-1,j=N-1;i>=0 && j>=0;i--,j--){
            if(p[k]==matriz[i][j])
            {
                //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    //printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==0 || j==0)
            {
                j=N-1;
                l++;
                i=M-l;
            }
    }
    return existe;
}
/*
Nome: diagonalContrariaDireta
Objetivo: verificar se as palavras estão de maneira direta (cima para baixo e da direita para esquerda) nas diagonais / do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int diagonalContrariaDireta(char matriz[M][N], char p[])
{
    int i, j, k=0,l=0, aux=0, existe=0, tam;
    tam=strlen(p);
    for(i=M-1,j=0;i>=0 && j<N;i--,j++){
            if(p[k]==matriz[i][j])
            {
                printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==M-1 || j==N-1)
            {
                j=-1;
                l++;
                i=M-l;
            }

    }
    l=0;

    for(i=M-1,j=0;i>=0 && j<N;i--,j++){
            if(p[k]==matriz[i][j])
            {
                printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                k++;
                aux++;
                if(aux==tam) existe = 1;
            }
            else
            {
                k=0;
                aux=0;
                if(p[k]==matriz[i][j])
                {
                    printf("k=%d aux=%d tam=%d p=%c matriz=%c\n",k,aux,tam,p[k],matriz[i][j]);
                    k++;
                    aux++;
                    if(aux==tam) existe = 1;
                }
            }
            if(i==M-1 || j==N-1)
            {
                i=M-1;
                l++;
                j=l-1;
            }

    }
    return existe;
}
/*
Nome: verificarPalavra
Objetivo: verificar se as palavras estão de maneira direta (cima para baixo e da direita para esquerda) nas diagonais / do caça palavras
Parâmetros formais:
- Matriz[][]: matriz de caracteres(caça-palavras) (paramentro de entrada de dados)
- p[]: palavra a ser pesquisada (paramentro de entrada de dados)
Valor de retorno:
- existe: retorna se a palavra está na matriz ou não (paramentro de saída de dados)
*/
int verificarPalavra (char matriz[M][N], char p[])
{
    int existe=0;
    //existe = horizontalDireta(matriz,p);
    //if(existe==0) existe = horizontalInversa(matriz,p);
    //if(existe==0) existe = verticalDireta(matriz,p);
    //if(existe==0) existe = verticalInversa(matriz,p);
    //if(existe==0) existe = diagonalDireta(matriz,p);
    //if(existe==0) existe =diagonalInversa(matriz,p);
    if(existe==0) existe =diagonalContrariaDireta(matriz,p);
    return existe;
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    //adiciona palavras aleatorias na matriz
    int i,j,aux=0, tam,k=0, existe=0;

    char vetor[M][N];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            vetor[i][j]=97+(char)(rand()%26);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%c ",toupper(vetor[i][j]));
            if(j==9) printf("\n");
        }
    }
    char p[3];
    scanf("%s",p);
    existe = verificarPalavra(vetor,p);
    if(existe==0) existe = diagonalContrariaDireta(vetor,p);
    printf("\n");
    //printf("%d\n",existe);
    if (existe) printf("está no caça!\n");
    else printf("não está no caça :(\n");

    return 0;
}
