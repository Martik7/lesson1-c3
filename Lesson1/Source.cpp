#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

void func(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
}

int kub(int x)
{
	return x * x*x;
}

int summa(int a, int b)
	{
		return(a + b);
	}
int proizv(int a, int b)
	{
		return(a*b);
	}
int bolsh(int a, int b, int c)
{
	return (a > b && a>c?a:b>a&&b>c?b:c);
}



int main()
{
	/*
	38.	***Создайте двухмерный массив. 
	Заполните его случайными числами и покажите на экран. 
	Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз). 
	Выполнить сдвиг массива и показать на экран полученный результат. 
	Сдвиг циклический. 
	*/

	/*const int n = 2;
	const int m = 5;
	int k = 2;
	int a[n][m] = { {1,2,3,4,5},{6,7,8,9,10} };
	int b[n][m];
	int index = 0;

	for (size_t i = 0; i < n; i++)
	{
		index = 0;
		for (size_t j = 0; j < m; j++)
		{
			if (j + k < m)
				b[i][j+k] = a[i][j];
			else
				b[i][index++] = a[i][j];
		}
	}
	cout << "final array\n";
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << left << setw(4) << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;*/

	/*
	2.Напишите функцию, которая принимает два целых числа, и возвращает их сумму.
	3.Напишите функцию, которая принимает два целых числа, и возвращает их произведение.
	*/

	//int a = kub(5);
	//cout << a << endl; //Можно использовать и так, и так.
	//cout << kub(5) << endl; //Разницы нет.

	/*int a = 4, b = 3;
	cout << summa(a,b) << endl;
	cout << proizv(a, b) << endl;*/

	/*
	Напишите функцию, которая принимает два целых числа, и определяет большее из них.
	*/
	
	/*int a = 1 + rand() % 100, b = 1 + rand() % 100, c = 1 + rand() % 100;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << bolsh(a,b,c) << endl;*/




	system("pause");
	return 0;

}