// Lowercase character to Uppercase conversion

#include <stdio.h>

int main() {
    char lowercase,uppercase;
    printf("enter a lowercase character\n");
    scanf("%c",&lowercase);
    uppercase = lowercase -32;
    printf("you entered %c the uppercase form is %c\n",lowercase,uppercase);
    
    return 0;
}
