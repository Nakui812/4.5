#include <stdio.h>

int main(void) {
    int NumProdotti, i = 0;
    float PrezzoUnita, PrezzoTot = 0;

    printf("Inserisci il numero di prodotti: ");
    scanf("%d", &NumProdotti);

    while (i < NumProdotti) {
        printf("Inserisci il prezzo dell'unità %d: ", i + 1);
        scanf("%f", &PrezzoUnita);
        PrezzoTot += PrezzoUnita;
        i++;
    }

    printf("Il prezzo totale è: %.2f\n", PrezzoTot);

    return 0;
}
