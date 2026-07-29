#include <stdio.h>

int main()
{
    int a[100], n, pos, element, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[pos - 1] = element;

    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}