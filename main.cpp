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

    cout << "��� ��������� ��� �������� �� �������� ������� � ��������. \n";
    cout << "������� ����������� � �������� ������� : ";
    cin >> celsiy;
    kelvin = celsiy + 273.15;
    cout << "����������� � ���������: " << kelvin << endl;

    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
