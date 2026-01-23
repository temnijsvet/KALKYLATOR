#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char op;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите второе число: ";
    cin >> num2;

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
            cout << "Ошибка: деление на ноль!" << endl;
            valid = false;
        }
        else {
            result = num1 / num2;
        }
        break;

    default:
        cout << "Ошибка: неизвестный оператор!" << endl;
        valid = false;
    }

    if (valid) {
        cout << "Результат: " << result << endl;
    }
    int a; cin >> a;
    return 0;
}
