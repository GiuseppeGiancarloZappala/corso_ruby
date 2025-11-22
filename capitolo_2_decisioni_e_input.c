/*
 * CAPITOLO 2: IL CERVELLO (DECISIONI E INPUT)
 * ---------------------------------------------------
 * Obiettivo:
 * 1. Imparare a prendere input dall'utente (scanf).
 * 2. Usare 'if' ed 'else' per creare bivi.
 * 3. Capire cosa è "Vero" per il computer.
 */

#include <stdio.h>

int main(void) {
    
    int eta;
    
    // --- PARTE 1: L'INTERROGATORIO (INPUT) ---
    
    printf("--- CONTROLLO ACCESSO CLUB C ---\n");
    printf("Quanti anni hai? ");
    
    /*
     * scanf è il contrario di printf. Legge la tastiera.
     * NOTA CRUCIALE: Vedi quel '&' prima di 'eta'?
     * Significa: "Metti il numero digitato DENTRO l'indirizzo di memoria
     * della scatola 'eta'". Senza '&', il computer non sa DOVE scrivere.
     */
    scanf("%d", &eta); 
    
    
    // --- PARTE 2: IL BIVIO (LOGICA) ---
    
    // Il computer valuta: eta è maggiore o uguale a 18?
    if (eta >= 18) {
        // Se SÌ, entra qui dentro.
        printf("\nAccesso consentito. Benvenuto nel club.\n");
        
        // Possiamo annidare decisioni (scatole cinesi)
        if (eta > 100) {
            printf("(Wow, complimenti per la longevita'!)\n");
        }
        
    } else {
        // Se NO, salta direttamente qui.
        printf("\nAccesso negato. Torna quando sarai maggiorenne.\n");
        
        // Calcoliamo quanto manca
        int anni_mancanti = 18 - eta;
        printf("Ti mancano ancora %d anni.\n", anni_mancanti);
    }
    
    
    // --- PARTE 3: LA VERITA' SECONDO SANFILIPPO ---
    
    printf("\n--- ESPERIMENTO SULLA VERITA' ---\n");
    
    int numero_strano = -5;
    
    // In C, qualsiasi numero diverso da 0 è VERO.
    // Anche i numeri negativi!
    if (numero_strano) {
        printf("Il computer dice: %d è considerato VERO (True).\n", numero_strano);
    } else {
        printf("Il computer dice: %d è considerato FALSO (False).\n", numero_strano);
    }
    
    int zero = 0;
    if (zero) {
        printf("Questo non verrà mai stampato.\n");
    } else {
        printf("Il computer dice: 0 è l'unica cosa FALSA in questo universo.\n");
    }

    return 0;
}
