// задача 4 
#include <stdio.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);

    printf("Двоичное представление числа %d: ", num);

    // тут двоичный код храним
    int binary[32];
    int i = 0;

    // переводим число (без минуса) в двоичный код
    int positive_num = num < 0 ? -num : num; // если число отрицательное, переводим без минуса
    while (positive_num > 0 ? binary[i++] = positive_num % 2, positive_num /= 2 : 0);

    // если число отрицательное, добавляем перед двоичным кодом знак минуса
    if (num < 0) {
        printf("-");
    }

    // выводим двоичный код на экран
    for (int j = i - 1; j >= 0 ? printf("%d", binary[j--]) : 0;);

    return 0;
}
