/*	Declare um vetor de tamanho n (lido do teclado) e crie funções que:
	- carega os elementos no vetor;
	- processa e retorna o maior valor do vetor;
	- processa e retorna o menor valor do vetor;
	- processa e retorna a média dos valores do vetor;
	- multiplica cada valor do vetor por um número x lido do teclado.
	- encontre um valor x no vetor e retorna sua posição
	 (caso x não exista no vetor, retorne -1);
	- mostra todos os elementos do vetor.

	O programa deve mostrar todas as saídas das funções criadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 5

void carregar (int v[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%do valor: ", i+1);
		scanf("%d", &v[i]);
	}
}

void mostrar(int v[], int n) {
	printf("\n\nMostrando o vetor: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}

int maior(int v[], int n) {
	int m;
	m = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] > m)
			m = v[i];
	}
	return m;
}

int menor(int v[], int n) {
	int m;
	m = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] < m)
			m = v[i];
	}
	return m;
}

float calcularMedia (int v[], int n) {
	float soma = 0.0;
	for (int i = 0; i < n; i++) {
		soma = soma + v[i];
	}
	return (soma / n);
}

void multiplicarPorX(int v[], int n, int x) {
	for (int i = 0; i < n; i++) {
		v[i] = v[i] * x;
	}
}

int pesquisarItem(int v[], int n, int chave) {
	for (int i = 0; i < n; i++) {
		if (v[i] == chave)
			return i;
	}

	return -1;
}

int main() {
	int n;
	char opcao;

	printf("\n\nInforme o tamanho do vetor: ");
	scanf("%d", &n);

	int vet[n];

	do {
		printf("\n\n\n1. Carregar o vetor     2. Mostrar vetor");
		printf("\n3. Verificar o maior    4. Verificar o menor");
		printf("\n5. Processar Média      6. Multiplicar por X");
		printf("\n7. Pesquisar Item       0. Sair");
		printf("\n\nSelecione sua opcao: ");
		opcao = getch();

		printf("\n");
		system("cls");

		switch (opcao) {
			case '1':
				carregar(vet, n);
				mostrar(vet, n);
				break;
			case '2':
				mostrar(vet, n);
				break;
			case '3':
				printf("\nMaior valor: %d", maior(vet, n));
				mostrar(vet, n);
				break;
			case '4':
				printf("\nMenor valor: %d", menor(vet, n));
				mostrar(vet, n);
				break;
			case '5':
				printf("\nMedia dos valores: %.2f", calcularMedia(vet, n));
				mostrar(vet, n);
				break;
			case '6':
				int x;
				printf("Informe o valor: ");
				scanf("%d", &x);
				multiplicarPorX(vet, n, x);
				mostrar(vet, n);
				break;
			case '7':
				int chave, pos;
				printf("Informe a chave de busca: ");
				scanf("%d", &chave);
				pos = pesquisarItem(vet, n, chave);

				if (pos > -1)
					printf("Posicao(%d): %d", chave, pos+1);
				else
					printf("Item %d nao encontrado", chave);

				mostrar(vet, n);
				break;
			default :
				printf("Opcao invalida!!");
		}
	}while(opcao > '0');

	return 0;
}
