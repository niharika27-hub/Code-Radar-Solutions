// Your code here...
#include <stdio.h>
#include <maths.h>
int main(){
   int num;
   scanf("%d",&num);
   if(num==0 || num==1){
    printf("Not Prime");
   }
   else if(num==2){
    printf("Prime");
   }
   else if(num % 2==0){
    printf("Not Prime");
   }
   for(int i=3,i<=sqrt(num);i+=2){
    if(n%i==0);
    printf("Not a prime");
   }

   else{
    printf("Prime");
   }
  
}