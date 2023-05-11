#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int last_row[m];
    for (int i = 0; i < m; i++) {
        last_row[i] = matrix[n-1][i];
        printf("%d ", last_row[i]);
    }
    printf("\n");

    for (int i = 0; i < n-1; i++) {
        printf("%d ", matrix[i][m-1]);
    }
    printf("%d", matrix[n-1][m-1]);

    return 0;
}
