#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;
float celsiy;
float kelvin;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Это программа для перевода из градусов Цельсия в Кельвины. \n";
    cout << "Введите температуру в градусах Цельсия : ";
    cin >> celsiy;
    kelvin = celsiy + 273.15;
    cout << "Температура в Кельвинах: " << kelvin << endl;

    cout << "Для выхода нажмите <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
