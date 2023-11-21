#include <pthread.h>
#include <stdio.h>

#define NUM_HILOS 100

void *holaHilo(void *thid) {
    int thread_id = *(int *)thid;
    printf("Hola desde el hilo %d\n", thread_id);
    pthread_exit(NULL);
}

int main() {
    pthread_t t[NUM_HILOS];
    int thid[NUM_HILOS];

    for (int i = 0; i < NUM_HILOS; i++) {
        thid[i] = i + 1;
        pthread_create(&t[i], NULL, holaHilo, &thid[i]);
    }

    for (int i = 0; i < NUM_HILOS; i++) {
        pthread_join(t[i], NULL);
    }

    return 0;  
}
