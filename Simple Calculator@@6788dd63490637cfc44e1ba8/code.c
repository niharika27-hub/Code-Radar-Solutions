// Your code here...
#include <stdio.h>
 int main(){
    int num1,num2;
    char op;
    scanf ("%d %d",&num1 ,&num2);
    scanf(" %c",&op);
    switch(op){
        case '+': printf("%d",num1 + num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        if (num2!=0){
        printf("%f",num1/num2);
        }
        break;
       
    }
   
    return 0;
 }// Your code here...