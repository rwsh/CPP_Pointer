#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    double *p; // ��������� ���������
    p = new double(3.14); // �������� ������ ��� double, �������������� �� � �������� p
    cout << *p; // ���������� ���������
    delete p; // ����������� ������

}