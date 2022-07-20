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
