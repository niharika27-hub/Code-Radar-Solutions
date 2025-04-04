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
//max value

for(int i=0;i<n;i++){
    max=arr[0];//compare all with 0th element
   if(max<arr[i]){
    max=arr[i];
    
   }
   }
  
int sec_max;
int c=0;
for(int i=0;i<n;i++){
    if(arr[i]!=max){
        sec_max=arr[i];
        c=1;
        break;
    }
}

if(c==0){
    printf("-1");
    return 0;
}

for(int i=1;i<n;i++){
    
  if(arr[i]<max && arr[i]>sec_max  )
   sec_max=arr[i];

 
    
   }
   
   printf("%d",sec_max);

    return 0;
}
