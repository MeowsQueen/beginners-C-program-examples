// Fahrenheit to celcius temp converter

#include <stdio.h>

int main() {
    float fahrenheit,celsius;
    printf("enter a fahrenheit value to convert celsius one\n");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("you entered %.2f F which corresponds to %.2f C",fahrenheit,celsius);
    return 0;
}
