// Your code here...
#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  // Count even numbers
        } else {
            oddCount++;   // Count odd numbers
        }
    }

    printf("Even count: %d\n", evenCount);
    printf("Odd count: %d\n", oddCount);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    countEvenOdd(arr, n);

    return 0;
}
