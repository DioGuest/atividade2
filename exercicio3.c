#include <stdio.h>
#include <string.h>

int busca_string(char *array[], int tamanho, char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1; // A string foi encontrada
        }
    }
    return 0; // A string não foi encontrada
}

int main() {
    char *array[] = {"texto", "J", "EDA"};
    int tamanho = sizeof(array) / sizeof(array[0]);
    char *busca = "EDO";
    
    int resultado = busca_string(array, tamanho, busca);
    
    printf("Saída: %d\n", resultado);
    
    return 0;
}
