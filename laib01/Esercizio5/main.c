#include <stdio.h>

int main() {
    // declare variables
    float op1, op2, result;
    printf("Which operation do you weant to do? \n +: sum between op1 and op2 \n - substraction between op1 and op2 \n *: multiplication between op1 and op2 \n /: division between op1 and op2 \n Enter the value:");
    // let the user enter the operation
    char operation = getchar();
    // insert first number
    printf("Insert operation one: ");
    scanf("%f", &op1);
    // insert second number
    printf("Insert operation two: ");
    scanf("%f", &op2);
    // match user choice with ascii code of operand
    if (operation == 43){
        result = op1 + op2;
        printf("The sum between %.2f and %.2f is %.2f", op1, op2, result);
    } else if (operation == 45){
        result = op1 - op2;
        printf("The substraction between %.2f and %.2f is %.2f", op1, op2, result);
    } else if (operation == 42){
        result = op1 * op2;
        printf("The multplication between %.2f and %.2f is %.2f", op1, op2, result);
    } else if (operation == 47){
        // check if THE SECOND NUMBER IS 0 BECAUSE WE CAN'T DIVIDE FOR 0!
        if (op2 != 0){
            result = op1 / op2;
            printf("The division between %.2f and %.2f is %.2f", op1, op2, result);
        } else {
            printf("Sorry, could not divide for 0. Please enter another value next time");
        }
    } else {
        // if the program doesn't match any operation it would return a warning
        printf("Could not find operation.");
    }
    return 0;
}
