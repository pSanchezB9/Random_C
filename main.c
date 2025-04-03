#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitzar la llavor de nombres aleatoris amb el temps actual
    srand(time(NULL));
    //hola
    // Generar un nombre aleatori entre 0 i 99
    int random_number = rand() % 100;
    
    // Mostrar el nombre generat
    printf("Numero aleatori: %d\n", random_number);
    
    return 0;
}
