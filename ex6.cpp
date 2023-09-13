#include <stdio.h>

int busca_qtde(int v[], int n, int e) {
  int cont = 0;
  
  for(int i = 0; i < n; i++) {
    if (v[i] == e) {
      cont++;
    }
  }
  
  if (cont == 0) {
    return -1; 
  }
  
  return cont;
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
    
    int achado = busca_qtde(V, tam, elemento);
    
    if (achado != -1) {
        printf("A quantidade de vezes que %d se encontra no vetor é %d.\n", elemento, achado);
    } else {
        printf(" %d \n", achado );
    }
}
