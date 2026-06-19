//дз(1)
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int m, n;
//
//    cout << "M = ";
//    cin >> m;
//
//    int* A = new int[m];
//
//    for (int i = 0; i < m; i++)
//        cin >> A[i];
//
//    cout << "N = ";
//    cin >> n;
//
//    int* B = new int[n];
//
//    for (int i = 0; i < n; i++)
//        cin >> B[i];
//
//    int* C = new int[m + n];
//
//    for (int i = 0; i < m; i++)
//        C[i] = A[i];
//
//    for (int i = 0; i < n; i++)
//        C[m + i] = B[i];
//
//    cout << "Result: ";
//
//    for (int i = 0; i < m + n; i++)
//        cout << C[i] << " ";
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}
//
//
//
//дз(2)
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int m, n;
//
//    cin >> m;
//    int* A = new int[m];
//
//    for (int i = 0; i < m; i++)
//        cin >> A[i];
//
//    cin >> n;
//    int* B = new int[n];
//
//    for (int i = 0; i < n; i++)
//        cin >> B[i];
//
//    int* C = new int[(m < n) ? m : n];
//    int sizeC = 0;
//
//    for (int i = 0; i < m; i++)
//    {
//        bool found = false;
//
//        for (int j = 0; j < n; j++)
//        {
//            if (A[i] == B[j])
//            {
//                found = true;
//                break;
//            }
//        }
//
//        if (found)
//        {
//            bool repeat = false;
//
//            for (int k = 0; k < sizeC; k++)
//            {
//                if (C[k] == A[i])
//                {
//                    repeat = true;
//                    break;
//                }
//            }
//
//            if (!repeat)
//            {
//                C[sizeC] = A[i];
//                sizeC++;
//            }
//        }
//    }
//
//    cout << "Common: ";
//
//    for (int i = 0; i < sizeC; i++)
//        cout << C[i] << " ";
//
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}
//
//дз(3)
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int m;
//
//    cout << "Size = ";
//    cin >> m;
//
//    int* A = new int[m];
//
//    for (int i = 0; i < m; i++)
//        cin >> A[i];
//
//    cout << "1 - delete even\n";
//    cout << "2 - delete odd\n";
//
//    int choice;
//    cin >> choice;
//
//    int newSize = 0;
//
//    for (int i = 0; i < m; i++)
//    {
//        if (choice == 1)
//        {
//            if (A[i] % 2 != 0)
//                newSize++;
//        }
//        else
//        {
//            if (A[i] % 2 == 0)
//                newSize++;
//        }
//    }
//
//    int* B = new int[newSize];
//
//    int j = 0;
//
//    for (int i = 0; i < m; i++)
//    {
//        if (choice == 1)
//        {
//            if (A[i] % 2 != 0)
//            {
//                B[j] = A[i];
//                j++;
//            }
//        }
//        else
//        {
//            if (A[i] % 2 == 0)
//            {
//                B[j] = A[i];
//                j++;
//            }
//        }
//    }
//
//    cout << "Result: ";
//
//    for (int i = 0; i < newSize; i++)
//        cout << B[i] << " ";
//
//    delete[] A;
//    delete[] B;
//
//    return 0;
//}