// Your code here...
// Your code he
#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
          if(arr[i]>arr[i+1]){
            i++;
         printf("YES");
    }}
         
         
   
    

    


    return 0;
}