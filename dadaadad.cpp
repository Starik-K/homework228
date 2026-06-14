//дз1
//#include <iostream>
//using namespace std;
//
//void sortArray(int arr[], int size, bool descending = false)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = 0; j < size - i - 1; j++)
//        {
//            if ((!descending && arr[j] > arr[j + 1]) ||
//                (descending && arr[j] < arr[j + 1]))
//            {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[10] = { 5, 2, 8, 1, 9, 3, 7, 4, 6, 0 };
//
//    sortArray(arr, 10, true);
//
//    for (int i = 0; i < 10; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}
//
//дз2
//
//void sortHalfArray(int arr[], int size)
//{
//    int mid = size / 2;
//    for (int i = 1; i < mid; i++)
//    {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j >= 0 && arr[j] < key)
//        {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//
//        arr[j + 1] = key;
//    }
//
//    for (int i = mid + 1; i < size; i++)
//    {
//        int key = arr[i];
//        int j = i - 1;
//
//        while (j >= mid && arr[j] > key)
//        {
//            arr[j + 1] = arr[j];
//            j--;
//        }
//
//        arr[j + 1] = key;
//    }
//}
//
//int main()
//{
//    int arr[10] = { 5, 8, 1, 9, 2, 7, 4, 6, 3, 0 };
//
//    sortHalfArray(arr, 10);
//
//    for (int i = 0; i < 10; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}
//дз3
//
//void sortBetweenNegatives(int arr[], int size)
//{
//    int left = -1;
//    int right = -1;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] < 0)
//        {
//            left = i;
//            break;
//        }
//    }
//
//    for (int i = size - 1; i >= 0; i--)
//    {
//        if (arr[i] < 0)
//        {
//            right = i;
//            break;
//        }
//    }
//
//    if (left == -1 || right == -1 || left >= right - 1)
//        return;
//
//    for (int i = left + 1; i < right; i++)
//    {
//        for (int j = left + 1; j < right - (i - left - 1) - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[10] = { 5, -3, 8, 1, 4, 0, 2, 7, -1, 6 };
//
//    sortBetweenNegatives(arr, 10);
//
//    for (int i = 0; i < 10; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}
