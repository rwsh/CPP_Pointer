#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // ????????????? ????????? 

    const int N = 10;
    int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // ??????? ? ?????????????? ??????
    int *p; // ????????? ?????????

    p = A; // ??????????? ????????? ??????, ??? ???? ?????, ??? p = &A[0];

    for (int i = 0; i < N; i++)
    {
        cout << p[i] << "\t"; // ????? ???????, ??? p ? ??? ??????:)
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << *p << "\t"; // ?? ????? ?????????? ? ???? ????????, ?? ???? ????????? p
        p = p + 1; // ???????? ????????? ?? ????????? ???????
    }
}