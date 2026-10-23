#include <stdio.h>
#include <math.h>

char z_1(char c);
double z_2 (double x, double y, char c);

int main() {
    //Задание 1
    printf("---Задание 1 ---\n");
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    printf("%c",z_1(c));


    //задание 2
    double x,y;
    printf("---Задание 2: калькулятор ---\n");
    printf("введите выражение: \n");
    scanf("%lf%c%lf", &x, &c, &y);

    if (z_2(x,y,c)==0) printf("Ошибка");
    else printf("= %g\n", z_2(x,y,c));
}



char z_1(char c){
    if (c >= '0' && c <= '9')   
    {
        printf("Это цифра\n");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Это буква\n");
    }
    else
    {
        printf("Неизвестный символ\n");
    }
}

double z_2 (double x, double y, char c){
    switch (c){
    double res;
        case '+':
            res = x+y;
            break;
        case '-':
        res = x-y;
            break;
        case '*':
        res = x*y;
            break;
        case '/':
            if (y == 0) {
                res=0;
                return 0;
            }
            res = x / y;
            break;
        case '^':
            res = pow(x, y); 
            break;
        default:
            res=0;
            return 0;
    return res;
    }}
