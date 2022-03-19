#include <iostream>
using namespace std;
#include <random>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");

	int numbers[10];
	int x;
	int y;
	cout << "¬ведите число начало диапазона: ";
	cin >> x;
	cout << "¬ведите число конец диапазона: ";
	cin >> y;
	std::random_device rd;
	std::uniform_int_distribution<int> distr(x, y);

	for (size_t i = 0; i < std::size(numbers); i++) {
		numbers[i] = distr(rd);
		cout << numbers[i] << ", ";

	}

	int numb{ 0 };
	int sum_of_numbers{ 0 };
	cout << "\n¬ведите любое число в пределах диапазона: ";
	cin >> numb;

	for (int i = 0; i < std::size(numbers); i++) {
		if (numbers[i] < numb) {
			sum_of_numbers += numbers[i];
		}
	}

	cout << "—умма элементов массива, значени€ которых меньше указанного: " << sum_of_numbers << endl;

	system("pause");
	return 0;
}