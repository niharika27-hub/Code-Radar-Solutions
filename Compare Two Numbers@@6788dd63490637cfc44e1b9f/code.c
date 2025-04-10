// Your code here...
// Your code here...
#include <stdio.h>

int num1;
int num2;
  
int main() {
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1 == num2){
        printf("Equal");
    }
    else if(num1 > num2){
        printf("First");
    }
    else {
        printf("Second");
    }
    
    return 0;
    }