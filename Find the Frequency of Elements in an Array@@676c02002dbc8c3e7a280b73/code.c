// Your code here...
#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n]; // Array to keep track of visited elements

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) // Skip if already counted
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }

        printf("%d %d times\n", arr[i], count);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], visited[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    findFrequency(arr, n);

    return 0;
}
