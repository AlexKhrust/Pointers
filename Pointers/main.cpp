#include <iostream>
using namespace std;

#define POINTERS_BASIC

void main()
{
    setlocale(LC_ALL, "");

/*#ifdef POINTERS_BASIC

    int a = 2;
    int* pa = &a;

    cout << a << endl; //вывод значения переменной "а" на экран
    cout << &a << endl;//взятие адреса переменной "а" прямо при выводе
    cout << pa << endl;//вывод на экран адреса переменной "а", хранящегося в указателе "ра"
    cout << *pa << endl;//Разыменование указателя "ра" и получение значения по адресу

    int* pb;
    int b = 3;
    pb = &b;
#endif // POINTERS_BASIC*/

    const int n = 5;
    int arr[n] = { 3,5,8,13,21 };
    cout << arr << endl;
    cout << *arr << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
        
    }
    cout<<endl;
}
