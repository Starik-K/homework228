////задание 1
////
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////// int
////void Init(int a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        for (int j = 0; j < n; j++)
////            cin >> a[i][j];
////}
////
////void Print(int a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = 0; j < n; j++)
////            cout << a[i][j] << " ";
////        cout << endl;
////    }
////}
////
////void MinMaxDiag(int a[][10], int n)
////{
////    int mn = a[0][0], mx = a[0][0];
////
////    for (int i = 0; i < n; i++)
////    {
////        if (a[i][i] < mn) mn = a[i][i];
////        if (a[i][i] > mx) mx = a[i][i];
////    }
////
////    cout << "Min = " << mn << endl;
////    cout << "Max = " << mx << endl;
////}
////
////void SortRows(int a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        sort(a[i], a[i] + n);
////}
////
////// double
////void Init(double a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        for (int j = 0; j < n; j++)
////            cin >> a[i][j];
////}
////
////void Print(double a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = 0; j < n; j++)
////            cout << a[i][j] << " ";
////        cout << endl;
////    }
////}
////
////void MinMaxDiag(double a[][10], int n)
////{
////    double mn = a[0][0], mx = a[0][0];
////
////    for (int i = 0; i < n; i++)
////    {
////        if (a[i][i] < mn) mn = a[i][i];
////        if (a[i][i] > mx) mx = a[i][i];
////    }
////
////    cout << "Min = " << mn << endl;
////    cout << "Max = " << mx << endl;
////}
////
////void SortRows(double a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        sort(a[i], a[i] + n);
////}
////
////// char
////void Init(char a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        for (int j = 0; j < n; j++)
////            cin >> a[i][j];
////}
////
////void Print(char a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = 0; j < n; j++)
////            cout << a[i][j] << " ";
////        cout << endl;
////    }
////}
////
////void MinMaxDiag(char a[][10], int n)
////{
////    char mn = a[0][0], mx = a[0][0];
////
////    for (int i = 0; i < n; i++)
////    {
////        if (a[i][i] < mn) mn = a[i][i];
////        if (a[i][i] > mx) mx = a[i][i];
////    }
////
////    cout << "Min = " << mn << endl;
////    cout << "Max = " << mx << endl;
////}
////
////void SortRows(char a[][10], int n)
////{
////    for (int i = 0; i < n; i++)
////        sort(a[i], a[i] + n);
////}
////
////int main()
////{
////    int n = 3;
////    int a[10][10];
////
////    Init(a, n);
////
////    cout << "Matrix:\n";
////    Print(a, n);
////
////    MinMaxDiag(a, n);
////
////    SortRows(a, n);
////
////    cout << "Sorted:\n";
////    Print(a, n);
////
////    return 0;
////}
//задание 2
//#include <iostream>
//using namespace std;
//
//int NSD(int a, int b)
//{
//    if (b == 0)
//        return a;
//
//    return NSD(b, a % b);
//}
//
//int main()
//{
//    int a, b;
//
//    cin >> a >> b;
//
//    cout << "NSD = " << NSD(a, b);
//
//    return 0;
//}
//
//задание 3
//#include <iostream>
//using namespace std;
//
//void Game(int secret, int tries = 1)
//{
//    int num;
//    cin >> num;
//
//    int bulls = 0;
//    int cows = 0;
//
//    string s1 = to_string(secret);
//    string s2 = to_string(num);
//
//    for (int i = 0; i < 4; i++)
//    {
//        if (s1[i] == s2[i])
//            cows++;
//
//        for (int j = 0; j < 4; j++)
//        {
//            if (s1[i] == s2[j])
//            {
//                bulls++;
//                break;
//            }
//        }
//    }
//
//    cout << "Бики: " << bulls << endl;
//    cout << "Корови: " << cows << endl;
//
//    if (num == secret)
//    {
//        cout << "Вгадано за " << tries << " спроб!" << endl;
//        return;
//    }
//
//    Game(secret, tries + 1);
//}
//
//int main()
//{
//    int secret = 6769;
//
//    cout << "Вгадайте число:\n";
//
//    Game(secret);
//
//    return 0;
//}
