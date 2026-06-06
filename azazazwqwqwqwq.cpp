//zad1
//#include <iostream>
//
//using namespace std;
//
//int power(int num, int degree)
//{
//    if (degree == 0)
//        return 1;
//
//    return num * power(num, degree - 1);
//}
//
//int main()
//{
//    int num, degree;
//
//    cout << "введіть число: ";
//    cin >> num;
//
//    cout << "ведіть степінь: ";
//    cin >> degree;
//
//    cout << "результат: " << power(num, degree);
//
//    return 0;
//}
//
//zad2
//#include <iostream>
//
//using namespace std;
//
//void printStars(int n)
//{
//    if (n <= 0)
//        return;
//
//    cout << "*";
//    printStars(n - 1);
//}
//
//int main()
//{
//    int n;
//
//    cout << "Введіть N: ";
//    cin >> n;
//
//    printStars(n);
//
//    return 0;
//}
//
//zaad3
//#include <iostream>
//
//using namespace std;
//
//int sumRange(int a, int b)
//{
//    if (a == b)
//        return a;
//
//    return a + sumRange(a + 1, b);
//}
//
//int main()
//{
//    int a, b;
//
//    cout << "Введіть a: ";
//    cin >> a;
//
//    cout << "Введіть b: ";
//    cin >> b;
//
//    cout << "Сума = " << sumRange(a, b);
//
//    return 0;
//}
//
//zad4
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//const int SIZE = 100;
//
//int sum10(int arr[], int start)
//{
//    if (start + 10 > SIZE)
//        return 1000000;
//
//    int sum = 0;
//
//    for (int i = start; i < start + 10; i++)
//        sum += arr[i];
//
//    return sum;
//}
//
//int findMinPos(int arr[], int pos, int minPos)
//{
//    if (pos > SIZE - 10)
//        return minPos;
//
//    if (sum10(arr, pos) < sum10(arr, minPos))
//        minPos = pos;
//
//    return findMinPos(arr, pos + 1, minPos);
//}
//
//int main()
//{
//    srand(time(0));
//
//    int arr[SIZE];
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        arr[i] = rand() % 100 - 50;
//        cout << arr[i] << " ";
//    }
//
//    cout << "\n\n";
//
//    int position = findMinPos(arr, 0, 0);
//
//    cout << "Початок послідовності - " << position << endl;
//    cout << "Мінімальна сума 10 елементів - "
//        << sum10(arr, position);
//
//    return 0;
//}