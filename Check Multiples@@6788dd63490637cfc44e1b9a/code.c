// Your code here...
#include <stdio.h>

int n1,n2;
  
int main() {
    scanf("%d %d",&n1,&n2);
    if(n1%n2==0 || n2%n1==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
    }