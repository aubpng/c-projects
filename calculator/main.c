#include <stdio.h>
// Calculator written in C for basic arithmetic using floats

int main() {
    float numOne, numTwo;
    printf("Enter two numbers: ");
    scanf("%f %f", &numOne, &numTwo);
    printf("%.2f + %.2f = %.2f\n", numOne, numTwo, numOne + numTwo);
    return 0;
}
