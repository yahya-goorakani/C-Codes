#include <stdio.h>
#include <stdlib.h>

void validateInput(int* input) {
    while (*input < 0) {
        printf("Enter a number greater than 0: ");
        scanf("%i", input);
    }
}

void validateBlur(int* blur, int rows, int columns) {
    while (*blur < 2 || *blur > rows || *blur > columns) {
        printf("Enter a valid blur value: ");
        scanf("%i", blur);
    }
}

void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void scanMatrix(float** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            scanf("%f", &matrix[i][j]);
        }
    }
}

void printMatrix(float** matrix, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%.2f  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

float calculateArimed(float** matrix, int i, int j, int blur) {
    float arim = 0;
    int endRow = i + blur;
    int endCol = j + blur;
    float elements = blur * blur;

    for (i; i < endRow; ++i) {
        int k = j;
        for (k; k < endCol; ++k) {
            arim += matrix[i][k];
        }
    }
    arim /= elements;
    return arim;
}

void updateMatrix(float** matrix, int i, int j, int blur, float arim) {
    int endRow = i + blur;
    int endCol = j + blur;
    for (i; i < endRow; ++i) {
        int k = j;
        for (k; k < endCol; ++k) {
            matrix[i][k] = arim;
        }
    }
}

void blurImage(float** matrix, int rows, int columns, int blur) {
    int endRow = rows - blur + 1;
    int endCol = columns - blur + 1;

    for (int i = 0; i < endRow; ++i) {
        for (int j = 0; j < endCol; ++j) {
            float arim = calculateArimed(matrix, i, j, blur);
            updateMatrix(matrix, i, j, blur, arim);
        }
    }
}

int main() {
    int columns, rows, blur;

    printf("Enter the number of rows: ");
    scanf("%i", &rows);
    validateInput(&rows);

    printf("Enter the number of columns: ");
    scanf("%i", &columns);
    validateInput(&columns);

    printf("Enter blur value: ");
    scanf("%i", &blur);
    validateBlur(&blur, rows, columns);

    float** matrix = (float**)malloc(rows * sizeof(float*));
    float* items = (float*)malloc(rows * columns * sizeof(float));

    for (int i = 0; i < rows; ++i) {
        matrix[i] = items + i * columns;
    }

    printf("Enter %i colors:\n", rows * columns);
    scanMatrix(matrix, rows, columns);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, columns);

    blurImage(matrix, rows, columns, blur);

    printf("\nBlurred Matrix:\n");
    printMatrix(matrix, rows, columns);

    free(matrix);
    free(items);

    return 0;
}
