#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int * mass; //объявление переменных
    int n = 20;

        mass = new int[n];
        cout << "Массив до операции:" << endl;

        for (int i = 0; i < n; i++) //цикл для задания рандомных чисел в массиве
        {
            mass[i] = rand() % 100 - 50;
        }

        for (int i = 0; i < n; i++) //цикл для вывода чисел массива
        {
            cout << mass[i] << endl;
        }

        for (int i = 0; i < n; i++) //цикл для преобразования отрицательных элементов массива
        {
            if (mass[i] < 0)
            {
                mass[i] = 0;
            }
        }
        cout << "Массив после операции:" << endl;

        for (int i = 0; i < n; i++) //цикл для вывода чисел массива
        {
            cout << mass[i] << endl;
        }
    system("pause");
}