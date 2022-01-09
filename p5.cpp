#include <iostream>
#include <string>

using namespace std;

void swap(int *a, int *b) // аргументы - указатели
{
    int c = *a; // сохраняем значение
    *a = *b; // меняем значения
    *b = c; 
}

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 
    int x = 3, y = 5; // создаем две переменные
    swap(&x, &y); // передаем адреса переменных
    cout << "x = " << x << "\ty = " << y;
}