#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const char months[][12] = { "������","�������","����","������","���  ","����","����","������","��������","�������","������","�������" };

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

int percent(int month) {
	cout << "������� ����� ����������� ��������� �� ������ ����� ��������������� ";
	int perc[12];
	int perc_result = 0;

	for (int i = 0; i < 12; i++) {
		cout << "\n����� ����������� ��������� � " << months[i] << " ���������: ";
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
		cout << "����� ����������� ��������� ������ 500 ��������. ������ �������� ����������";
		cash = 0;
	}
	cout << "\n����� �������� ��� ������ " << cash;
	return cash;
}

int main() {
	setlocale(LC_ALL, "Rus");
	system("color 3F");
	
	task(2);

	system("pause");
	return 0;
}