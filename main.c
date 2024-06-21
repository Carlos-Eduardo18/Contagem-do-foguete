#include <stdio.h>
#include <unistd.h> // Para a função sleep()

int main() {
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1); // Espera por 1 segundo antes de continuar
    }
    printf("LANÇAR\n");
    return 0;
}
