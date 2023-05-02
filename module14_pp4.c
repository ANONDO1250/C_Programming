#include <stdio.h>

char small_to_capital(char small_alphabet) {
    return small_alphabet - 'a' + 'A';
}

int main() {
    char input;
    printf("Enter a small alphabet: ");
    scanf("%c", &input);
    char capital_alphabet = small_to_capital(input);
    printf("Capital alphabet: %c\n", capital_alphabet);
    return 0;
}
