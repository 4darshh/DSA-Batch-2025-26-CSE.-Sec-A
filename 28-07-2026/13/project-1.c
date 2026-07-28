#include <stdio.h>

void delete_at_index(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, n;

    printf("Enter number of elements in array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    print_array(arr, size);

    delete_at_index(arr, &size, 0);
    printf("Array after deleting the first element: ");
    print_array(arr, size);

    printf("\nEnter 1-based position (n) to delete: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    delete_at_index(arr, &size, n - 1);
    printf("Array after deleting position %d: ", n);
    print_array(arr, size);

    return 0;
}
