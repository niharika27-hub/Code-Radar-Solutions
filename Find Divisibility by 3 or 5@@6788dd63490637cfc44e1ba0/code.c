// Your code here...
#include <stdio.h>

int num1;

  
int main() {
    scanf("%d",&num1);
   
    if(num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by Both");
    }
    else if (num % 3 != 0 && num % 5 == 0) {
        printf("Divisible by 5");
    }
    else if (num % 5 != 0 && num % 3 == 0) {
        printf("Divisible by 3");
    }
    
    
    else {
        printf("Not Divisible");
    }
    
    return 0;
    }