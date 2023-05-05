//задача 2
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    printf("Пн Вт Ср Чт Пт Сб Вс\n"); // добавил еще красоты ввиде дней недели

    int day = 1;
    int count = 1;

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 7; j++) {
            printf("%s", (count >= n && day <= k) ? 
                            (day++, printf("%2d ", day - 1), "") : "   ");
            count++;
        }
        printf("\n");
        day = (day > k) ? day : day;
        if (day > k) {
            break;
        }
    }

    return 0;
}
