#include <stdio.h>

    int main() {
        // Declare variables
        FILE *fp_read, *fp_write;
        // declare two char variable for
        // file_char: the character of the file (that will be printed)
        // choice: user choise (F: print on file) (C: print on console)
        char file_char, choice;
        // Check if the file does not exist
        if ((fp_read = fopen("../Guide.txt", "r")) == NULL) {
            printf("Error opening file\n");
            return 1;
        }
        if ((fp_write = fopen("../Output.txt", "w")) == NULL) {
            printf("Error opening file\n");
            return 2;
        }
        // Print a guideline text to user
        printf("Print on console (C) or on file (F):");
        // Make the user enter a character
        choice = getchar();
        // The function feof check if the program is reading the last line of the file
        // if we remove this check the programme will print only the " character
        // Per quanto riguarda la tua domanda sull'utilizzo di feof(fp_read), se non viene utilizzato il controllo if (!feof(fp_read)), il ciclo continuerà a eseguire un'iterazione in più dopo aver raggiunto la fine del file. Ciò accade perché feof(fp_read) diventa vero solo dopo aver tentato di leggere oltre la fine del file. Di conseguenza, l'ultima iterazione del ciclo leggerà un carattere dal file anche se non c'è nessun carattere rimasto da leggere, producendo output non desiderato.
        while (!feof(fp_read)) {
            file_char = fgetc(fp_read);
            if (!feof(fp_read)){
                switch (choice) {
                    // if choice is equals to "C"
                    case 'C':
                        printf("\nChar printed on the console: %c",
                               file_char);
                        break;
                    // If choice if equals to "F"
                    case 'F':
                        fputc(file_char, fp_write);
                        printf("\nChar saved on file: ");
                        putchar(file_char);
                        break;
                    // if the choice is not (C or F)
                    default:
                        printf("Wrong choice\n");
                        return 3;
                }
            }
        }
        // Close the file
        fclose(fp_read);
        fclose(fp_write);
        return 0;
    }
