#include <iostream>
#include <ctime> // ��� ���� ���������� time �� ����� ��������

using namespace std;

/* ��������� ��������� ����� */

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL)); //��������� "rand" ������������ ������ �����

	int const SIZE = 10; //����� �������

	int arr[SIZE]; //�� ����� ���������� 

	for (int i = 0; i < SIZE; i++) // ���� ������� ����� ������������ ������ �����
	{
		arr[i] = rand() % 100; // ���������� �� 0 �� 100 ������ �����
		// ����� ����� �������� rand() % 100 + 5; ����� ������������ �� 5 �� 105
	}
	
	for (int i = 0; i < SIZE; i++) // ���� ������� ����� �������� ����� 
	{
		cout << arr[i] << endl;
	}
}