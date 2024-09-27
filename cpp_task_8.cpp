// 1. Написать функцию SetCursor, которая устанавливает координаты и цвет текста.Функция принимает три аргумента : координата по X, координата по Y, номер цвета.

/*
#include <iostream>
#include <windows.h>
using namespace std;

void print_message(int x, int y, int color, string message) {
    HANDLE h = GetStdHandle(-11);
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, color);
    cout << message << "\n";
}

int main() {
    setlocale(0, "");
    print_message(45, 2, 12, "Клубника");
}
*/

// 4. Написать функцию, которая возвращает куб переданного числа.

/*
#include <iostream>
using namespace std;

void cube() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    int cube = number * number * number;
    cout << "Число в куб: " << cube;
}

int main() {
    setlocale(0, "");
    cube();
}
*/

// 5. Написать функцию, которая проверяет, является ли переданное ей число простым.Число называется простым, если оно делится без остатка только на себя и на единицу.

/*
#include <iostream>
using namespace std;

void check() {
    int number;
    cout << "Напишите число является ли простым: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "true";
    else
        cout << "false";
}

int main() {
    setlocale(0, "");
    check();
}
*/

// 6. Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.

/*
#include <iostream>
using namespace std;

void diapazon() {
    int start;
    cout << "Напишите первое число: ";
    cin >> start;

    int end;
    cout << "Напишите второе число: ";
    cin >> end;

    int sum = 0;

    if (start < end) {
        cout << "Числа в диапазоне: ";
        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }
    }
    else if (start > end) {
        cout << "Числа в диапазоне: ";
        for (int i = start; i >= end; i--) {
            cout << i << " ";
            sum += i;
        }
    }
    else {
        cout << "Оба числа равны: " << start << "\n";
    }
    cout << "\nОбщая сумма диапазонов между ними: " << sum;
}

int main() {
    setlocale(0, "");
    diapazon();
}
*/

// 8. Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

/*
#include <iostream>
using namespace std;

void middle() {
    const int SIZE = 5;
    int massive[SIZE] = { 1, 5, 6, 7, 2 };
    int elements = 0;
    int sum = 0;
    double middle = 0.0;

    for (int i = 0; i < SIZE; i++) {
        int result = massive[i];
        if (massive[i] > 0) {
            elements++;
            sum += massive[i];
        }
        cout << result << " ";
    }

    if (elements > 0) {
        middle = sum * 1.0 / elements;
    }
    else {
        middle = 0.0;
    }
    cout << "\nСреднее арифметическое положительных чисел: " << middle;
}

int main() {
    setlocale(0, "");
    middle();
}
*/