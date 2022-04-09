#include <iostream>
using namespace std;
long average_value(int n, int array[])
// Функция для массивов с элементами типа int.
{
	int value;
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += array[i];
	value = sum / n;
	cout << "\nFor (int) : ";
	return long(value);
}
long average_value(int n, long array[])
// Функция для массивов с элементами типа long.
{
	long value;
	long sum = 0;
	for (int i = 1; i < n; i++)
		sum += array[i];
	value = sum / n;
	cout << "\nFor (long) :";
	return value;
}
double average_value(int n, float array[])
// Функция для массивов с элементами типа float.
{
	float value = 0;
	float sum = 0;
	for (int i = 1; i < n; i++)
		sum += array[i];
	value = sum / n;
	cout << "\nFor (float) : ";
	return double(value);
}
double average_value(int n, double array[])
// Функция для массивов с элементами типа double.
{
	double value = 0;
	double sum = 0;
	for (int i = 1; i < n; i++)
		sum += array[i];
	value = sum / n;
	cout << "\nFor (double) : ";
	return value;
}
int main()
{
	int x[] = { 10, 20, 30, 40, 50, 60 };
	long f[] = { 12L, 44L, 5L, 22L, 37L, 30L };
	float y[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };
	double z[] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06 };
	cout << "average_value(6,x) = " << average_value(6, x);
	cout << "average_value(6,f) = " << average_value(6, f);
	cout << "average_value(6,y) = " << average_value(6, y);
	cout << "average_value(6,z) = " << average_value(6, z);
	return 0;
}