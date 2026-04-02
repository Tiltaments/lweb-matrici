/*
Implementare in C le varianti 1, 2, 3 e 4 dell'algoritmo per il calcolo dei numeri di Fibonacci.

Testare le funzioni implementate.

Realizzare un programma che esegua le funzioni implementate per valori di n crescenti e verifichi se i valori restituiti corrispondano tra loro.
Inoltre, Per ciascuna funzione, il programma deve misurare il tempo impiegato per l'esecuzione su ciascun input (usare, ad esempio, la libreria time.h).
I dati raccolti (valori di n e rispettivi tempi d'esecuzione per ciascuna funzione) devono essere memorizzati in un file opportunamente formattato per poter
generare un grafico comparativo con un tool di propria scelta (ad es., gnuplot).
*/


#include <stdio.h>
#include <time.h>

int fib_ricorsiva(int n);
int fib_iterativa(int n);
int fib_iterativa2(int n);
double measure_time(int (*fib_function)(int), int n);


int main() {
    int n = 100;  
    
    int res;
    
    res = fib_ricorsiva(n);
    printf("Valore ricorsiva: %d", res);
    double time_ricorsiva = measure_time(fib_ricorsiva, n);
    printf("\nFib(%d) Ricorsiva: %.6f secondi\n", n, time_ricorsiva);
    
    res = fib_iterativa(n);
    printf("Valore iterativa: %d", res);
    double time_iterativa = measure_time(fib_iterativa, n);
    printf("\nFib(%d) Iterativa: %.6f secondi\n", n, time_iterativa);
    
    res = fib_iterativa2(n);
    printf("Valore iterativa ottimizzata: %d", res);
    double time_iterativa2 = measure_time(fib_iterativa2, n);
    printf("\nFib(%d) Ottimizzata: %.6f secondi\n", n, time_iterativa2);

    return 0;
}


int fib_ricorsiva(int n) {
    if (n <= 1) return n;
    return fib_ricorsiva(n - 1) + fib_ricorsiva(n - 2);
}


int fib_iterativa(int n) {
    if (n <= 1) return n;
    int prev = 0, curr = 1, next, i;
    for (i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}


int fib_iterativa2(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, i;
    for (i = 2; i <= n; i++) {
        b = a + b;
        a = b - a;
    }
    return b;
}


double measure_time(int (*fib_function)(int), int n) {
    clock_t start, end;
    start = clock();
    fib_function(n);
    end = clock();
    return ((double) (end - start)) / CLOCKS_PER_SEC;
}

