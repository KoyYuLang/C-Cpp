#include<stdio.h>

int main() {
    int height;
    int days;

    height=0;
    days=0;

    height = height + 55;
    
    while(height < 300) {
        height = height - 13;
        days++;
        height = height + 55;
    }
    printf("How long does it take for a snail to come out of the well?\n");
    printf("%d days.\n", days);
    
    if(days < 7) {
        printf("She arrives before the leaves fall.\n");
    } else {
        printf("She cannot arrive before the leaves fall.\n");
    }
    return 0;
}