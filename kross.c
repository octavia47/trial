#include <stdio.h>

int main() {
    int sum = 0;
    printf("Numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
        sum += i; 
    }

    printf("\n\nSum of numbers from 1 to 100: %d\n", sum);
    return 0;
}
