/* programma che esegue la somma dei valori contenuti in due variabili intere, 
assegnando il risultato ad una terza variabile, che poi viene stampata */

#include <stdio.h>

int main ()
{
  int primoNumero, secondo, ris;	// definizione variabili
  
  printf("Inserisci due numeri: ");			// messaggio a video per ottenere dall'utente dati in input tramite scanf
  scanf("%d %d", &primoNumero, &secondo);


  ris = primoNumero + secondo;			// calcolo risultato somma
  printf ("il risultato di %d piu' %d e' %d\n", primoNumero, secondo, ris);			// stampa a video risultato
return 0;
}
