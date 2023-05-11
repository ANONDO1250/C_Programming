#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int is_unit_matrix = 1; // assume it is unit matrix initially
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                is_unit_matrix = 0; // diagonal element is not 1
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                is_unit_matrix = 0; // non-diagonal element is not 0
                break;
            }
        }
        if (!is_unit_matrix) {
            break; // exit early if not a unit matrix
        }
    }
    if (is_unit_matrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
