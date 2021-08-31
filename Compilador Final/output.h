#ifndef OUTPUT_H
#define OUTPUT_H

/*
Tem como funcionalidade emitir o código inicial necessário para o montador
*/
void header();

/*
Tem como funcionalidade emitir o código que identifica o programa principal para retornar ao sistema operacional
*/
void prolog();

/*
Tem como funcionalidade emitir o código que identifica o programa principal para a inicialização
*/
void epilog();

/*
Tem como funcionalidade exibir uma instrução
*/
void emit(char *s, ...);

#endif