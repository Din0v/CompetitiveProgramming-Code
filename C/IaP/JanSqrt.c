#include <stdio.h>
#include <math.h>

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    double squareRoot = sqrt(number);

    printf("Square root of the given number is: %.2lf", squareRoot);

    return 0;
}