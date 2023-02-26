#include <stdio.h>
#include <stdlib.h>
// Calculator written in C for basic arithmetic using floats

int main() {
    
    float numOne, numTwo, result;
    char optn;

    // More operators shall be added soon
    printf("Enter an operation (+ - * /): ");
    scanf("%c", &optn);
    printf("Enter two numbers: ");
    int const scanf_result = scanf("%f %f", &numOne, &numTwo);
    if ((scanf_result == EOF) | (scanf_result != 2)) {
        perror("scanf Input validation error");
        exit(1);
    }
    
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
            printf("%c is invalid\n", optn);
    }
    return 0;
}