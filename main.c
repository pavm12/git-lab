#include <stdio.h>

int main(void) {
    int a, b;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    printf("Вы ввели: %d и %d\n", a, b);
    printf("Сумма: %d\n", a - b);
    return 0;
}
