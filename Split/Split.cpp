#include <iostream>
using namespace std;

void FillRand(int arr[], int n);
void Print(int arr[], int n);

void main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];

    FillRand(arr, n);
    Print(arr, n);
    cout << endl;

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0) 
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    int* even = new int[even_count]{};
    int* odd = new int[odd_count]{};

    int A1 = 0, A2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[A1] = arr[i];
            A1++;
        }
        else
        {
            odd[A2] = arr[i];
            A2++;
        }
    }

    Print(even, even_count);
    Print(odd, odd_count);

    delete[]odd;
    delete[]even;
    
}

void FillRand(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%100;
    }
}

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
