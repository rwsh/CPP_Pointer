#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    int *p; // объявить указатель на int
    int a = 12; // создать переменную
    p = &a; // присвоить указателю адрес переменной a
    *p = 21; // обратиться к адресу на который указатель
    cout << "Значение переменной a = " << a << endl;
    cout << "Адрес переменной a = " << p << endl;
}