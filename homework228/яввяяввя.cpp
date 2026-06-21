////задание 1
//#include <iostream>
//
//using namespace std;
//
//double add(double a, double b)
//{
//    return a + b;
//}
//
//double sub(double a, double b)
//{
//    return a - b;
//}
//
//double mul(double a, double b)
//{
//    return a * b;
//}
//
//double divi(double a, double b)
//{
//    return a / b;
//}
//
//int main()
//{
//    double a, b;
//
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//
//    cout << "0 - +" << endl;
//    cout << "1 - -" << endl;
//    cout << "2 - *" << endl;
//    cout << "3 - /" << endl;
//
//    int choice;
//    cin >> choice;
//
//    double (*func[4])(double, double) =
//    {
//        add,
//        sub,
//        mul,
//        divi
//    };
//
//    cout << "Result = "
//        << func[choice](a, b);
//
//    return 0;
//}

////задание 2
//#include <iostream>
//
//using namespace std;
//
//void SumArrays(int* a, int* b, int* c, int size)
//{
//    for (int i = 0; i < size; i++)
//        c[i] = a[i] + b[i];
//}
//
//int main()
//{
//    const int size = 5;
//
//    int a[size] = { 1, 2, 3, 4, 5 };
//    int b[size] = { 5, 4, 3, 2, 1 };
//    int c[size];
//
//    SumArrays(a, b, c, size);
//
//    cout << "Array C:" << endl;
//
//    for (int i = 0; i < size; i++)
//        cout << c[i] << " ";
//
//    return 0;
//}
