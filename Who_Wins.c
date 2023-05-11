#include <stdio.h>

int main() {
    int n, tiger = 0, pathan = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2) {
            tiger++;
        } else if (x2 > x1) {
            pathan++;
        }
    }
    if (tiger > pathan) {
        printf("Tiger\n");
    } else if (pathan > tiger) {
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }
    return 0;
}
