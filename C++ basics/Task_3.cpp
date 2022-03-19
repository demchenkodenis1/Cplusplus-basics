#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "Rus");
    system("color 3F");
    int from_month, to_month, max, min;
    
    int profit[12];
    cout << "¬ведите последовательно прибыль за каждый мес€ц: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << "ћес€ц " << i + 1 << ": ";
        cin >> profit[i];
    }
    cout << "\n¬ведите мес€ц - начало диапазона в году: ";
    cin >> from_month;
    cout << "¬ведите мес€ц - конец диапазона в году: ";
    cin >> to_month;
    
    for (int i = from_month; i < to_month+1; i++) {
        cout << "ћес€ц " << i << " " << profit[i-1] << "\n";

    }
    max = min = from_month - 1;
    for (int i = from_month; i < to_month; i++)
    {
        if (profit[max] < profit[i])
            max = i;

        if (profit[min] > profit[i])
            min = i;
    }

    cout << "\nћаксимальна€ прибыль в выбраном диапазоне будет в  " << max + 1 << " мес€це" << "\n\n";
    cout << "\nћинимальна€ прибыль в выбраном диапазоне будет в  " << min + 1 << " мес€це" << "\n\n";

    system("pause");
    return 0;
}