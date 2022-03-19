#include <iostream>
using namespace std;
#include <random>

int main()
{
	int results[10]{ 0 };

	std::random_device rd;
	std::uniform_int_distribution<int> distr(20, 35);
	for (size_t i = 0; i < std::size(results); i++) {
		results[i] = distr(rd);
	}

	int min{ results[0] };
	int max{ results[0] };

	for (int i = 0; i < std::size(results); i++) {
		if (max < results[i]) {
			max = results[i];
		}
	}
	for (int i = 0; i < std::size(results); i++) {
		if (min > results[i]) {
			min = results[i];
		}
	}


	cout << max << endl;
	cout << min << endl;

	system("pause");
	return 0;
}