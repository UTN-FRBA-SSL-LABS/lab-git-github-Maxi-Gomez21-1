#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

<<<<<<< HEAD
int sumar(int a,int b) {
=======
int sumar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

<<<<<<< HEAD
// multiplica dos enteros usando el operador *
int multiplicar(int a, int b) {
    return a * b; //La operacion * hace la multiplicacion entre a y b
=======
int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
>>>>>>> origin/feature/conflicto-demo
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
