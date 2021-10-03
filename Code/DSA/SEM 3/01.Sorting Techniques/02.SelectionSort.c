#include <stdio.h>
void arrayBeforeSorting(int arr[], int n)
{
    printf("Array before sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void selctionSort(int arr[], int n, int min)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Finding the minimum element in unsorted array
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        // Swaping the found minimum element with the first element
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void arrayAfterSorting(int arr[], int n)
{
    printf("Array after Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n, i, min, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value at the index of %d :", i);
        scanf("%d", &arr[i]);
    }
    arrayBeforeSorting(arr, n);
    selctionSort(arr, n, min);
    arrayAfterSorting(arr, n);
    return 0;
}