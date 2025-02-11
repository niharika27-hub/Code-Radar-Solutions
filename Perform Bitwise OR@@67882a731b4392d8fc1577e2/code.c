#include <stdio.h>

int main() {
    int num1 = 5;   // 0101 in binary
    int num2 = 3;   // 0011 in binary

    int result = num1 | num2;  // Bitwise OR

    printf("Result of %d | %d = %d\n", num1, num2, result);
    return 0;
}
