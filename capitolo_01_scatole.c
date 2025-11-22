/*
 * CAPITOLO 1: LE SCATOLE (VARIABILI)
 * ---------------------------------------------------
 * Obiettivo: Capire come definire i contenitori dei dati
 * e vedere cosa succede quando proviamo a "imbrogliare" le scatole.
 */

#include <stdio.h> // Ci serve per usare printf (stampare a video)

int main(void) {
    
    // --- PARTE 1: DEFINIRE LE SCATOLE ---
    
    // Qui dico al computer: "Prepara una scatola per numeri INTERI e chiamala 'vite'"
    // È come mettere un'etichetta su uno scaffale vuoto.
    int vite; 
    
    // Adesso riempio la scatola.
    vite = 5; 
    
    // Posso fare tutto in una riga (Dichiarazione + Inizializzazione)
    // "Prepara una scatola per numeri con VIRGOLA chiamata 'prezzo'"
    float prezzo = 9.99;
    
    // "Prepara una scatola piccolissima per un CARATTERE chiamata 'categoria'"
    char categoria = 'A';

    // Stampiamo il contenuto (non preoccuparti troppo dei simboli % per ora)
    printf("--- IL MIO MAGAZZINO ---\n");
    printf("Vite disponibili: %d\n", vite);      // %d usa la scatola Intera
    printf("Prezzo unitario:  %.2f euro\n", prezzo); // %.2f usa la scatola Float (2 decimali)
    printf("Categoria merce:  %c\n", categoria); // %c usa la scatola Carattere
    
    
    // --- PARTE 2: LA LOGICA RIGIDA DEL C ---
    
    printf("\n--- ESPERIMENTO LOGICO ---\n");
    printf("Proviamo a forzare un numero con la virgola in una scatola intera.\n");
    
    int scatola_rigida;
    
    // Provo a mettere 3.99 in una scatola che accetta solo interi.
    // In altri linguaggi, questo verrebbe arrotondato a 4.
    // In C, la parte decimale viene brutalmente TAGLIATA via.
    scatola_rigida = 3.99;
    
    printf("Ho inserito 3.99, ma nella scatola int trovo: %d\n", scatola_rigida);
    
    
    // --- PARTE 3: OPERAZIONI TRA SCATOLE DIVERSE ---
    
    printf("\n--- CALCOLI MISTI ---\n");
    // Se moltiplico un intero per un float, il C "promuove" il risultato
    // alla scatola più capiente (float) per non perdere dati.
    float totale = vite * prezzo;
    
    printf("5 vite per 9.99 euro fanno: %.2f euro\n", totale);

    return 0; // Fine del programma
}
