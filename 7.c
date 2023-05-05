// задача 7
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nolik = 0;
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        nolik += (num == 0) ? 1 : 0;
        positive += (num > 0) ? 1 : 0;
        negative += (num < 0) ? 1 : 0;
    }

    printf("%d %d %d\n", nolik, positive, negative);

    return 0;
}
