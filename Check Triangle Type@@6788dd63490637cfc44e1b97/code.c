// Your code here...

#include <stdio.h>
int main() {
    int side1;
    scanf("%d",&side1);
    int side2;
    scanf("%d",&side2);
    int side3;
    scanf("%d",&side3);
    if(side1 == side2 == side3){
        printf("Equilateral");
    }
    else if(side1 == side2 || side2 == side3  || side3==side2){
        printf("Isosceles");
    }
    else {
        printf("Scalene");
    }
    
    return 0;
}