#include <iostream>
#include <string>

using namespace std;

void swap(int *a, int *b) // ��������� - ���������
{
    int c = *a; // ��������� ��������
    *a = *b; // ������ ��������
    *b = c; 
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 
    int x = 3, y = 5; // ������� ��� ����������
    swap(&x, &y); // �������� ������ ����������
    cout << "x = " << x << "\ty = " << y;
}