#include <iostream>
using namespace std;
class Calculator {
public:
    double num1;
    double num2;
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1) {
            this->num1 = num1;
            return true;
        }
        return false;
    }
    bool set_num2(double num2) {
        if (num2) {
            this->num2 = num2;
            return true;
        }
        return false;
    }

};
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    while (true) {
        cout << "Введите num1: ";
        cin >> a;
        while (a == 0) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num1: ";
            cin >> a;
        }
        cout << "Введите num2: ";
        cin >> b;
        while (b == 0) {
            cout << "Неверный ввод!" << endl;
            cout << "Введите num2: ";
            cin >> b;
        }
        Calculator calculator;
        calculator.set_num1(a);
        calculator.set_num2(b);
        cout << "num1 + num2 = " << calculator.add() << endl;
        cout << "num1 - num2 = " << calculator.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calculator.subtract_2_1() << endl;
        cout << "num1 * num2 = " << calculator.multiply() << endl;
        cout << "num1 / num2 = " << calculator.divide_1_2() << endl;
        cout << "num2 / num1 = " << calculator.divide_2_1() << endl;;
    }
    return 0;
}