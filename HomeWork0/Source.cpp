#include <iostream>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 10;
	int min = 0;
	int max = 0;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		cout << "max: " << max;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if ((!(arr[i] % 2) && (min == -1 || arr[min] > arr[i])))min = i;
	}
	if (min == 0)
		cout << arr[0];
	else
		cout << "min: " << arr[min];
	cout << endl;

	int number_of_shifts;
	cout << "¬ведите количество сдвигов:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];// помещаем значение следующего элемента.
		}
		arr[n - 1] = buffer;
	}
	//вывод массива.
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}