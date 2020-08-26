#include <stdio.h>

#define MAX 5

typedef struct {
	int num;
	float saldo;
} Conta;

typedef struct {
	Conta vconta[MAX];
	int indice;
} TConta;

void mostrarTodas(TConta c) {
	puts("");
	puts("===========================");
	puts("=== Relatório de Contas ===");
	for(int i = 0; i < c.indice; i++) {
		printf("Numero: %d", c.vconta[i].num);
		printf("\nSaldo.: %.2f\n", c.vconta[i].saldo);
		puts("===========================");
	}
}

void mostrarSaldo(TConta c, int numero) {
	for(int i = 0; i < c.indice; i++) {
		if (c.vconta[i].num == numero) {
			puts("");
			puts("======================");
			puts("=== Saldo de Conta ===");
			printf("Numero: %d", c.vconta[i].num);
			printf("\nSaldo.: %.2f\n", c.vconta[i].saldo);
			puts("======================");
			break;
		}
	}
}

void creditar(TConta *conta, Conta c) {
	for(int i = 0; i < conta->indice; i++)
		if (conta->vconta[i].num == c.num)
			conta->vconta[i].saldo += c.saldo;
}

void debitar(TConta *conta, Conta c) {
	for(int i = 0; i < conta->indice; i++)
		if (conta->vconta[i].num == c.num)
			conta->vconta[i].saldo -= c.saldo;
}

void deletarConta(TConta *conta, int deletar){
    /*for(int i = 0; i < conta -> indice; i++){
        if(conta->vconta[i].num == c.num){
            conta->vconta[i].num = 0;
            conta->vconta[i].saldo = 0;
        }
    }

    int aux = 0;
    int auxNum = 0;

    for(int i = 0; i < conta->indice; i++){
        for(int j = 0; j < (conta->indice - i); j++){
            if(conta->vconta[j].saldo < conta->vconta[j + 1].saldo){
                aux = conta->vconta[j].saldo;
                conta->vconta[j].saldo = conta->vconta[j + 1].saldo;
                conta->vconta[j + 1].saldo = aux;
                auxNum = conta->vconta[j].num;
                conta->vconta[j].num = conta->vconta[j + 1].num;
                conta->vconta[j + 1].num = auxNum;
            }
        }
    }
    conta->indice = conta->indice - 1;*/

    for(int i = 0; i < conta->indice; i++){
        if(deletar == conta->vconta[i].num){
            conta->vconta[i] = conta->vconta[conta->indice - 1];
            conta->indice--;
            break;
        }
    }


}

Conta lerConta() {
	Conta c;
	printf("Informe o numero: ");
	scanf("%d", &c.num);
	printf("Informe o saldo.: ");
	scanf("%f", &c.saldo);

	return c;
}

int main () {
	TConta conta; // (Conta[], indice)
	Conta c, c2;
	conta.indice = 0;
	short opcao = 0;
	int numero, destino, deletar;
	float valor;

	do{
		puts("");
		puts("====================================================");
		puts("=========== Controle de Contas Bancarias ===========");
		puts("1. Cadastrar Conta	            2. Mostrar Saldo");
		puts("3. Credito em Conta	            4. Debito da Conta");
		puts("5. Transferencia entre Contas     6. Mostrar Todas");
		puts("7 . Apagar uma conta");
		puts("0. Sair");
		printf("Informe sua opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:
				if(conta.indice < MAX)
					conta.vconta[conta.indice++] = lerConta();
				break;
			case 2:
				printf("Informe o numero: ");
				scanf("%d", &numero);
				mostrarSaldo(conta, numero);
				break;
			case 3:
				printf("Informe o numero: ");
				scanf("%d", &c.num);
				printf("Informe o valor deposito: ");
				scanf("%f", &c.saldo);
				creditar(&conta, c);
				break;
			case 4:
				printf("Informe o numero: ");
				scanf("%d", &c.num);
				printf("Informe o valor do saque: ");
				scanf("%f", &c.saldo);
				debitar(&conta, c);
				break;
			case 5:
				printf("Informe a conta de origem...: ");
				scanf("%d", &c.num);
				printf("Informe o valor a transferir: ");
				scanf("%f", &c.saldo);
				debitar(&conta, c);
				printf("Informe a conta de destino..: ");
				scanf("%d", &c.num);
				creditar(&conta, c);
				break;
			case 6:
				mostrarTodas(conta);
				break;
            case 7:
                printf("Informe o numero da conta que deseja apagar: ");
                scanf("%d", &deletar);
                deletarConta(&conta, deletar);
                printf("\nConta deletada com sucesso!");
                break;
			case 0:
				break;
			default:
				puts("\nOpcao invalida!!");
		}

	}while(opcao > 0);

	return 0;
}
