#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
    int ultimo = -1;
    for(int i = 0; i < n; i++) {
        if (v[i] == e) {
            ultimo = i;
        }
    }
    return ultimo;
}

int main() {
    int tam = 1;
    printf("digite a quantidade de itens no vetor: ");
    scanf("%d", &tam);
    
    int V[tam];
    int item = 0;
    while (item < tam) {
        printf("digite o valor do item %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    
    int elemento;
    printf("Digite o elemento a ser verificado: ");
    scanf("%d", &elemento);
    
    int ultimo = busca_ultimo(V, tam, elemento); 

    if(ultimo != -1) {
        printf("O elemento foi encontrado pela ultima vez no vetor na posição %d.\n", ultimo);
    } else {
        printf("-1\n");
    }
}