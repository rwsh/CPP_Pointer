#include <iostream>
#include <string>

using namespace std;

const int N = 2;

double *two(double x) // ���������� ���������
{
    double *res = new double[N]; // �������� ������
    res[0] = x * x; // ���������� ��� ������
    res[1] = x * x * x;
    return res; // ������� ���������
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    double *A = two(3);
    cout << A[0] << "\t" << A[1];
    delete[] A; // �� �������� ���������� ������
}