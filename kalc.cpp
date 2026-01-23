#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char op;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите оператор (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double result;
    bool valid = true;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 == 0) {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
            valid = false;
        }
        else {
            result = num1 / num2;
        }
        break;

    default:
        std::cout << "Ошибка: неизвестный оператор!" << std::endl;
        valid = false;
    }

    if (valid) {
        std::cout << "Результат: " << result << std::endl;
    }

    return 0;
}