#include <unistd.h>
#include <stdio.h>

int main() {
    printf("soy el proceso padre\n");
    fork();
    printf("soy otro proceso\n");
    return 0;
}
