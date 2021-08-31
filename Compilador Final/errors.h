#ifndef ERRORS_H
#define ERRORS_H

/*
Tem como funcionalidade mostrar uma mensagem de erro com formatação
*/
void error(char *s);

/*
Tem como funcionalidade mostrar uma mensagem de erro e encerra o programa
*/
void fatal(char *s);

/*
Tem como funcionalidade fazer chamada para exibir mensagem sobre uma entrada esperada 
*/
void expected(char *s);

/*
Tem como funcionalidade exibir uma mensagem  de erro relativa a referência a um identificador não declarado e
*encerra a compilação
*/
void undefined(char *name);

/*
Tem como funcionalidade exibir uma mensagem  de erro relativa a uma multideclaração 
*/
void duplicated(char *name);

#endif