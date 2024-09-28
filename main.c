#include<stdio.h>
int main() {
    float provvigione,biglietto,prezzo_finale;
    printf("Scrivi il costo del biglietto deve essere minimo 33,3: ");
    scanf("%d",&biglietto);
    provvigione=(biglietto*15)/100;
    printf("Il guadagno del rivenditore è: %f\n" ,provvigione);
    prezzo_finale=biglietto+provvigione;
    printf("Il costo finale del biglietto è: %f\n" ,prezzo_finale);
}