#include <iostream>
#include <windows.h>
#include <clocale>
#include <string>
using namespace std;
class Counter {
private:
	int n = 1;
public:
	void plus() {
		n++;
	}
	void minus() {
		n--;
	}
	int equals() {
		return n;
	}
	void initial_value(int n) {
		this->n = n;
	}
};
int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string a;
	char b = '0';
	Counter counter;
	while (a != "да" || a != "нет") {
		cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		cin >> a;
		if (a == "да") {
			cout << "Введите начальное значение счетчика: ";
			cin >> n;
			counter.initial_value(n);
			break;
		}
		else if (a == "нет") {
			break;
		}
		else {
			cout << "Неверный ввод!" << endl;
		}
	}
	while (b != 'х' || b != 'x') {
		cout << "Введите команду (+, -, = или x): ";
		cin >> b;
		if (b == '+') {
			counter.plus();
		}
		else if (b == '-') {
			counter.minus();
		}
		else if (b == '=') {
			cout << counter.equals() << endl;
		}
		else if (b == 'х' || b == 'x') {
			cout << "До свидания!" << endl;
			break;
		}
		else {
			cout << "Неверный ввод!" << endl;
		}
	}
return 0;
}