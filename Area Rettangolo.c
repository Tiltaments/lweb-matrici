/* questo programma, ricevendo in INPUT i lati significativi di un rettangolo, 
   ne calcola e stampa in OUTPUT l'area */
   
#include <stdio.h>
 
int main () {
  int primoLato, secondoLato, area;						

  printf ("Inserisci i due lati del rettangolo separati da spazio:\n ");  
  scanf("%d %d", &primoLato, &secondoLato);


  area = primoLato*secondoLato;         

  printf (" Il rettangolo di lati %d e %d ha area %d\n", primoLato, secondoLato, area);

return 0;
}

