#include <stdio.h>
// Measurement converter

int main() {
    // Just cm to mm for now
    float cm;
    printf("Enter measurement in cm: ");
    scanf("%f", &cm);
    printf("%.2f cm = %.2f mm\n", cm, cm * 10);
    return 0;
}