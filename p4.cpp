#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int N; // ����������, � �� ���������
    cout << "������� ���������� ���� > ";
    cin >> N; // ����������� � ������������ ������ �������
    char *p = new char[N]; // �������� ������ �����������!
    for (int i = 0; i < N; i++)
    {
        p[i] = 'A'; // ��������� ������
    }
    delete[] p; // ����������� ������
}