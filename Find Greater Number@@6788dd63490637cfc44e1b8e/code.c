// Your code here...
#include <stdio.h>

int num1,num2;
  
int main() {
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("%d",&num1);
    }
    else{
        printf("%d",&num2);
    }
    
    return 0;
    }