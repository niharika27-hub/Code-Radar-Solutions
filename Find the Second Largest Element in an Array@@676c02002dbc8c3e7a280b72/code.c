// Your code here...
#include <stdio.h>

int main() {
    //taking input of array 
    int n,max;
scanf("%d ",&n);
int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }


for(int i=0;i<n;i++){
    max=arr[0];
   if(max<arr[i]){
    max=arr[i];
    
   }
   }
   printf("%d",max);




  

 

    return 0;
}
