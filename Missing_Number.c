#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned int s, a, b, c;
        scanf("%u %u %u %u", &s, &a, &b, &c);
        unsigned int d = s - (a + b + c);
        printf("%u\n", d);
    }
    return 0;
}
