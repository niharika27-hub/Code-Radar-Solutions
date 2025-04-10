// Your code here...
#include <stdio.h>

int num1;
int num2;
  
int main() {
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1 % 3 == 0 && num2 % 5 == 0) {
        printf("Divisible by Both")
    }
    else if (num1 % 3 != 0 && num2 % 5 == 0) {
        printf("Divisible by 5");
    }
    else if (num1 % 5 != 0 && num2 % 3 == 0) {
        printf("Divisible by 3");
    }
    
    
    else {
        printf("Different Sign");
    }
    
    return 0;
    }