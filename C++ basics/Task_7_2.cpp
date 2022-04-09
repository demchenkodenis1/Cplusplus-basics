#include <iostream>
using namespace std;
long min_value(int n, int array[])
// Функция для массивов с элементами типа int.
{
	int value;
	int sum = 0;
	for (int i = 1; i < n; i++)
		sum = sum + array[i];
		value = sum / n;
	cout << "\nFor (int) : ";
	return long(value);
}
long min_value(int n, long array[])
// Функция для массивов с элементами типа long.
{
	long value = array[0];
	for (int i = 1; i < n; i++)
		value = value < array[i] ? value : array[i];
	cout << "\nFor (long) :";
	return value;
}
double min_value(int n, float array[])
// Функция для массивов с элементами типа float.
{
	float value = array[0];
	for (int i = 1; i < n; i++)
		value = value < array[i] ? value : array[i];
	cout << "\nFor (float) : ";
	return double(value);
}
double min_value(int n, double array[])
// Функция для массивов с элементами типа double.
{
	double value = array[0];
	for (int i = 1; i < n; i++)
		value = value < array[i] ? value : array[i];
	cout << "\nFor (double) : ";
	return value;
}
int main()
{
	int x[] = { 10, 20, 30, 40, 50, 60 };
	long f[] = { 12L, 44L, 5L, 22L, 37L, 30L };
	float y[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };
	double z[] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06 };
	cout << "min_value(6,x) = " << min_value, x);
	cout << "min_value(6,f) = " << min_value(6, f);
	cout << "min_value(6,y) = " << min_value(6, y);
	cout << "min_value(6,z) = " << min_value(6, z);
	return 0;
}