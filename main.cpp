#include <iostream>
#include <ctime> // без этой библиотеки time не будет работать

using namespace std;

/* Генератор случайных чисел */

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL)); //позволяет "rand" генерировать разные числы

	int const SIZE = 10; //длина массива

	int arr[SIZE]; //та самая переменная 

	for (int i = 0; i < SIZE; i++) // цикл который будет генерировать разные числа
	{
		arr[i] = rand() % 100; // генерируем от 0 до 100 разные числа
		// также можно написать rand() % 100 + 5; будет генерировать от 5 до 105
	}
	
	for (int i = 0; i < SIZE; i++) // цикл который будет выводить числа 
	{
		cout << arr[i] << endl;
	}
}