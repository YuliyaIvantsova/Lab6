#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double * mas; //объявление переменных
	int min = 0, max = 0, x = 0, y = 0, mesto;
	int n = 30;
		mas = new double[n];
		cout << "Массив до операций:\n" << endl;
		for (int i = 0; i < n; i++) //цикл для задания рандомных чисел в массиве
		{
			mas[i] = rand() % 41 - 20;
		}
		for (int i = 0; i < n; i++) //цикл для вывода чисел массива
		{
			cout << "mas[" << i << "]=" << mas[i] << "\n" << endl;
		}
		for (int i = 0; i < n; i++) //цикл для нахождения наименьшего числа массива
		{
			if (mas[i] <= min)
			{
				min = mas[i];
				x = i;
			}
		}
		for (int i = 0; i < n; i++) //цикл для нахождения наибольшего числа массива
		{
			if (mas[i] >= max)
			{
				max = mas[i];
				y = i;
			}
		}
		cout << "Наименьшее число массива = " << min << "\nЕго номер = " << x << "\nНаибольшее число массива = " << max << "\nЕго номер = " << y << endl;
		cout << "\nМассив после операции:\n" << endl;
		for (int i = 0; i < n; i++) //цикл для перестановки местами наибольшего и наименьшего чисел массива
		{
			mesto = mas[x];
			mas[x] = mas[y];
			mas[y] = mesto;
		}
		for (int i = 0; i < n; i++) //цикл для вывода чисел массива
		{
			cout << "mass[" << i << "]=" << mas[i] << "\n" << endl;
		}
	system("pause");
}