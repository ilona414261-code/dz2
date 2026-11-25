//Сделать калькулятор стоимости поездки на авто.Входные данные : расстояние в км,
// расход топлива на 100 км, стоимость 1л топлива.
//дз 14.11

#include <iostream>
using namespace std;

int main() {
    double distance, consumption, price;
cout << "Введите расстояние (км): ";
cin >> distance;

cout << "Введите расход топлива на 100 км (л): ";
cin >> consumption;

cout << "Введите стоимость 1 л топлива: ";
cin >> price;

double fuel = (distance / 100.0) * consumption;
double totalCost = fuel * price;

cout << "Потребуется топлива: " << fuel << " л" << endl;
cout << "Стоимость поездки: " << totalCost << endl;

return 0;


