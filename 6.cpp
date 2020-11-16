#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n, x, * mass;
    cout << "Введите количество чисел, которые будут в массиве:" << "\n";
    cin >> n;
    mass = new int[n]; //задание массива с количеством чисел введенных пользователем
    cout << "Массив:" << "\n";
    for (int i = 0; i < n; i++) //цикл для вывода массива
    {
        cin >> mass[i];
    }
    x = 0;

    for (int i = 1; i < n - 1; i++) //цикл для поиска пар
    {
        if (mass[i + 1] > mass[i] && mass[i - 1] < mass[i])
            x++;
    }
    cout << "Количество пар: " << x << endl;
    system("pause");
}