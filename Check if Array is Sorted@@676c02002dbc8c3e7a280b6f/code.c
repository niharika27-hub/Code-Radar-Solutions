// Your code here...
#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // If any element is greater than the next one, it's not sorted
            return 0;  // Not sorted
        }
    }
    return 1;  // Sorted
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    if (isSorted(arr, n)) {
        printf("sorted\n");
    } else {
        printf("not sorted\n");
    }

    return 0;
}
