#include <iostream>
#include <ctime>
#include <cstdlib>
#include "function.h"

using namespace std;
void RandomIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

void OutputIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int FindLowestInt(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}

int FindHighestInt(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void OrderIntArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
                pos = j;
        }

        int t = arr[i];
        arr[i] = arr[pos];
        arr[pos] = t;
    }
}

void ChangeIntElement(int arr[], int index, int value)
{
    arr[index] = value;
}
void RandomDoubleArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = (rand() % 1000) / 10.0;
}

void OutputDoubleArray(double arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

double FindLowestDouble(double arr[], int size)
{
    double min = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}

double FindHighestDouble(double arr[], int size)
{
    double max = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void OrderDoubleArray(double arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
                pos = j;
        }

        double t = arr[i];
        arr[i] = arr[pos];
        arr[pos] = t;
    }
}

void ChangeDoubleElement(double arr[], int index, double value)
{
    arr[index] = value;
}
void RandomCharArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = 'A' + rand() % 26;
}

void OutputCharArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

char FindLowestChar(char arr[], int size)
{
    char min = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}

char FindHighestChar(char arr[], int size)
{
    char max = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void OrderCharArray(char arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int pos = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
                pos = j;
        }

        char t = arr[i];
        arr[i] = arr[pos];
        arr[pos] = t;
    }
}

void ChangeCharElement(char arr[], int index, char value)
{
    arr[index] = value;
}