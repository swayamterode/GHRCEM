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

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void arrayAfterSorting(int arr[], int n)
{
    printf("Array after sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n); //size of array

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value in index %d: ", i);
        scanf("%d", &arr[i]);
    }
    arrayBeforeSorting(arr, n);
    insertionSort(arr, n);
    arrayAfterSorting(arr, n);
    return 0;
}