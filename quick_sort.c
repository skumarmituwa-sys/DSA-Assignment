#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = 8;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    quickSort(a, 0, n - 1);

    printf("\n\nSorted array using Quick Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
