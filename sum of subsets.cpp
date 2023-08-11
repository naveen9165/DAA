#include <stdio.h>
void generateSubsets(int arr[], int n, int index, int subset[], int subsetSize, int targetSum) {
    if (index == n) {
        int sum = 0;
        for (int i = 0; i < subsetSize; i++) {
            sum += subset[i];
        }
        if (sum == targetSum) {
            printf("Subset with sum %d: ", targetSum);
            for (int i = 0; i < subsetSize; i++) {
                printf("%d ", subset[i]);
            }
            printf("\n");
        }
        return;
    }

    generateSubsets(arr, n, index + 1, subset, subsetSize, targetSum);

    subset[subsetSize] = arr[index];
    generateSubsets(arr, n, index + 1, subset, subsetSize + 1, targetSum);
}

int main() {
    int n, targetSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int subset[n];

    generateSubsets(arr, n, 0, subset, 0, targetSum);

    return 0; 
}
