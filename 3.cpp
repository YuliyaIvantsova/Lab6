#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int* mass; //объявление переменных
    int n = 5;
    int sum = 0;

    mass = new int[n];
    cout << "Массив:" << endl;

    for (int i = 0; i < n; i++) //цикл для задания рандомных чисел в массиве
    {
        mass[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++) //цикл для вывода чисел массива
    {
        cout << mass[i] << endl;
    }

    for (int i = 0; i < n; i++) //цикл для подсчёта суммы чисел массива
    {
        sum += mass[i];
    }
    cout << "Сумма чисел массива: " << sum << endl;
    system("pause");
}