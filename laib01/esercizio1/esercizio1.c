#include <stdio.h>

// Salvatore Calò
// matricola: 324208

int main(void){
    // Declare x and y variable as integer
    int x, y;
    // Declare z variable as float
    float z;

    // print text
    printf("Insert an integer number: ");
    // make the user input a value
    scanf("%d", &x);
    // set the value of y to 3
    y = 3;
    // force z to be float and assing expression x/y
    z = (float)(x)/y;
    // print this operation
    // N.B this will print the text inside " using the variable we pass after comma
    // We force the result to have 3 decimal numbers
    printf("%d/%d=%.3f\n", x, y, z);
    return 0;
}