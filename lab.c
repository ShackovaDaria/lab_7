#include <stdio.h>
#include <math.h>

char z_1(char c);
double z_2(double x, double y, char c);

int main() {
    printf("---Задание 1 ---\n");
    char c;
    printf("Введите символ: ");
    scanf(" %c", &c);

    char res = z_1(c);
    if (res == 'd')
        printf("Это цифра\n");
    else if (res == 'l')
        printf("Это буква\n");
    else
        printf("Неизвестный символ\n");

    printf("---Задание 2: калькулятор ---\n");
    printf("Введите выражение (например, 2 + 3): ");
    double x, y;
    char op;
    if (scanf("%lf %c %lf", &x, &op, &y) != 3) {
        printf("Ошибка ввода\n");
        return 1;
    }

    double result = z_2(x, y, op);
    if (result != result)
        printf("Ошибка: недопустимая операция или деление на ноль\n");
    else
        printf("= %g\n", result);

    return 0;
}

char z_1(char c) {
    if (c >= '0' && c <= '9')
        return 'd';
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 'l';
    return 'u';
}

double z_2(double x, double y, char c) {
    double res;
    switch (c) {
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            if (y == 0)
                return NAN;
            res = x / y;
            break;
        case '^':
            res = pow(x, y);
            break;
        default:
            return NAN;
    }
    return res;
}
