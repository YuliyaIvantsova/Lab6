#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double * mass; //объявление переменных
    int min = 0, num = 0;
    int n = 30;
    min == mass[0];
        mass = new double[n];
        cout << "Массив:\n" << endl;
        for (int i = 0; i < n; i++) //цикл для задания рандомных чисел в массиве
        {
            mass[i] = rand() % 100 - 70;
        }
        for (int i = 0; i < n; i++) //цикл для вывода чисел массива
        {
            cout << "mass[" << i << "]=" << mass[i] << "\n" << endl;
        }
        for (int i = 0; i < n; i++) //цикл для нахождения наименьшего числа массива
        {
            if (mass[i] <= min)
            {
                min = mass[i];
                num = i;
            }
        }
        cout << "Наименьшее число массива = " << min << "\nЕго порядковый номер = " << num << endl;
    system("pause");
}