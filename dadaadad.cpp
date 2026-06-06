//zadanichko 1
//
//#include <iostream>
//using namespace std;
//
//int LinearSearch(int arr[], int n, int key)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == key)
//            return i;
//    }
//
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 5, 2, 8, 1, 9 };
//    int n = 5;
//    int key;
//
//    cin >> key;
//
//    int pos = LinearSearch(arr, n, key);
//
//    if (pos != -1)
//        cout << "Знайдено. Індекс: " << pos;
//    else
//        cout << "Не знайдено";
//
//    return 0;
//}
//
//zadanya 2
//#include <iostream>
//using namespace std;
//
//int BinarySearch(int arr[], int n, int key)
//{
//    int left = 0;
//    int right = n - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//
//        if (arr[mid] == key)
//            return mid;
//
//        if (arr[mid] < key)
//            left = mid + 1;
//        else
//            right = mid - 1;
//    }
//
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9 };
//    int n = 5;
//    int key;
//
//    cin >> key;
//
//    int pos = BinarySearch(arr, n, key);
//
//    if (pos != -1)
//        cout << "Знайдено. Індекс: " << pos;
//    else
//        cout << "Не знайдено";
//
//    return 0;
//}
//
//zadanijko 3
//
//#include <iostream>
//using namespace std;
//
//int BinaryToDecimal(int bin)
//{
//    int dec = 0;
//    int power = 1;
//
//    while (bin > 0)
//    {
//        int digit = bin % 10;
//        dec += digit * power;
//
//        power *= 2;
//        bin /= 10;
//    }
//
//    return dec;
//}
//
//int main()
//{
//    int bin;
//
//    cin >> bin;
//
//    cout << "Десяткове число: "
//        << BinaryToDecimal(bin);
//
//    return 0;
//}