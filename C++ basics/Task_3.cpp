#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Rus");
    system("color 3F");
    int from_month, to_month, max, min;
    
    int profit[12];
    cout << "������� ��������������� ������� �� ������ �����: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << "����� " << i + 1 << ": ";
        cin >> profit[i];
    }
    cout << "\n������� ����� - ������ ��������� � ����: ";
    cin >> from_month;
    cout << "������� ����� - ����� ��������� � ����: ";
    cin >> to_month;
    
    for (int i = from_month; i < to_month+1; i++) {
        cout << "����� " << i << " " << profit[i-1] << "\n";

    }
    max = min = from_month - 1;
    for (int i = from_month; i < to_month; i++)
    {
        if (profit[max] < profit[i])
            max = i;

        if (profit[min] > profit[i])
            min = i;
    }

    cout << "\n������������ ������� � �������� ��������� ����� �  " << max + 1 << " ������" << "\n\n";
    cout << "\n����������� ������� � �������� ��������� ����� �  " << min + 1 << " ������" << "\n\n";

    system("pause");
    return 0;
}