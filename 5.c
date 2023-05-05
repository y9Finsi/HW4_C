// задача 5
#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    scanf("%d", &num);
    while (num != 0) {
        sum += num;
        count++;
        scanf("%d", &num);
    }
    if (count > 0) {
        printf("%.10lf", (double)sum / count);
    }
    return 0;
}
