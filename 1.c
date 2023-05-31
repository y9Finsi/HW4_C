// задание 1 
#include <stdio.h>

int main() {
    int month, year, days;
    // устанаваливаем значение переменных month и year
    printf("Введите номер месяца и год: ");
    scanf("%d %d", &month, &year);
    
    // Расчет количества дней в месяце в зависимости от введенного номера месяца и года
    days = (month == 2) ? (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28)
                        : (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;

    printf("В %d месяце года, %d дней\n", month, days);

    return 0;
}
