#include <stdio.h>

int main() {
    int num1, num2;
    printf_s("Enter 2 integer values : ");
    scanf_s("%d%d", &num1, &num2);
    printf_s("The sum of the values entered is %d\n", num1 + num2);
    return 0;
}