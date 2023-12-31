﻿// Lab_03_1.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 1


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    double F;

    // Введення значень a, b, c, і x з клавіатури
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // Спосіб 1: Розгалуження в скороченій формі з використанням послідовних if-розгалужень

    if (x < 0 && b != 0)
    {
        // Обчислення F за першою формулою, коли x менше нуля і b не рівне нулю
        F = a * pow(x, 2) + b;
    }

    if (x > 0 && b == 0)
    {
        // Обчислення F за другою формулою, коли x більше нуля і b рівне нулю
        F = (x - a) / (x - c);
    }

    if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
    {
        // Обчислення F за третьою формулою в інших випадках
        F = x / c;
    }

    cout << "1) F = " << F << endl;

    // Спосіб 2: Розгалуження в повній формі з використанням вкладених if-else-розгалужень

    if (x < 0 && b != 0)
    {
        // Обчислення F за першою формулою, коли x менше нуля і b не рівне нулю
        F = a * pow(x, 2) + b;
    }
    else
    {
        if (x > 0 && b == 0)
        {
            // Обчислення F за другою формулою, коли x більше нуля і b рівне нулю
            F = (x - a) / (x - c);
        }
        else
        {
            // Обчислення F за третьою формулою в інших випадках
            F = x / c;
        }
    }

    cout << "2) F = " << F << endl;

    cin.get();
    return 0;
}
