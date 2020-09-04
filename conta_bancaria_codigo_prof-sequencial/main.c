#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	float saldo;
} Conta;

typedef struct {
	Conta *pc;
	int indice;
} TConta;

void iniciarConta(TConta *p) {
	p->pc = NULL;
	p->indice = 0;
}

void mostrarTodas(TConta *p) {
	puts("");
	puts("===========================");
	puts("=== RELATORIO DE CONTAS ===");
	puts("===========================");
	for(int i = 0; i < p->indice; i++) {
		printf("Numero: %d", p->pc[i].num);
		printf("\nSaldo.: %.2f\n", p->pc[i].saldo);
		puts("===========================");
	}
}

void creditarConta (TConta *p, Conta c) {
	for (int i = 0; i < p->indice; i++) {
		if (p->pc[i].num == c.num)
			p->pc[i].saldo += c.saldo;
	}
}

void inserirConta (TConta *p, Conta c) {
	if (p->pc == NULL && p->indice == 0)
		p->pc = (Conta*)malloc(sizeof(Conta));
	else
		p->pc = (Conta*)realloc(p->pc, (p->indice+1)*sizeof(Conta));

	p->pc[p->indice] = c;
	p->indice++;
}

int main () {
	TConta conta;
	Conta c;
	unsigned opcao = 0;
	iniciarConta(&conta);
	do{
		puts("");
		puts("==========================================");
		puts("====== Controle de Contas Bancarias ======");
		puts("1. Cadastrar Conta	2. Mostrar Saldo");
		puts("3. Credito em Conta	4. Debito da Conta");
		puts("5. Transferir Valor	6. Mostrar Contas");
		puts("7. Remover Posicao	8. Remover Numero");
		puts("==========================================");
		puts("0. Sair");
		printf("Informe sua opcao: ");
		scanf("%u", &opcao);

		switch (opcao) {
			case 1:
				for (int i = 12; i < 20; i++) {
					c.num = i;
					c.saldo = i * 10.00;
					inserirConta(&conta, c);
				}
				break;
			case 3:
				printf("Informe a conta: ");
				scanf("%d", &c.num);
				printf("Informe o valor: ");
				scanf("%f", &c.saldo);
				creditarConta(&conta, c);
				break;
			case 6:
				mostrarTodas(&conta);
				break;
			default:
				puts("\nOpcao invalida!!");
		}
	}while(opcao > 0);
	free(conta.pc);
	return 0;
}
