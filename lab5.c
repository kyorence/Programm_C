#include <stdio.h>
#include <stdlib.h>

// Объявление функции из другого файла
double** perform_operation(double** matrix1, double** matrix2, int n, char operation);

int main() {
    int n;
    char operation;

    printf("Введите размер матриц: ");
    scanf("%d", &n);

    double** matrix1 = (double**)malloc(n * sizeof(double*));
    double** matrix2 = (double**)malloc(n * sizeof(double*));

    printf("Введите элементы первой матрицы:\n");
    for(int i = 0; i < n; i++) {
        matrix1[i] = (double*)malloc(n * sizeof(double));
        for(int j = 0; j < n; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }

    printf("Введите элементы второй матрицы:\n");
    for(int i = 0; i < n; i++) {
        matrix2[i] = (double*)malloc(n * sizeof(double));
        for(int j = 0; j < n; j++) {
            scanf("%lf", &matrix2[i][j]);
        }
    }

    printf("Введите операцию (+, -, *): ");
    scanf(" %c", &operation);

    double** result = perform_operation(matrix1, matrix2, n, operation);

    printf("Результат:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
