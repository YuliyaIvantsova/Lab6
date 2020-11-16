#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите 10 чисел: " << endl;
    int mass[10]; //объявление массива
    for (int i = 0; i < 10; i++) // цикл для введения чисел в массив
    {
        cin >> mass[i];
    }
    for (int i = 0; i < 10; i++) //цикл для вывода чисел массива
    {
        cout << "mass[" << i << "]=" << mass[i] << "\n" << endl;
    }
    system("pause");
}