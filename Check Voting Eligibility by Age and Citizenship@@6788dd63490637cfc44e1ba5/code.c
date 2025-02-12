// Your code here...
#include <stdio.h>

int age,citizen;
  
int main() {
    scanf("%d %d",&age,&citizen);
    if(age>=18 && citizen==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    
    return 0;
    }