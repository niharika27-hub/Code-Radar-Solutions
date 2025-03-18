# include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
//taking input from user and printing it
for(int i=0;i<n;i++){
    scanf(" %d",&arr[i]);
}


// Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
// Find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    

    // Print max and min values
    printf("%d %d", min, max);

    return 0;
}