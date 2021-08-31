#ifndef ASMCODE_H
#define ASMCODE_H

/* 
Tem como funcionalidade zerar o registrador primário
*/
void asm_clear();

/* 
Tem como funcionalidade negativar o registrador primário
*/
void asm_negative();

/* 
Tem como funcionalidade carregar uma constante numérica no registrador primário
*/
void asm_loadconst(char *val);

/* 
Tem como funcionalidade carregar uma variável no registrador primário
*/
void asm_loadvar(char *name);

/*
Tem como funcionalidade colocar registrador primário na pilha
*/
void asm_push();

/*
Tem como funcionalidade adicionar o topo da pilha ao registrador primário
*/
void asm_popadd();

/*
Tem como funcionalidade subtrair o registrador primário do topo da pilha
*/
void asm_popsub();

/*
Tem como funcionalidade multiplicar o topo da pilha pelo registrador primário
*/
void asm_popmul();

/*
Tem como funcionalidade dividir o topo da pilha pelo registrador primário
*/
void asm_popdiv();

/*
Tem como funcionalidade armazenar registrador primário em variável
*/
void asm_store(char *name);

/*
Tem como funcionalidade inverter registrador primário
*/
void asm_not();

/*
Tem como funcionalidade realizar o cálculo de "E" do topo da pilha com registrador primário
*/
void asm_popand();

/*
Tem como funcionalidade realizar o cálculo de "OU" do topo da pilha com registrador primário
*/
void asm_popor();

/*
Tem como funcionalidade realizar o cálculo de "OU-exclusivo" com o topo da pilha com registrador primário
*/
void asm_popxor();

/*
Tem como funcionalidade comparar o topo da pilha com registrador primário
*/
void asm_popcompare();

/*
Tem como funcionalidade alterar o registrador primário (e flags, indiretamente) conforme a comparação
*/
void asm_relop(char op, int l1, int l2);

/*
Tem como funcionalidade o desvio incondicional
*/
void asm_jmp(int label);

/*
Tem como funcionalidade o desvio se falso (0)
*/
void asm_jmpfalse(int label);

/*
Tem como funcionalidade ler um valor para o registrador primário e armazena em variável
*/
void asm_read(char *vaue);

/*
Tem como funcionalidade mostrar o valor do registrador primário
*/
void asm_write();

/*
Tem como funcionalidade inicializar e alocar memória para uma declaração de variável
*/
void allocVar(char *name, int value);

#endif