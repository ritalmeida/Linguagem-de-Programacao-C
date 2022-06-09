//
//  tp05.h
//  lp1_ufp
//
//  Created by Rui on 18/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp05_h
#define tp05_h

#include "tp03.h"

#include <stdio.h>
#include <string.h>
#define MAXCOLS100 100
#define NCOLUMNS 100

/**
 * Função que procura o índice da 1a vogal na string dada.
 * @param str - string a analisar.
 * @return index da primeira vogal da string
 * */
int index_first_vogal(char str[]);                                  //feito

/**
 * Função que substitui um char o por outro r numa string.
 * @param str - string a analisar.
 * @param o - char original a substiruir.
 * @param r - char pelo qual substituir.
 * @return endereço da string actualizada.
 */
char* replace_char_by_char(char str[], char o, char r);             //feito

/**
 * Função que remove caracteres brancos existentes na string.
 * @param str - string a analisar.
 * @return endereço da string actualizada.
 */
char* remove_blanks(char str[]);                                    //feito

/**
 * Função que remove todos char c existentes na string.
 * @param str - string a analisar.
 * @param sub - substring com chars a remover.
 * @return endereço da string actualizada.
 */
char* remove_chars(char str[], char sub[]);                         //feito

/**
 * Função que retorna índiice mais à esquerda de sub dentro de str.
 * @param str - string a analisar.
 * @param sub - sub string a encontrar.
 * @return índice da sub am str.
 *
 * */
int index_sub_left(char str[], char sub[]);                         //feito

/**
 * Função que imprime matrizes Nx100.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void print_matrixNx100(int mNx100[][MAXCOLS100], int lines, int columns);       //feito

/**
 * Função de inicialização/leitura de matriz de ints cujo número columns < NCOLUMNS.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void read_matrixNx100_ints(int mNx100[][NCOLUMNS], int lines, int columns); // Ler/armazenar ints na matriz         //feito

/**
 * Função de inicialização/leitura de matriz de strings, cujo número columns < NCOLUMNS.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void read_matrixNx100(char mNx100[][NCOLUMNS], int lines, int columns); // Ler/armazenar frases com fgets()     //n demos ficheiros

/**
 * Função para multiplicar uma linha de uma matriz por um dado número escalar.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 * @param line - linha a multiplicar pelo escalar.
 * @param scalar - número pelo qual multiplicar a linha.
 */
void multiply_matrixNx100_line_by_scalar(int mNx100[][MAXCOLS100], int lines, int columns, int line, int scalar);       //feito

/**
 * Função que some os elementos das linhas lin1 e lin2 de uma matriz, colocando o resultado na lin3.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lin1 - 1a linha da matriz a somar.
 * @param lin2 - 2a linha da matriz a somar.
 * @param lin3 - linha onde colocar o resultado da somas das linhas lin1 e lin2.
 */
void sum_lines_matrixesNx100(int mNx100[][MAXCOLS100], int lin1, int lin2, int lin3, int columns);      //feito

/** Função que calcula a transposta de uma matriz.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param size - número de linhas/colunas da matriz.
 */
void transposed_matrixNx100(int mNx100[][MAXCOLS100], int size);            //feito

/**
 * Main test function for TP class 05.
 * @param argc - arg count.
 * @param argv - array os strings.
 * @return an error code (0 if no error).
 */
int main_tp05(int argc, const char * argv[]);

#endif /* tp05_h */
