#include <stdio.h>

int main() {
    FILE *fp_read, *fp_write;
    char operator;
    float operand1, operand2, result;

    if ((fp_read = fopen("../Operations.txt", "r")) == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if ((fp_write = fopen("../Results.txt", "w")) == NULL) {
        printf("Error opening file!\n");
        return 2;
    }

    // Lettura delle operazioni dal file di input
    while (fscanf(fp_read, " %c %f %f", &operator, &operand1, &operand2) == 3) {
        // Esecuzione dell'operazione
        switch (operator) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                // Controllo per la divisione per zero
                if (operand2 != 0) {
                    result = operand1 / operand2;
                } else {
                    printf("Error: could not divide for 0!\n");
                }
                break;
            default:
                printf("Operator not valid!\n");
                continue; // Passa alla prossima iterazione del ciclo
        }

        // Scrittura dell'operazione e del risultato nel file di output con due cifre decimali
        fprintf(fp_write, "%c %.2f\n", operator, result);
    }

    // Chiusura dei file
    fclose(fp_read);
    fclose(fp_write);
    return 0;
}
