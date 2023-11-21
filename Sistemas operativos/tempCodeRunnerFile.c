#include <pthread.h>
#include <stdio.h>

int saldo = 1000; // Un saldo de ejemplo

void *incrementoSaldo() {
    printf("El saldo actual es %d\n", saldo);
    pthread_exit(NULL);
}

int main() {
    pthread_t t;

    // Crear un hilo para ejecutar incrementoSaldo
    pthread_create(&t, NULL, incrementoSaldo, NULL);

    // Esperar a que el hilo termine
    pthread_join(t, NULL);

    return 0;
}
