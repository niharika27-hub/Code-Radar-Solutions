// Your code here...#include <stdio.h>
int main() {
    int cost;
    scanf("%d",&cost);
    int sell;
    scanf("%d",&sell);
    if(cost>sell){
        printf("Loss");
    }
    else if(cost<sell){
        printf("Profit");
    }
    else {
        printf("No Profit No Loss");
    }
    
    return 0;
}