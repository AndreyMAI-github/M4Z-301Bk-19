#include <iostream>
#include "interFunc.h"
using namespace std;

int main()
{
    cout << "Исходный массив: ";
    int n = 4;
    float a1[n] = {0, 2, 4, 6};
    for (int i = 0; i < n; ++i) { cout << a1[i] << ' '; }
    cout << '\n';
    cout << "Размер нового массива: ";
    int m = 3;
    cout << m << '\n';
    float b1[m] = {};
    cout << "Результат интерполяции: ";
    interFunc(a1, b1, n, m);
    cout << '\n';

    cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i) { cout << a1[i] << ' '; }
    cout << '\n';
    cout << "Размер нового массива: ";
    m = 5;
    cout << m << '\n';
    float b2[m] = {};
    cout << "Результат интерполяции: ";
    interFunc(a1, b2, n, m);
    cout << '\n';

    n = 5;
    float a2[n] = {1, 5, 9, 13, 17};
    cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i) { cout << a2[i] << ' '; }
    cout << '\n';
    cout << "Размер нового массива: ";
    m = 9;
    cout << m << '\n';
    float b3[m] = {};
    cout << "Результат интерполяции: ";
    interFunc(a2, b3, n, m);
    cout << '\n';

    cout << "Исходный массив: ";
    n = 6;
    float a3[n] = {-18, -12, -6, 6, 12, 18};
    for (int i = 0; i < n; ++i) { cout << a3[i] << ' '; }
    cout << '\n';
    cout << "Размер нового массива: ";
    m = 5;
    cout << m << '\n';
    float b4[m] = {};
    cout << "Результат интерполяции: ";
    interFunc(a3, b4, n, m);
    cout << '\n';

    return 0;
}
