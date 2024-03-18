#include <stdio.h>

    int main() {
        // Declare variables
        FILE *fp_read, *fp_write;
        // declare two char variable for
        // file_char: the character of the file (that will be printed)
        // choice: user choice (F: print on file) (C: print on console)
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
        // Regarding the question about using feof(fp_read), if the if check (!feof(fp_read)) is not used, the loop will continue to iterate one more time after reaching the end of the file. This is because feof(fp_read) only becomes true after attempting to read past the end of the file. As a result, the last iteration of the loop will read a character from the file even if there is no character left to read, producing unwanted output.
        while (!feof(fp_read)) {
            file_char = fgetc(fp_read);
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
        // Close the file
        fclose(fp_read);
        fclose(fp_write);
        return 0;
    }
