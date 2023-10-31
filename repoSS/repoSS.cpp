#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 10;
	int arr[size];
	int temp;
	cout << sizeof(arr);

	cout << "Введите значение ячеек в массиве: \n";
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " => ";
		cin >> arr[i];
	}

	for (int i = 0; i < sizeof(arr); i++)
	{
		for (int j = i + 1; i < sizeof(arr); i++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			else
				continue;
		}
	}

	for (int i : arr)
	{
		cout << i << "\t";
	}
}