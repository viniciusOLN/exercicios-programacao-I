#include <stdio.h>
#include <stdlib.h>
#define max 10

void maior_valor(){
    int i, j;

    printf("Digite um valor: ");
    scanf("%d", &i);

    printf("Digite um valor: ");
    scanf("%d", &j);

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("O maior  valor e: %d", i);
    }else{
        printf("O maior valor e: %d ", j);
    }
}

void fatorial(){
    int n = 0;
    int a = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

  for(int i = 1; i <= n;  i++){
     a = a * i;
  }
    printf("%d", a);
}

void carregar(int nota[], int jogador[], int limit){
    for(int i  = 0; i < limit; i++){
        jogador[i] = i + 1;
        printf("jogador[%d] nota:", i+1);
        scanf("%d", &nota[i]);
    }
}

void ordenar(int k[],int v[], int limit){
    int i, j, aux,aux2 = 0;

    for(i = 0; i < max - 1; i++){
        for(j = i +1; j< max; j++){
            if(v[j] > v[i]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;

                aux2 = k[j];
                k[j] = k[i];
                k[i] = aux2;
            }
        }
    }
}

void maior_jogador(){
    int jogador[max], nota[max];

        carregar(nota,jogador,max);

    int maior = nota[0];
    int pos = 0;

        for(int i = 1; i < max; i++){
            if(nota[i] > maior){
                maior =nota[i];
                pos = i;
            }
        }

    printf("O %d jogador foi o maior com a nota de %d",jogador[pos],  maior);

        ordenar(jogador,nota, max);

    printf("\n");

        for(int i = 0; i <3; i++){
            printf("(%d lugar)O jogador %d teve nota de: %d\n", i+1, jogador[i], nota[i]);
        }
}

void par(){
    int c = 0;

    for(int i = 0; i < 10; i++){
       scanf(" %d%*[^\n]",&c);
       getchar();
        if(c%2==0){
            printf("%d ", c);
        }
    }
}

void zero_nove(){
    for(int i = 0; i < 9; i++){
       if(i%2==0){
            printf("%d  ", i);
            printf("%d", i+ 1);
       }
        printf("\n");
    }
}

void impar_par(){

    int num[10];

    for(int i = 0; i <=9; i++){
        printf("Digite um numero ");
        scanf("%d",&num[i]);
    }

    printf("numeros pares: ");
    for(int i = 0; i<= 9; i++){
        if(num[i]%2==0){
            printf("%d ", num[i]);
        }
    }
    printf("\nnumeros impares: ");
    for(int i = 0; i<= 9; i++){
        if(!(num[i]%2==0)){
            printf("%d ", num[i]);
        }
    }
}

void sub(int a, int b){
    printf("subtracao(%d - %d): %d ", a,b, (a - b));
    calculadora();
}

void soma(int a, int b){
   printf("soma(%d + %d): %d ", a,b, (a+ b));
   calculadora();
}

void multi(int a, int b){
   printf("multiplicacao(%d * %d): %d ", a,b, (a * b));
   calculadora();
}

void divi(int a, int b){
   printf("divisao(%d / %d): %d ", a,b, (a /b));
   calculadora();
}

void calculadora(){

    int n,m = 0;
    char op;

        printf("Digite um numero: ");
        scanf("%d",&n);
        printf("Digite o operador: ");
        op = getch();
        printf("\nDigite um numero: ");
        scanf("%d",&m);

    switch (op){
     case '-':
        sub(n,m);
        break;
     case '+':
        soma(n,m);
        break;
     case '/':
        divi(n,m);
        break;
     case '*':
        multi(n,m);
        break;
     default:
        printf("Digite uma operacao valida!\n");
        calculadora();
    }
}

int maior(int v[], int m){
    int maior = v[0];

    for(int i = 0; i < m; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

int menor(int v[], int m){
    int menor = v[0];

    for(int i = 0; i < m; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    return menor;
}

int media_v(int v[], int m){
    int media = 0;

        for(int i = 0; i < m; i++){
            media = media + v[i];
        }
        media = media/m;

    return media;
}

int encontrar(int v[], int m, int a){

    int pos = -1;

    for(int i = 0; i < m; i++){
        if(a ==v[i]){
            pos = i;
            return pos;
        }
    }
    return pos;
}

void multiplicar(int v[], int m, int mu){
    for(int i = 0; i < m; i++){
        v[i] = v[i] * mu;
    }
    mostrar(v,m,mu);
}

void mostrar(int v[], int m, int a){
    printf("\nvalores multiplicados por: %d \n", a);
    for(int i = 0; i < m; i++){
        printf("%d ", v[i]);
    }
}

void oito(){
    int n, menor_valor, maior_valor, media, valor,v, mult_valor, mult = 0;
    printf("Digite quantos itens deseja ");
    scanf("%d",&n);
    int m[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d",&m[i]);
    }

    printf("Digite o numero que deseja encontrar: ");
    scanf("%d",&v);

    printf("Digite um numero a ser multiplicado pelo vetor: ");
    scanf("%d", &mult);
    valor = encontrar(m,n,v);
    maior_valor = maior(m,n);
    menor_valor = menor(m,n);
    media = media_v(m,n);

    printf("\nO maior valor e de: %d\n", maior_valor);
    printf("O menor valor e de: %d\n", menor_valor);
    printf("A media dos valores e de: %d \n", media);
        if(valor > 0){
                printf("Valor encontrado em %d ", valor + 1);
        }else {
            printf("Valor nao encontrado(-1)");
        }
    multiplicar(m,n,mult);
}

void sequencia(){

    int x,y = 0;
    printf("digite dois numeros");
    scanf("%d %d", &x, &y);

    if(x < y){
        int m[ y - x];
            for(int i = x; i <= y; i++){
                m[i] = i;
            }
    }else{
        int m[x - y];
            for(int i =y; i <= x; i++ ){
                m[i] = i;
            }
    }

     if(x < y){
        int m[ y - x];
            for(int i = x; i <= y; i++){
                printf("%d ", m[i] = i);
            }
    }else{
        int m[x - y];
            for(int i =y; i <= x; i++ ){
                 printf("%d ", m[i] = i);
            }
    }
}

int recursiva(int b, int e){
    if(b == 0 || e ==0){
        return 1;
    }else{
        return b * recursiva(b, e - 1);
    }
}

int main(){

    int n = 0;
     int a,m = 0;

    do{
        printf("1 - Primeira questao \t 2 - Segunda questao \t 3 - Terceira questao \t 4 - Quarta questao\t 5 - Quinta questao \n6 - Sexta questao \t 7 - Setima Questao \t 8 - Oitava Questao \t 9 - Nona questao \t 10 - Decima Questao \n0 - sair");
        printf("\nDigite o numero da questao: ");
        scanf("%d", &n);

        switch(n){

        case 1:
        //primeira quest�o
            maior_valor();
            printf("\n\n");
            break;
        case 2:
        //segunda quest�o
            fatorial();
            printf("\n\n");
            break;
        case 3:
        //terceira quest�o
            maior_jogador();
            printf("\n\n");
            break;
        case 4:
        //quarta quest�o
            par();
            printf("\n\n");
            break;
        case 5:
        //quinta quest�o
            zero_nove();
            printf("\n\n");
            break;
        case 6:
        //sexta quest�o
            impar_par();
            printf("\n\n");
            break;
        case 7:
        // s�tima quest�o
            calculadora();
            break;
        case 8:
        //oitava quest�o
            oito();
            break;
        case 9:
        //nona quest�o
            sequencia();
            printf("\n\n");
            break;
        case 10:
            //d�cima quest�o
                printf("digite o valor da base e o expoente respectivamente: ");
                scanf("%d %d", &a, &m);

                printf("%d", recursiva(a, m));
                printf("\n\n");
            break;
        case 0:
            return 1;
        }

    }while(1);

    return 0;
}
