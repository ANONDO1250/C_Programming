#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int vowels = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
    }

    printf("Number of vowels: %d\n", vowels);

    return 0;
}
