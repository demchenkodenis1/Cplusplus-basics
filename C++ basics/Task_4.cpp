#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const char months[][12] = { "Январь","Февраль","Март","Апрель","Май  ","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };

float cross_rate(int month) {

	cout << "Введите курс доллара по отношению к евро за каждый месяц последовательно ";
	float rate[12];
	float rate_result = 0;

	for (int i = 0; i < 12; i++) {
		cout << "\nКурс доллара по отношению к евро в " << months[i] << " составил: ";
		cin >> rate[i];
		if ((i + 1) == month) {
			rate_result = rate[i];
		}
	}
	return rate_result;
}

int percent(int month) {
	cout << "Введите сумму начисленных процентов за каждый месяц последовательно ";
	int perc[12];
	int perc_result = 0;

	for (int i = 0; i < 12; i++) {
		cout << "\nСумма начисленных процентов в " << months[i] << " составила: ";
		cin >> perc[i];
		if ((i + 1) == month) {
			perc_result = perc[i];
		}
	}
	return perc_result;
}

int task(int month) {
	int cash;
	cash = cross_rate(month) * percent(month);
	if (cash > 500) {
		cash = cash/2;
	}
	else {
		cout << "Сумма начисленных процентов меньше 500 долларов. Снятие наличных невозможно";
		cash = 0;
	}
	cout << "\nСумма наличных для снятия " << cash;
	return cash;
}

int main() {
	setlocale(LC_ALL, "Rus");
	system("color 3F");
	
	task(2);

	system("pause");
	return 0;
}