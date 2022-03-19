#include<iostream>
#include <windows.h>
#include <clocale>
using namespace std;
#include <random>
#include <string>
int main()
{
    setlocale(LC_ALL, "Russian");
   
    int numbers[10];
    
    std::random_device rd;
    std::uniform_int_distribution<int> distr(-5, 10);

    for (size_t i = 0; i < std::size(numbers); i++) {
        numbers[i] = distr(rd);
        cout << numbers[i] << ", ";
    }

    float sum_of_numbers;
    sum_of_numbers = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] < 0) {
            sum_of_numbers += numbers[i];
       }
    }

    if (sum_of_numbers < 0)
    {
        cout << "\nСумма:   ";
        cout << sum_of_numbers << endl;
    }
    else
        cout << "   Нет отрицательных элементов\n";
    
    int min = 0, max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > max)
            max = i;
        if (numbers[i] < min)
            min = i;
    }
    if (max < min)
    {
        swap(max, min);
    }
    int multiply_of_numbers;
    multiply_of_numbers = 1;
    for (int i = min + 1; i < max; i++) {
        multiply_of_numbers *= numbers[i];
    }
        
    cout << "Произведение:    " << multiply_of_numbers << endl;
    
    system("pause");
    return 0;
}