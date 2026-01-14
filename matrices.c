#include <stdio.h>








int main() {
    int a[10][10], b[10][10], c[10][10];
    int n, m, i, j, k, scalar, choice;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Scalar Multiplication\n5. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                    c[i][j] = a[i][j] + b[i][j];

            printf("Result (A + B):\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                    c[i][j] = a[i][j] - b[i][j];

            printf("Result (A - B):\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;
        case 3:
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++) {
                    c[i][j] = 0;
                    for (k = 0; k < m; k++)
                        c[i][j] += a[i][k] * b[k][j];
                }

            printf("Result (A × B):\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;
        case 4:
            printf("Enter scalar value: ");
            scanf("%d", &scalar);

            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                    c[i][j] = a[i][j] * scalar;

            printf("Result (scalar × A):\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++)
                    printf("%d ", c[i][j]);
                printf("\n");
            }
            break;

        case 5:
            printf("Transpose of A:\n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++)
                    printf("%d ", a[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
