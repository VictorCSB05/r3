#include <stdio.h>

void inverter(int vetor[]) {
    int i = 0;
    int j = 4;
    while (i < j) {
        int var = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = var;
        i++;
        j--;
    }
}

int main() {
    int tam = 5;
    
    int v[tam];
    int item = 0;
    while (item <tam) {
        printf("digite o valor do item %d: ", item);
        scanf("%d", &v[item]);
        item++;
    }

    inverter(v);
    printf("vetor invertido: ");
    for(int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
}
