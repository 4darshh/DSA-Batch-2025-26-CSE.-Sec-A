#include <stdio.h>

int main()
{
    int a[5] = {72, 95, 102, 105, 110};
    int low = 0, high = 4, mid, key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Element not found.\n");

    return 0;
}