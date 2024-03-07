#include <stdio.h>

int	main(void)	{
    // declare variables
    int max, A, B;
    // User enter values of A and B
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);

    // Check if A is greater than B
    if	(A >= B){
        // if A is greater than B, set the maximum to A
        max	= A;
    } else {
        // if B is greater than A, set the maximum to B
        max	= B;
    }
    // print the maximum
    printf("The maximum is ");
    printf("%d\n", max);


    return 0;
}