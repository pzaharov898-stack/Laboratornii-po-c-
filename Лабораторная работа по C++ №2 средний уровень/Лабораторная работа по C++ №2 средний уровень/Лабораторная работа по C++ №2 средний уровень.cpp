#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        
    cout << "Дання программа вычисляет периметр и площадь квадрата" << endl;                     //заголовок
    cout << "Введите сторону " << endl;
    double storona = 0.0;                                                                        //все вычисления производим через double потому что он может считать числа с дробной частью
    cin >> storona;
    
    cout << "Введите длинну" << endl;
    double dlinna = 0.0;
    cin >> dlinna;

    if (storona > 0 && dlinna > 0) {

        cout << "Площадь прямоугольника = " << std::fixed << std::setprecision(16) << storona * dlinna << endl;
        cout << "Периметр прямоугольника = " << std::fixed << std::setprecision(16) << 2 * (storona + dlinna) << endl;

    }
    else {
        cout << "Введите корректные данные,сторона не может отрицательной";                  //если число отрицательное то выводим ошибку

    }

    return 0;
}