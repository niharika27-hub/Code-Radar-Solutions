#include <stdio.h>
int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rev[n];
    int j=0;
    for(int i= n-1;i>=0;i--){
        rev[j]=arr[i];
        ++j;
        
    }
 //compare arrays 

 for(int i=0;i<n;i++){
    if(arr[i]!=rev[i]) {
    printf("NO");
    return 0;
    }
 }
printf("YES");
 return 0;
}