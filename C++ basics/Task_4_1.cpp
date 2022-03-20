#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const char months[][12] = { "������","�������","����","������","���  ","����","����","������","��������","�������","������","�������" };
const int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


float cross_rate(int month) {

	cout << "������� ���� ������� �� ��������� � ���� �� ������ ����� ��������������� ";
	float rate[12];
	float rate_result = 0;

	for (int i = 0; i < 12; i++) {
		cout << "\n���� ������� �� ��������� � ���� � " << months[i] << " ��������: ";
		cin >> rate[i];
		if ((i + 1) == month) {
			rate_result = rate[i];
		}
	}
	return rate_result;
}

float percent(int month) {
	cout << "������� �������� ����� �������� ������������ �� ������ ����� ��������������� ";
	float perc[12];
	float perc_result = 0;

	for (int i = 0; i < 12; i++) {
		cout << "\n�������� ����� �������� � " << months[i] << " ���������: ";
		cin >> perc[i];
		if ((i + 1) == month) {
			perc_result = perc[i];
		}
	}
	return perc_result;
}

int task(int deposit, int month) {
	int cash;
	cash = deposit * cross_rate(month) * percent(month) * days_in_month[month - 1] / 36500;
	if (cash > 500) {
		cash = cash / 2;
	}
	else {
		cout << "����� ����������� ��������� ������ 500 ��������. ������ �������� ���������� ";
		cash = 0;
	}
	cout << "\n����� �������� ��� ������ " << cash;
	return cash;
}

int main() {
	setlocale(LC_ALL, "Rus");
	system("color 3F");

	task(100000, 2);

	system("pause");
	return 0;
}