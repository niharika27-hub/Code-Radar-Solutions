#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int num1,num2;

int main() {
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1!>0&& num2!>0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}