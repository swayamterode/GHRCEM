#include <stdio.h>
void arrayBeforeSorting(int arr[], int n)
{
    printf("\nArray before Bubble Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    printf("\nArray after Bubble Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, j, temp;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput the array elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("Insert the array value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    arrayBeforeSorting(arr, n);
    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}