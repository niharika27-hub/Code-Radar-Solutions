#include <stdio.h>

int num1,num2;
int main() {
    scanf("%d",&num1);
    scanf("%d",&num2);
    if((num1<=0 && num2>=0) || (num1>=0 && num2<=0)){
        printf("True");
    }
else{
    printf("False");
}
    printf("%s", welcome());
    return 0;
}