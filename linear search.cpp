#include <stdio.h>
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d elements of the array: " , i+1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);
}

int linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    int key;
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
     int sortArray(arr, size);
    if (linearSearch(arr, size, key) == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", linearSearch(arr, size, key));
    return 0;
}
