#include <stdio.h>
// Calculator written in C for basic arithmetic using floats

int main() {
    
    float numOne, numTwo, result;
    char optn;

    // More operators shall be added soon
    printf("Enter an operation (+ - * /): ");
    scanf("%c", &optn);
    printf("Enter two numbers: ");
    scanf("%f %f", &numOne, &numTwo);
    
    switch (optn) {
        case '+':
            result = numOne + numTwo;
            printf("%.2f\n", result);
            break;
        case '-':
            result = numOne - numTwo;
            printf("%.2f\n", result);
            break;
        case '*':
            result = numOne * numTwo;
            printf("%.2f\n", result);
            break;
        case '/':
            result = numOne / numTwo;
            printf("%.2f\n", result);
            break;
        default:
            printf("%c is invalid", optn);
    }
    return 0;
}