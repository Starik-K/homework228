дз(1)

#include <iostream>
using namespace std;

int* CreateArray(int size)
{
    return new int[size];
}

void InitArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void DeleteArray(int*& arr)
{
    delete[] arr;
    arr = NULL;
}

void AddEnd(int*& arr, int& size, int value)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
        temp[i] = arr[i];

    temp[size] = value;

    delete[] arr;
    arr = temp;
    size++;
}

void InsertIndex(int*& arr, int& size, int index, int value)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < index; i++)
        temp[i] = arr[i];

    temp[index] = value;

    for (int i = index; i < size; i++)
        temp[i + 1] = arr[i];

    delete[] arr;
    arr = temp;
    size++;
}

void DeleteIndex(int*& arr, int& size, int index)
{
    int* temp = new int[size - 1];

    for (int i = 0; i < index; i++)
        temp[i] = arr[i];

    for (int i = index + 1; i < size; i++)
        temp[i - 1] = arr[i];

    delete[] arr;
    arr = temp;
    size--;
}

int main()
{
    int size;
    cin >> size;

    int* arr = CreateArray(size);

    InitArray(arr, size);
    PrintArray(arr, size);

    AddEnd(arr, size, 100);
    PrintArray(arr, size);

    InsertIndex(arr, size, 1, 50);
    PrintArray(arr, size);

    DeleteIndex(arr, size, 2);
    PrintArray(arr, size);

    DeleteArray(arr);

    return 0;
}

дз(2)

#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int* RemovePrimes(int* arr, int size, int& newSize)
{
    newSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (!IsPrime(arr[i]))
            newSize++;
    }

    int* result = new int[newSize];

    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (!IsPrime(arr[i]))
        {
            result[j] = arr[i];
            j++;
        }
    }

    return result;
}

int main()
{
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int newSize;

    int* result = RemovePrimes(arr, size, newSize);

    for (int i = 0; i < newSize; i++)
        cout << result[i] << " ";

    delete[] arr;
    delete[] result;

    return 0;
}


дз(3)


#include <iostream>
using namespace std;

void SplitArray(int arr[], int size,
    int*& pos, int& posSize,
    int*& neg, int& negSize,
    int*& zero, int& zeroSize)
{
    posSize = 0;
    negSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            posSize++;
        else if (arr[i] < 0)
            negSize++;
        else
            zeroSize++;
    }

    pos = new int[posSize];
    neg = new int[negSize];
    zero = new int[zeroSize];

    int p = 0;
    int n = 0;
    int z = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            pos[p++] = arr[i];
        else if (arr[i] < 0)
            neg[n++] = arr[i];
        else
            zero[z++] = arr[i];
    }
}

int main()
{
    int arr[] = { -5, 0, 8, -2, 3, 0, 7 };
    int size = 7;

    int* pos;
    int* neg;
    int* zero;

    int posSize;
    int negSize;
    int zeroSize;

    SplitArray(arr, size,
        pos, posSize,
        neg, negSize,
        zero, zeroSize);

    cout << "Positive: ";
    for (int i = 0; i < posSize; i++)
        cout << pos[i] << " ";

    cout << "\nNegative: ";
    for (int i = 0; i < negSize; i++)
        cout << neg[i] << " ";

    cout << "\nZero: ";
    for (int i = 0; i < zeroSize; i++)
        cout << zero[i] << " ";

    delete[] pos;
    delete[] neg;
    delete[] zero;

    return 0;
}