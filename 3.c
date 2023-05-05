// задача 3
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[15];
    int length, upper, lower, digit, other, i;

    printf("Введите пароль: ");
    scanf("%s", password);

    // Проверяем длину пароля
    length = strlen(password);
    if (length < 8 || length > 14) {
        printf("Пароль должен быть не короче 8 символов и не длиннее 14\n");
        return 0;
    }

    // Проверяем наличие различных классов символов
    upper = lower = digit = other = 0;
    for (i = 0; i < length; i++) {
        if (isupper(password[i])) {
            upper = 1;
        } else if (islower(password[i])) {
            lower = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else if (password[i] >= 33 && password[i] <= 126) {
            other = 1;
        } else {
            printf("Некорректные символы в пароле\n");
            return 0;
        }
    }
    if (upper + lower + digit + other < 3) {
        printf("Пароль должен содержать  большие буквы, маленькие буквы, цифры\n");
        return 0;
    }

    // Если пароль прошел все проверки, выводим
    printf("пароль принят\n");
    return 0;
}
