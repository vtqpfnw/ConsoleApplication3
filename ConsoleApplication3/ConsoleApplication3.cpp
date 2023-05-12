#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 1;
    int b = 1;
    double area, perimeter;
    int radius, length, width;
    cout << "Выход - 0,эта програма вычисляет площадь и периметр фигур." << endl;
    while (true) {
        cout << "Выберите фигуру: 1 - Круг,2 - Прямоугольник" << endl;
        cin >> a;
        switch (a) {

        case 0:
            return -1;
        }
        switch (b) {
        case 0:
            return -1;

        }
        if (a <= 2) {

            switch (a) {
            case (1): {

                cout << "Введите радиус круга: ";
                cin >> radius;
                switch (radius) {
                case 0:
                    return -1;
                }
                cout << "Введите номер действия: 1- площадь круга,2- периметр круга." << endl;
                cin >> b;
                if (b == 1) {
                    area = 3.14 * radius * radius;
                    cout << "Площадь круга= " << area << endl;

                }
                if (b == 2) {
                    perimeter = 2 * 3.14 * radius;
                    cout << "Периметр круга= " << perimeter << endl;
                }
                else {
                    cout << "ошибка" << endl;
                }
            }
            case (2): {
                cout << "Введите номер действия: 1- площадь,2- периметр.";
                cin >> b;
                cout << "Введите длину, а затем ширину." << endl;
                cin >> length >> width;
                switch (width) {
                case 0:
                    return -1;
                }
                switch (length) {
                case 0:
                    return -1;
                }
                if (b == 1) {
                    double area = length * width;
                    cout << "площадь прямоугольника=" << area << endl;
                }
                if (b == 2) {
                    double perimeter = 2 * (length + width);
                    cout << "периметр прямоугольника=" << perimeter << endl;
                }
                else {
                    cout << "ошибка" << endl;
                }
            }
            }
        }
        else {
            cout << "Выберите фигуру: 1 - Круг,2 - Прямоугольник" << endl;
            cin >> a;
        }

    }

    return 0;
}