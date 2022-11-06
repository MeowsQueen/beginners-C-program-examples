// Uppercase character to lowercase character

#include <stdio.h>

int main() {
    char uppercase,lowercase;
    printf("enter an uppercase character\n");
    scanf("%c",&uppercase);
    lowercase = uppercase + 32;
    printf("you entered %c the lowercase form is %c\n",uppercase,lowercase);
    return 0;
}
