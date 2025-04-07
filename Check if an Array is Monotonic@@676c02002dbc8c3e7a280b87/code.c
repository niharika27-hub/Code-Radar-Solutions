#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int inc = 1, dec = 1; // flags for increasing/decreasing

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            dec = 0; // not decreasing
        } else if (arr[i] > arr[i + 1]) {
            inc = 0; // not increasing
        }
    }

    if (inc || dec) {
        printf("YES\n"); // monotonic
    } else {
        printf("NO\n"); // not monotonic
    }

    return 0;
}
