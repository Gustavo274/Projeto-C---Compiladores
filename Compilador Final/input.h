#ifndef INPUT_H
#define INPUT_H

char *textoGrande;
int cursor;

/*
Tem como funcionalidade iniciar o compilador lendo o primeiro símbolo do programa de entrada
além de alocar o espaço e inicializar a tabela de símbolos com 0
*/
void init();

/*
Tem como funcionalidade ler o próximo caractere
*/
void nextChar();

#endif