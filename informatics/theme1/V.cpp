#include <iostream>
#include <cmath>
using namespace std;

/*
Напишите программу, которая считывает два целых числа a и b и выводит наибольшее значение из них. Числа — целые от 1 до 1000.

При решении задачи можно пользоваться только целочисленными арифметическими операциями +, -, *, //, %, =. 
Нельзя пользоваться нелинейными конструкциями: ветвлениями, циклами, функциями вычисления модуля, извлечения квадратного корня.
*/

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a > b) * a + (a <= b) * b;
}