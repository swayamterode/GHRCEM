# DAA Practical

## 1. Linear Search

```c
#include <stdio.h>
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[20];
    int n, target;
    printf("Enter size of array ");
    scanf("%d", &n);
    printf("Enter array elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &target);
    int res = linearSearch(arr, n, target);
    if (res == -1)
        printf("Element does not found");
    else
        printf("Element found at position %d", linearSearch(arr, n, target));
}

```
---

## 2. Binary Search

```c
#include <stdio.h>
#include <stdbool.h>
// Order Agnostic Binary Search
int orderAgnosticBS(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
    bool isAscending = arr[start] < arr[end];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (isAscending)
        {
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[20];
    int size, target;
    printf("Enter size of array ");
    scanf("%d", &size);
    printf("Enter elemenets in sorted manner \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &target);
    int res = orderAgnosticBS(arr, size, target);
    printf("Element fount at %d position", res);
}

```
---

## 3. Bubble Sort

```c
#include <stdio.h>
void array_print(int a[], int n) // function to print array
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubble(int a[], int n) // function for bubble sort
{
    int i,
        j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main()
{
    int a[10], i, j, temp;
    int a[5] = {30, 6, 18, 20, 15};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are - \n");
    array_print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    array_print(a, n);
}

```

---
