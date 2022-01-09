#include <iostream>
#include <string>

using namespace std;

const int N = 2;

double *two(double x) // возвращаем указатель
{
    double *res = new double[N]; // выделяем память
    res[0] = x * x; // используем как массив
    res[1] = x * x * x;
    return res; // вернуть указатель
}

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    double *A = two(3);
    cout << A[0] << "\t" << A[1];
    delete[] A; // не забываем освободить память
}