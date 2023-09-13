#include <stdio.h>

bool contem(int v[], int n, int e) {
    int i = 0;
    while (i < n) {
        if (v[i] == e) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int tam = 1;
    printf("digite a quantidade de itens no vetor: ");
    scanf("%d", &tam);
    
    int V[tam];
    int item = 0;
    while (item <tam) {
        printf("digite o valor do item %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    
    int elemento;

    printf(" Digite o elemento a ser verificado: ");
    scanf("%d", &elemento);

    if (contem(V, 5, elemento)) {
        printf( "O elemento %d está presente no vetor.", elemento);
    } else {
      printf( "O elemento %d não está presente no vetor.", elemento);
    }

    
}
