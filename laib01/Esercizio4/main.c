#include <stdio.h>

#define  pi 3.14
int main() {
    char firstChoice, secondChoice;
    float area;
    printf("Enter\n Q to calculate the area of a square \n C to calculate the area of a circle \n Enter your character here: ");
    firstChoice = getchar();
    // 81 is the ASCII code for Q
    if (firstChoice == 81) {
        printf("Enter (D) to calculate it by diagonal \n (L) to calculate it by the lato\n Enter character here: ");
        scanf("%s", &secondChoice);
        // 68 us the ASCII code for D
        if (secondChoice == 68) {
            float diagonal;
            printf("Enter the diagonal value: ");
            scanf("%f", &diagonal);
            area = diagonal*diagonal/2;
            printf("The value of area is %.2f", area);
        } else if (secondChoice == 76){
            float l;
            printf("Enter the lato value: ");
            scanf("%f", &l);
            area = l*l;
            printf("The value of area is %.2f", area);
        } else {
            printf("Your choice doesn't match no one of your option");
        }
    // 67 is the ASCII code or C
    } else if (firstChoice == 67){
        float radius;
        printf("Enter the valute of the radius: ");
        scanf("%f", &radius);
        printf("Enter (D) to calculate it by diameter \n (R) to calculate it by the radius \n Enter the value here: ");
        scanf("%s", &secondChoice);
     // 68 IS THE ASCII CODE FOR D
        if (secondChoice == 68) {
            float D = radius*2;
            area = pi*D*D/4;
            printf("The value of area is %.2f", area);
    // 82 IS THE ASCII CODE FOR R
        } else if (secondChoice == 82){
            area = radius*radius*pi;
            printf("The value of area is %.2f", area);
        } else {
            printf("Your choice doesn't match no one of your option");
        }
    } else {
        printf("Your choice doesn't match no one of your option");
    }
    return 0;
}
