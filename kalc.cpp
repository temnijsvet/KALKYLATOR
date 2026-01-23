#include <iostream>
#include <string>
#include <fstream> // Библиотека для работы с файлами
using namespace std;



int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char op;
    ofstream MFile("history.txt"); MFile << "История:" << endl; MFile.close(); ofstream MyFile("history.txt", ios::app);// Заголовок истории
    bool valid = true;
    while (valid == true)
    {
    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите второе число: ";
    cin >> num2;

    double result;
    
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
            cout << "Результат: " << result << endl << endl;
            MyFile << num1 << op << num2 << " = " << result << endl;
        }
    }

    int a; cin >> a;
    MyFile.close();
    return 0;
}
