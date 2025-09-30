#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix:\n");
    for(int d=0; d<rows+cols-1; d++) {
        int startRow = (d < cols) ? 0 : d - cols + 1;
        int startCol = (d < cols) ? d : cols - 1;

        int i = startRow;
        int j = startCol;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    return 0;
}
