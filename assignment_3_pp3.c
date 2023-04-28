#include <stdio.h>
#include <math.h>

int main() {
    int m1, m2, d;

    printf("Enter the number of workers required and days needed by them to complete the work: ");
    scanf("%d %d %d", &m1, &d);

    printf("Enter the number of workers available now: ");
    scanf("%d", &m2);

    int days_needed = ceil((m1 * d * 1.0) / m2);

    printf("It will take %d days for %d workers to complete the work.\n", days_needed, m2);

    return 0;
}
