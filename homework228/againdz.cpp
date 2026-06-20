#include <iostream>

using namespace std;

double Max(int* a, int size)
{
    int max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

double Min(int* a, int size)
{
    int min = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    return min;
}

double Avg(int* a, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += a[i];

    return (double)sum / size;
}

double Action(int* a, int* b, int sizeA, int sizeB,
    double (*func)(int*, int))
{
    int size = sizeA + sizeB;

    int* c = new int[size];

    for (int i = 0; i < sizeA; i++)
        c[i] = a[i];

    for (int i = 0; i < sizeB; i++)
        c[sizeA + i] = b[i];

    double result = func(c, size);

    delete[] c;

    return result;
}

int main()
{
    int a[] = { 4, 8, 2, 9, 1 };
    int b[] = { 7, 3, 5, 6, 10 };

    int choice;

    cout << "1 - Max" << endl;
    cout << "2 - Min" << endl;
    cout << "3 - Avg" << endl;
    cout << "Choice: ";
    cin >> choice;

    double result = 0;

    switch (choice)
    {
    case 1:
        result = Action(a, b, 5, 5, Max);
        break;

    case 2:
        result = Action(a, b, 5, 5, Min);
        break;

    case 3:
        result = Action(a, b, 5, 5, Avg);
        break;

    default:
        cout << "Wrong choice!";
        return 0;
    }

    cout << "Result = " << result;

    return 0;
}