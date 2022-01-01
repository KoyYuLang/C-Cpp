#include <stdio.h>

int main() {
    int height = 170, weight = 73, cha = height - weight;

    printf_s("Height : %dcm\n", height);
    printf_s("Weight : %dkg\n", weight);
    printf_s("Height subtracts Weight equal %d\n", cha);

    return 0;
}