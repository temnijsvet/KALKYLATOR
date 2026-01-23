#include <iostream>
#include <fstream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2, result;
    char op;
    std::ofstream historyFile("history.txt", std::ios::app);

    if (!historyFile.is_open()) {
        std::cerr << "Не удалось открыть файл для записи истории.\n";
        return 1;
    }

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

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
            std::cout << "Ошибка: деление на ноль невозможно.\n";
            historyFile.close();
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        std::cout << "Неверная операция.\n";
        historyFile.close();
        return 1;
    }

    std::cout << "Результат: " << result << "\n";
    historyFile << num1 << " " << op << " " << num2 << " = " << result << "\n";

    historyFile.close();
    return 0;
}