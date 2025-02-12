// Your code here...
#include <stdio.h>
int main(){
    char c;
    if(c>= "A"&& c<="Z"){
        printf("Uppercase");
    }
    else if(c>= "a" && c<="z"){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet.");
    }
    return 0;
}