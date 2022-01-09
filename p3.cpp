#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    double *p; // объявляем указатель
    p = new double(3.14); // выделяем память под double, инициализируем ее и адресуем p
    cout << *p; // используем указатель
    delete p; // освобождаем память

}