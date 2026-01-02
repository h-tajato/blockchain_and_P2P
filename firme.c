// FIRME SISTEMA
#define MAX_PAYLOAD 256
#define DEFAULT_TIMEOUT 1000

typedef struct{
    int i;
    uint8 payload[MAX_PAYLOAD];
}MSG;

int rcv(int id_disp_attesa, MSG* messaggio, int timeout = DEFAULT_TIMEOUT){
    // Attendere la ricezione del messaggio dal processo con id_disp_attesa
    // Il messaggio che ricevo, lo vado ad inserire in messaggio
    // 1 -> valido
    // 0 -> ERRORE (generico, anche di autenticazione)
    // -1 -> TIMEOUT_ERROR
}

void send(int id_disp, MSG* messaggio_send){
    // Funzione invia il messaggio messaggio_send al dispositivo con id id_disp
}

// Nel caso, valutare la join di dispositivi senza considerare una prima impostazione statica
int join_group(char* password){
    // ritorna:
    // 1 -> se l'autenticazione è andata a buon fine
    // 0 -> se l'autenticazione è sbagliata
    // -1 -> qualunque altro problema
}
void leave_group(){
    // Esce dal gruppo e non fa più nulla
}
