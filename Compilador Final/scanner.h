#ifndef SCANNER_H
#define SCANNER_H

#define MAX_TOKEN 16
#define KWLIST_SZ 9

char lookahead, token, value[MAX_TOKEN + 1];
int labelCount;

/*
Tem como funcionalidade reconhecer com que tipo de token estamos lidando
*/
void nextToken();

/*
Tem como funcionalidade tratar de comentários simples e comentários aninhados: avança na leitura do próximo
*caractere até encontrar o delimitador final de umcomentário, se o próximo caractere for o 
*delimitador inicial de comentarios chama essa rotina recursivamente.
*/
void skipComment();

/*
Tem como funcionalidade reconhecer caractere de espaço em branco e delimitador inicial de cometário 
*e chama as rotinas correspondentes a cada caractere para avançar a posição do cursor de
*leitura
*/
void skipWhite();

/*
Tem como funcionalidade sempre que encontrar ponto-e-vírgula avança o cursor de leitura para o próximo token
*/
void semiColon();

/*
Tem como funcionalidade verificar se o token corrente faz referencia a uma keyword 
*/
void scan();

/*
Tem como funcionalidade verifcar se o nome de um indetificador ou palavra-chave é formado por letras
*vai salvando cada caractere formador do identificador na variável global value 
*/
void getName();

/*
Tem como funcionalidade verificar se lookahead é um número, vai salvando cada digito do número na variável global value
*/
void getNum();

/*
Tem como funcionalidade verificar se lookahead é um operador  e o salva na variável global value
*/
void getOp();

/*
Tem como funcionalidade verificar se a entrada dá match com o esperado, chamando expected c.c.
*/
void matchString(char *s);

/*
Tem como funcionalidade verificar se o caractere analisado é um operador de soma ou subtração
*/
int isAddOp(char c);

/*
Tem como funcionalidade verificar se o caractere analisado é um operador de multiplicação ou divisão
*/
int isMulOp(char c);

/*
Tem como funcionalidade reconhecer um operador OU
*/
int isOrOp(char c);

/*
Tem como funcionalidade reconhecer operadores relacionais.
*/
int isRelOp(char c);

#endif