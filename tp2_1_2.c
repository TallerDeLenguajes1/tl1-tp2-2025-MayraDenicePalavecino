#include <stdio.h>
#include <stdlib.h>
#define N 20

int main() {
    
double vt[N];
double *p;       // declaro el puntero
p = vt;          //Equivale a double p = &vt[0]; (dirección del primer elemento).



    for (int i = 0; i < N; i++) {
        p[i] = 1 + rand() % 100; // Acceso con notación indexada del puntero
                                //p[i] es equivalente a vt[i] porque p apunta a vt
        printf(" %f ", p[i]);
    }

    return 0;
}