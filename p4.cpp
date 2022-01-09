#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    int N; // переменная, а не константа
    cout << "Введите количество байт > ";
    cin >> N; // запрашиваем у пользователя размер массива
    char *p = new char[N]; // выделяем память динамически!
    for (int i = 0; i < N; i++)
    {
        p[i] = 'A'; // заполняем память
    }
    delete[] p; // освобождаем память
}