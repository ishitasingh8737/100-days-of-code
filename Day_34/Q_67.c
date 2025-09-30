#include <stdio.h>
int main() {
    int n, i, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
