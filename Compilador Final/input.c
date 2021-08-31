#include <stdio.h>
#include "input.h"
#include "output.h"
#include "list.h"
#include "scanner.h"
#include "parser.h"
#include "parser.h"
#include "errors.h"

void init()
{
	cursor = 0;
	printf("%s\n", textoGrande);
	listInitialize(&symbol, constructorVariable, destructorVariable);
	labelCount = 0;
	nextChar();
	nextToken();
	matchString("PROGRAMA");
	semiColon();
	header();
	topDecls();
	matchString("INICIO");
	prolog();
	block();
	matchString("FIM");
	epilog();
}

void nextChar()
{
	lookahead = textoGrande[cursor++];
}
