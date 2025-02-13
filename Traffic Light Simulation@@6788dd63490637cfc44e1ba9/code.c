// Your code here...
#include <stdio.h>
 int main(){
    char grade ;
    
    scanf ("%c ",&grade);
   if(grade=='R'){
    printf("Stop");
   }
   else if(grade=='G'){
    printf("Go");
   }
   else if(grade=='Y'){
    printf("Slow Down");
   }
   
   else{
    printf("Invalid input");
   }
   
   
    return 0;
 }