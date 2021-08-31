#ifndef PARSER_H
#define PARSER_H
#include "list.h"

int labelCount;

list_t *symbol;

typedef struct variable
{
	char *name;
	char *type;
	char *value;
} Variable;

/*
Tem como funcionalidade criar um rótulo
*/
int newLabel();

/*
Tem como funcionalidade analisa e traduz um bloco de comandos
*/
void block();

/*
Tem como funcionalidade reconhecer uma lista de parâmetros (separados por vírgulas)
*/
void doRead();

/*
*/
void doWrite();

/*
Tem como funcionalidade analisar (é constante,variável ou '('??) e traduz um fator matemático
*/
void factor();

/*
Tem como funcionalidade analisar e traduzir um fator booleano com NOT inicial
*/
void notFactor();

/*
Tem como funcionalidade analisar e traduzir um termo
*/
void term();

/*
Tem como funcionalidade analisar e traduzir uma expressão matemática
*/
void expression();

/*
Tem como funcionalidade analisar e traduzir um comando de atribuição associado a uma variavel
*/
void assignment();

/*
Tem como funcionalidade reconhecer e traduzir a estrutura de controle if-else-endif
*/
void doIf();

/*
Tem como funcionalidade reconhecer e traduzir a estrutura de controle while-endwhile
*/
void doWhile();

/*
Tem como funcionalidade analisar e traduzir um termo booleano
*/
void boolTerm();

/*
Tem como funcionalidade analisar e traduzir uma expressão booleana
*/
void boolExpression();

/*
Tem como funcionalidade analisar e traduzir uma relação de: diferente,menor ou igual, maior ou igual
*/
void relation();

/*
Tem como funcionalidade reconhecer e traduzir um "OR"
*/
void boolOr();

/*
Tem como funcionalidade reconhecer e traduzir um "xor"
*/
void boolXor();

/*
Tem como funcionalidade reconhecer e disparar a rotina que traduz adição
*/
void add();

/*
Tem como funcionalidade reconhecer e disparar a rotina que traduz subtração
*/
void subtract();

/*
Tem como funcionalidade reconhecer e traduzir uma multiplicação
*/
void multiply();

/*
Tem como funcionalidade reconhecer e traduzir divisão
*/
void divide();

/*
Tem como funcionalidade alocar espaço para uma variável
*/
void *constructorVariable(void *data);

/*
Tem como funcionalidade lliberar espaço da memória
*/
void destructorVariable(void *data);

/*
Tem como funcionalidade inicializar a struct com as informaçẽs da variável
*/
void initializeStruct(Variable *var, char *name, char *type, char *value);

/*
Tem como funcionalidade retornar o endereço do identificador na tabela de símbolo
*/
int locate(char *name);

/*
Tem como funcionalidade exibir uma mensagem  de erro dizendo qe se esperava receber o nome de um identificador
*/
void checkIdent();

/*
Tem como funcionalidade verificar se uma variável ja foi delcarada na nossa lista de variáveis 
*/
int intable(char *name);

/*
Tem como funcionalidade disparar undefined caso um símbolo seja referenciado mas nã exista na tabela de simbolos 
*/
void checkTable(char *name);

/*
Tem como funcionalidade disparar a rotina duplicated para avisar de uma multi-declaração, caso haja uma
*/
void checkedUp(char *name);

/*
Tem como funcionalidade chamar checkedup para verificar se a variável já foi declarada, se sim encerra o programa;
se não verifica se a tabela de símbolos não atingiu sua capacidade máxima, se sim encerra programa,
se não aloca espaço na memória, se tudo der  certo salva o novo símbolo alocado na tabela de símbolos.
*/
void addSymbol(char *name, char *type);

/*
Tem como funcionalidade reconhecer declarações de variáveis em uma ou mais linhas
*/
void topDecls();

/*
Tem como funcionalidade verificar a declaração variável e chama as rotinas de adição na tabela de símbolos e alocação de espaço
*/
void decl();

/*
Tem como funcionalidade reconhecer um identificador
*/
void readVar();

#endif