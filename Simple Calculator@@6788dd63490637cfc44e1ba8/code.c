// Your code here...
#include <stdio.h>
 int main(){
    int num1,num2;
    char operator;
    scanf ("%d %d",&num1 ,&num2);
    scanf("%c",&operator)
    switch(operator){
        case '+':printf("%d",num1 + num2);
        break;
        case '-':printf("%d",num1-num2);
        break;
        case '*':printf("%d",num1*num2);
        break;
        case '/':printf("%d",num1/num2);
        break;
       
    }
   
    return 0;
 }// Your code here...