#include <stdio.h>
int findMax(int arr[], int index, int n) {
    if (index == n - 1)
        return arr[index];

    int maxRest = findMax(arr, index + 1, n);

    if (arr[index] > maxRest)
        return arr[index];
    else
        return maxRest;
}
int findMin(int arr[], int index, int n) {
    if (index == n - 1) 
        return arr[index];

    int minRest = findMin(arr, index + 1, n);

    if (arr[index] < minRest)
        return arr[index];
    else
        return minRest;
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxValue = findMax(arr, 0, n);
    int minValue = findMin(arr, 0, n);

    printf("Maximum element: %d\n", maxValue);
    printf("Minimum element: %d\n", minValue);

    return 0;
}
