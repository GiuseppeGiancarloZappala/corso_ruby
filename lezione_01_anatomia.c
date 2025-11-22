/*
 * LEZIONE 01: LA VERITÀ SUI DATI
 * -------------------------------------------------------------------------
 * In linguaggi come Python o Java, un numero è un oggetto astratto.
 * In C, un numero è una sequenza precisa di bit in una locazione di memoria.
 * * Per parlare con Sanfilippo, devi smettere di vedere "valori" e iniziare
 * a vedere "bytes" e "indirizzi".
 */

#include <stdio.h>  // Standard Input/Output (printf)
#include <limits.h> // Definizioni dei limiti dei tipi (INT_MAX, etc.)

int main(void) {
    /* * 1. I TIPI DI DATI E LA LORO DIMENSIONE
     * In C, la dimensione dei dati dipende dall'architettura (32 vs 64 bit).
     * sizeof() ci dice quanti BYTE occupa una variabile.
     */
    printf("=== ANATOMIA DEI TIPI ===\n");
    printf("Un char occupa:   %lu byte (solitamente 8 bit)\n", sizeof(char));
    printf("Un int occupa:    %lu bytes (solitamente 32 bit)\n", sizeof(int));
    printf("Un double occupa: %lu bytes (solitamente 64 bit)\n", sizeof(double));
    
    /*
     * Concetto chiave: long vs long long
     * Su macchine moderne, spesso usiamo size_t per contare cose, perché
     * si adatta alla grandezza della memoria indirizzabile.
     */
    printf("Un long occupa:   %lu bytes\n", sizeof(long));
    printf("\n");

    /*
     * 2. VARIABILI E INDIRIZZI DI MEMORIA
     * Ogni variabile vive in una "casa" numerata nella RAM.
     * L'operatore '&' (address-of) ci dice qual è il numero civico.
     */
    int redis_version = 6;
    char status = 'A'; // 'A' sta per Active

    printf("=== MEMORIA E INDIRIZZI ===\n");
    printf("Variabile 'redis_version':\n");
    printf("  Valore:   %d\n", redis_version);
    // %p è il format specifier per i puntatori (indirizzi esadecimali)
    printf("  Indirizzo: %p (Dove vive nella RAM)\n", (void*)&redis_version);
    
    printf("Variabile 'status':\n");
    printf("  Valore:   %c (ASCII: %d)\n", status, status);
    printf("  Indirizzo: %p\n", (void*)&status);

    /*
     * NOTA PER L'APPRENDISTA:
     * Se esegui questo programma più volte, gli indirizzi cambieranno.
     * Il Sistema Operativo (OS) assegna spazio nello Stack in modo dinamico
     * ad ogni esecuzione (ASLR - Address Space Layout Randomization).
     */

    printf("\n=== CONCLUSIONE ===\n");
    printf("Il computer non sa cos'è 'A' o '6'.\n");
    printf("Il computer vede solo indirizzi e sequenze di bit.\n");
    printf("Benvenuto nel mondo reale.\n");

    return 0; // 0 indica al Sistema Operativo che tutto è andato bene.
}
