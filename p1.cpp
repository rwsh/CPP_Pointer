#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int *p; // �������� ��������� �� int
    int a = 12; // ������� ����������
    p = &a; // ��������� ��������� ����� ���������� a
    *p = 21; // ���������� � ������ �� ������� ���������
    cout << "�������� ���������� a = " << a << endl;
    cout << "����� ���������� a = " << p << endl;
}