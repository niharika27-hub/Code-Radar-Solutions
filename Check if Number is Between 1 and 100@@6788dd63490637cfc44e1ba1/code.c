// Your code here...
#include <stdio.h>

int num1;
  
int main() {
    scanf("%d",&num1);
    if(num1<=100 && num1>=1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    
    return 0;
    }