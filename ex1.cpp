#include <stdio.h>

bool crescente(int vetor[], int t) 
{
    int i = 1;
    int j = 0;
    while (i < t) {
        if (vetor[i] > vetor[j]) {
            i++;
            j++;
        } else {
            return false;
        }
    }  
    return true;     
}

int main() {
    int tam;
    printf("Digite a quantidade de itens no vetor: ");
    scanf("%d", &tam);
    
    int V[tam];
    int item = 0;
    while (item < tam) {
        printf("Digite o valor do item %d: ", item);
        scanf("%d", &V[item]);
        item++;
    }
    
    if (crescente(V, tam)) {
        printf("A lista está em ordem crescente.\n");
    } else {
        printf("A lista está fora de ordem.\n");
    }
}
