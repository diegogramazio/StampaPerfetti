#include <stdio.h>

/* funzione che calcola la somma dei divisori minori di un numero */
int sommaDivisori(int intero) {
      int somma =0;                // per contenere il risultato
      /* somma alla variabile somma ciascun numero fra 1 ec intero-1 che divide intero */
      for(int i=1; i<intero; i++)
            if(intero%i==0)
                  somma+=i;
      return somma;
}

/* funzione che determina se un numero e' perfetto */
int isPerfetto(int numero)  {
      return numero==sommaDivisori(numero);
}

/* Applicazione che legge un numero e stampa tutti i
 * numeri perfetti compresi fra 1 e quel numero */
 int main(){
       int limite;                // fino a che numero ti vuoi spingere
       /* INPUT */
       printf("Cato utente, fino a che numero ti vuoi spingere?\n");
       scanf("%d", &limite);
       /* controlla ciascun numero fra 1 e limite; se perfetto, stampalo */
       for(int i=1; i<=limite; i++)
             if(isPerfetto(i))
                  printf("Ho trovato un numero perfetto: %d\n", i);
       system("PAUSE");
 }
