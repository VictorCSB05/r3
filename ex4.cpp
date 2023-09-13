#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {
  int i = 0;
  int menosum = -1;
    while (i < n) {
        if (v[i] == e) {
            return i;
        }
        i++;
    }
    return menosum;
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
    
    int achado = busca_primeiro(V, tam, elemento);
    
    if (achado != -1) {
        printf("A primeira ocorrencia de %d esta no indice %d.\n", elemento, achado);
    } else {
        printf(" %d \n", achado );
    }
}